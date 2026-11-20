/*Ushtrimi 1: 
Shkruani nje program qe merr ne input tre numra te plote dhe gjen 
cili prej tyre eshte me i madhi,duke perdorur 'if/else-if'.
Shembull :
Input: 4 9 2 -> Output : Numri 2 eshte me i madhi.
Input: 7 3 5 -> Output : Numri 1 eshte me i madhi.
*/

#include <stdio.h>

int main(){
    int nr1,nr2,nr3;

    printf("shkruani nje numer:\n");
    scanf("%d",&nr1);    
    
    printf("shkruani nje numer tjeter:\n");
    scanf("%d",nr2);

    printf("shkruani nje numer tjeter:\n");
    scanf("%d",nr3);
    
    if(nr1>nr2){
        if(nr1>nr3){
            printf("numri 1 eshte i madh\n");
        }else{
            printf("numri 3 eshte i madh\n");
        }
    }else if(nr2>nr3)
        printf("numri 2 eshte me i madhi\n");
    }else{
        printf("numri 3 eshte me i madhi\n");
    }
    
   return 0;
}