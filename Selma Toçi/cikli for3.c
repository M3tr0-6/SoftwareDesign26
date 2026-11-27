#include <stdio.h>

int main(){
    
    int n;
    int a=0;

    printf("Jepni nje numer: ");
    scanf("%d",&n);

    for(;a<=n;a++ ){
        if(a%2==0)
            printf("%d\t",a);
    }
    
    return 0;
}