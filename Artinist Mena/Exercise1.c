/*Ushtrimi 1: 
Shkruani nje program qe merr ne input tre numra te plote dhe gjen 
cili prej tyre eshte me i madhi,duke perdorur 'if/else-if'.
Shembull :
Input: 4 9 2 -> Output : Numri 2 eshte me i madhi.
Input: 7 3 5 -> Output : Numri 1 eshte me i madhi.
*/

#include <stdio.h>

int main(){
    int numri1,numri2,numri3;

    scanf("%d %d %d", &numri1, &numri2, &numri3);

    if (numri1 >= numri2 && numri1 >= numri3) {
        printf("Numri 1 eshte me i madhi.\n");
    } else if (numri2 >= numri1 && numri2 >= numri3) {
        printf("Numri 2 eshte me i madhi.\n");
    } else {
        printf("Numri 3 eshte me i madhi.\n");
    }

    return 0;
}