//Ushtrimi 4
//Java 6; Kushtet ne C
//'Switch-case'
//Pershtatni ne shqip kodin e dhene ne faqen e fundit te leksionit nr. 4 'Kushtet ne C.'
//Formati i input-it: 3/20/05.
//Si e konverton programi: Date: 20th of March, 2005

#include <stdio.h>

int main (void){

    int muaj,dita,viti;

    printf("Vendos daten dita/muaj/viti:");
    scanf("%d/%d/%d",&dita,&muaj,&viti);

    printf("Dita:%d ",dita);

    switch(muaj){
        case 1:printf("Janar");break;
        case 2:printf("Shkurt");break;
        case 3:printf("Mars");break;
        case 4:printf("Prill");break;
        case 5:printf("Maj");break;
        case 6:printf("Qershor");break;
        case 7:printf("Korrik");break;
        case 8:printf("Gusht");break;
        case 9:printf("Shtator");break;
        case 10:printf("Tetor");break;
        case 11:printf("Nentor");break;
        case 12:printf("Dhjetor");break;
        default:
        puts("Gabim!Keni vendosur nje date qe nuk egziston");
    }
    printf(",20%.2d.\n",viti);

    return 0;
}