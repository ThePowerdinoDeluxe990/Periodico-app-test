#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//Recomienden librerias de color pls

int main (){
char edit[0];

printf("Bievenido a este programa para saber si una noticia es Fake\n");
printf("\nPara insertar el nombre del periodico tiene que poner el nombre del periodico (Recomendamos Copiar y pegar)");

for(;;){
printf(" \nOpciones:  ");
printf("\n______________________________\n");
printf("|Info|Escribir el nombre|ESC |:");
fgets(edit,25,stdin);
edit[strlen(edit)-1] ='\0';
//Este es el bucle que hace que el programa solo se cierre con el commando ESC
while(strlen(edit)== 0)
{
printf("");
fgets(edit,25,stdin);
edit[strlen(edit)-1] ='\0';
//Esto es lo de las noticias, para añadir una mas pon else if , se que no es el mejor metodo pero el switch no me funcionaba
}
if( strcmp(edit,"EL MUNDO")== 0){

    printf("\nEl Periodico EL MUNDO es confiable,pero revise en otros\n",edit); 
}

    else if ( strcmp(edit,"EL PAIS")== 0){
    printf("\nEl periodico EL PAIS (Postura Politica: Centroizquierda​​)​,es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if( strcmp(edit,"ABC")== 0){
        printf("\nEl periodico ABC (Ideologia Politica:Socioliberalismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if(strcmp(edit, "La Vanguardia")== 0){
        printf("\nEl periodico La Vanguardia (Ideologia Politica: Centrismo, liberalismo, monarquismo, catalanismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
else if(strcmp(edit, "El Espanol")== 0){
        printf("\nEl periodico El Español(Ideologia Politica: Socioliberalista), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    }
    else if(strcmp(edit, "La Razon")== 0){
        printf("\nEl periodico La Razon (Ideologia Politica: Conservadurismo,Monarquismo), es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    
    }
     else if(strcmp(edit, "Ok Diario")== 0){
        printf("\nEl periodico Ok Diario (Ideologia Politica: Neoliberalismo,​Nacionalismo), no es muy confiable,revise otros periodicos para mejor verificacion.\n",edit);
    
    }

else if(strcmp(edit, "Antena 3")== 0){
        printf("\nEl periodico Antena 3 (Ideologia Politica: El PP),es confiable,revise otros periodicos para mejor verificacion.\n",edit);
    

    }else if(strcmp(edit, "Info")== 0){
        //La mini TUI que hice para la info de los periodicos que hay
        printf("\nAqui tiene los periodicos disponibles en este programa");
        printf("\n________________________________________________");
        printf("\n|EL MUNDO  |EL PAIS   |ABC       |La Vanguardia|");
        printf("\n------------------------------------------------");
        printf("\n________________________________________________");
        printf("\n|El Espanol|La Razon |Ok Diario  |Antena 3     |");
        printf("\n------------------------------------------------\n");
        
    }else if(strcmp(edit, "ESC")==0){
        printf("\nAdios!\n");
        system("pause");
        return 0;
        //Esto es el esc no lo toqueis o si no no podreis salir
    }
    else{
    printf("\nEse periodico no es confiable o poco conocido(Contacte con soporte)");
   
}
}

//Esto es para que no se salga automaticamente

system("pause");
return 0;

}






    
