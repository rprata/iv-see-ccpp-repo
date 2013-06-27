 #include <stdio.h>

 int main(void)
 {
    int vetor[5];
    int x, y, z;
 
    printf ("digite 5 numeros\n");
 
    for (y = 0; y < 5; y++)   /*Este laco faz o scan de cada elemento do vetor*/
    {
       scanf("%d", &vetor[y]);
    }
    y = 1;
    x = vetor[0];
 
    while (y < 5) /*Este laco compara cada elemento do vetor*/
    {
        if (vetor[y] > x)
        {
           x = vetor[y];
        }
        y++;
    }

    y = 1;
    z = vetor[0];
    while (y < 5) /*Este laco compara cada elemento do vetor*/
    {
        if (vetor[y] < z)
        {
           z = vetor[y];
        }
        y++;
    }
 
    printf("O maior numero que voce digitou foi %d \n",x);
    printf("O menor numero que voce digitou foi %d \n", z);
    return 0;
 }