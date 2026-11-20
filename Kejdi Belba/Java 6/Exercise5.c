//Ushtrimi 5
//Java 6; Kushtet ne C
//'Switch-case'
//Shkruani nje program i cili ne terminal shfaq se sa dite ka muaji ne baze te numrit te muajit qe jepet (nga 1-12)

#include <stdio.h>

int main(){
    //Deklaroni nje variabel ne te cilen do te ruani numrin e muajit ne te cilin jemi

    //Merrni ne input vleren

    //Perdorni 'switch-case' per te shfaqur ne terminal nese muaji i dhene ka 30, 31 apo 28 dite.




    return 0;
}

#include <stdio.h>

int main(){

int muaji;

printf("Vendosni Muajin:");
scanf("%d",&muaji);

switch (muaji){

    case 1: case 2: case 3: case 4: case 5:
    printf("Muaji ka 31 dite");break;
    
     case 6: case 7: case 8: case 9: case 10: case 11:
    printf("Muaji ka 30 dite");break;
    
      case 12:
     printf("Muaji ka 28 dite");break;
      
      
      
      deafult:
      	printf("Muaji i pavlefshem");
      	
      }
      
      return 0;


}