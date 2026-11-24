#include <stdio.h>

int main(){
    int i;
    int a;
    printf("jepni vlere i:");
    scanf("%d",&i);

    for(;i<=10;i++){
      
    printf("jepni nje vlere a:");
    scanf("%d",&a);
       
    if(i==6) 
    printf("ju keni dhene vleren 6 ERROR!"); 
        break;

    }
    else
        printf("%d\n",a);
}
return 0;
}
