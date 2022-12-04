#include <stdio.h>
#include <string.h>

int main (){
char edit[0];

printf("Bievenido a este programa para saber si una noticia es Fake\n");
printf("\nPara insertar el nombre del periodico tiene que poner el nombre del periodico (Recomendamos Copiar y pegar)");
printf(" Inserte el nombre del periodico:\n  ");
scanf("%[^\n]",&edit);

if( strcmp(edit,"EL MUNDO")== 0){
    printf("El Periodico The Wall Street Journal es confiable,pero revise en otros\n",edit);
}

    else if ( strcmp(edit,"EL PAIS")== 0){
    printf("El periodico EL PAIS (Postura Politica: Centroizquierda​​)​,es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if( strcmp(edit,"ABC")== 0){
        printf("El periodico ABC (Ideologia Politica:Socioliberalismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if(strcmp(edit, "La Vanguardia")== 0){
        printf("El periodico La Vanguardia (Ideologia Politica: Centrismo, liberalismo, monarquismo, catalanismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
else if(strcmp(edit, "El Espanol")== 0){
        printf("El periodico El Español(Ideologia Politica: Socioliberalista), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if(strcmp(edit, "La Razon")== 0){
        printf("El periodico La Razon (Ideologia Politica: Conservadurismo,Monarquismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
     else if(strcmp(edit, "Ok Diario")== 0){
        printf("El periodico Ok Diario (Ideologia Politica: Neoliberalismo,​Nacionalismo), no es muy confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }

else if(strcmp(edit, "Antena 3")== 0){
        printf("El periodico Antena 3 (Ideologia Politica: El PP),es confiable,revise otros periodicos para mejor verificacion.\n",edit);

    }
    else{
    printf("Ese periodico no es confiable o poco conocido(Contacte con soporte)");
}
system("pause");
return 0;

}






    
