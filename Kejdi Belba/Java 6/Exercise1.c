/*Ushtrimi 1: 
Shkruani nje program qe merr ne input tre numra te plote dhe gjen 
cili prej tyre eshte me i madhi,duke perdorur 'if/else-if'.
Shembull :
Input: 4 9 2 -> Output : Numri 2 eshte me i madhi.
Input: 7 3 5 -> Output : Numri 1 eshte me i madhi.
*/

  int numri1,numri2,numri3;

    printf("Vendos numrin e pare:");
    scanf("%d",&numri1);

    printf("Vendos numrin e dyte:");
    scanf("%d",&numri2);

    printf("Vendos numrin e trete:");
    scanf("%d",&numri3);

    if (numri1>numri2 && numri1>numri3){
    puts("Numri i pare esht me i madhi!");
    }
    else if (numri2>numri1 && numri2>numri3){
        puts("Numri i dyte eshte me i madhi!");
    }
    else{
        puts("Numri i trete eshte me i madhi!");
    }

    return 0;

    
}