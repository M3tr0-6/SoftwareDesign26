//Ushtrimi 3
//Java 6; Kushtet ne C
//'Operatori ternar'
//Shkruani nje program i cili gjen vleren me te vogel midis dy numrave

#include <stdio.h>

int main() {
    //Deklaroni dy variabla dhe jepini atyre vlere me 'scanf'
    int a;
    int b;
    printf("numri i pare:");
    scanf("%d",&a);
    printf("numri i dyte:");
    scanf("%d",&b);
    //Duke perdorur operatorin ternar gjeni vleren me te vogel midis dy numrave
    int minimumi = (a<b)?a:b;
    //Ruani rezultatin ne nje variabel te re
      printf("nr me i vogel eshte:%d");
      scanf("%d",&minimumi);
    //Nese 'a' eshte me e vogel se 'b', rezultati = 'a+b', ne te kundert 'a-b'
    if(a<b){
        a+b
        printf("rezultati eshte:%d");
    }else{
        a-b
        printf("rezultati eshte:%d");
    }

    //Printoni rezultatin ne terminal
       printf("rezultati perfundimtar eshte:%d")
    
    return 0;
}
