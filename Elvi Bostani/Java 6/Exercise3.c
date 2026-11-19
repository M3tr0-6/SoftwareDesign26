//Ushtrimi 3
//Java 6; Kushtet ne C
//'Operatori ternar'
//Shkruani nje program i cili gjen vleren me te vogel midis dy numrave

#include <stdio.h>

int main() {
    //Deklaroni dy variabla dhe jepini atyre vlere me 'scanf'
    

    //Duke perdorur operatorin ternar gjeni vleren me te vogel midis dy numrave
    //Ruani rezultatin ne nje variabel te re
    //Nese 'a' eshte me e vogel se 'b', rezultati = 'a+b', ne te kundert 'a-b'
    

    //Printoni rezultatin ne terminal
    int numri1;
    int numri2;

    printf("Vendos numrin e pare:");
    scanf("%d",&numri1);

    printf("Vendos numrin e dyte:");
    scanf("%d,&numri2");

    int nrmeivogel=(numri1<numri2)?numri1:numri2;

    printf("Numri me i vogel eshte %d",nrmeivogel);

    

    return 0;
}
