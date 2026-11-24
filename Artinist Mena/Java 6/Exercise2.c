//Ushtrimi 2
//Java 6; Kushtet ne C
//'Operatori ternar'
//Shkruani nje program i cili gjen vleren me te madhe midis dy numrave duke perdorur operatorin ternar.

#include <stdio.h>

int main() {
    //Deklaroni nje variabel te quajtur a, jepini nje vlere
    int a ;
    //Deklaroni nje variabel te quajtur b, jepini nje vlere
    int b;
    //Me ane te operatorit ternar ruani ne nje variabel te re vleren me te madhe
    //ndihme: nese 'a' eshte me e madhe se 'b', 'a' i asenjohet variablit 'max', ne te kundert i asenjohet 'b'-ja
    int max = (a > b) ? a : b;
    //Printojeni kete vlere ne terminal
    printf("Vlera me e madhe eshte: %d\n", max);
    return 0;
}