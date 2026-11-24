//Ushtrimi 2
//Java 6; Kushtet ne C
//'Operatori ternar'
//Shkruani nje program i cili gjen vleren me te madhe midis dy numrave duke perdorur operatorin ternar.

#include <stdio.h>

int main() {
    //Deklaroni nje variabel te quajtur a, jepini nje vlere
    
    //Deklaroni nje variabel te quajtur b, jepini nje vlere

    //Me ane te operatorit ternar ruani ne nje variabel te re vleren me te madhe
    //ndihme: nese 'a' eshte me e madhe se 'b', 'a' i asenjohet variablit 'max', ne te kundert i asenjohet 'b'-ja

    //Printojeni kete vlere ne terminal
    
    return 0;
}

#include <stdio.h>

int main(){

    int a=7;
    int b=9;

    int vlerameemadhe= (a>b) ? a:b;
    printf("Vlera me e madhe %d",vlerameemadhe);

    return 0;

}