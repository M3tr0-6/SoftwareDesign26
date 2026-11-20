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
    
    int a;
    int b;
    printf("shkruani nje nr:");
    scanf("%d",&a);
    printf("shkruani nje nr tjt:");
    scanf("%d",&b);
    int max=  if(a>b)?a:b;
    if(a>b){
        max=a;
    }else{
        max=b;
    }
    printf("numri me i madh eshte: %d\n ",max);
    return 0;

  
        
        

    
    
    
    
    
    return 0;
}