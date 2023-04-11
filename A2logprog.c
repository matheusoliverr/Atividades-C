#include <stdio.h>

int main(){
    float valores[6];
    int i, positivo=0;

    for(i=0; i<6; i++){
        scanf("%f", &valores[i]);
    };

    for(i=0; i<6; i++){
        if(valores[i]>0){
        positivo = ((positivo) + 1);
        }
    }

    printf("%d valores positivos\n", positivo);
    return 0;
}
/******************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    int valores[5], i, par=0;

    for(i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
    };

    i=0;
    for(i; i < 5; i++){
        if(((valores[i]) % 2)==0){
        par = ((par) + 1);
        }
    }

    printf("%d valores pares", par);
    return 0;
}
/******************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    int valores[5], i, par=0, impar=0, positivo=0, negativo=0;

    for(i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
    };

    i=0;
    for(i; i < 5; i++){
        if(((valores[i]) % 2)==0){
        par = ((par) + 1);
        }
        else{
            impar = ((impar) + 1);
        }
    }

    for(i=0; i<5; i++){
        if(valores[i]<0){
            negativo = ((negativo) + 1);
        }
        else{
            if(valores[i]>0){
            positivo = ((positivo) + 1);
            }
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
    return 0;
}
/********************************************************************************************/
#include <stdio.h>

int main()
{
    float nota[2], media;
    int X=0, i=0 ,j=0;

    for(i; i==0; i++){
    while(X<2){
        scanf("%f", &nota[X]);
        if(nota[X]<0 || nota[X]>10){
            printf("nota invalida\n");
        }
        else{
            X++;
        }
    }
    media = ((nota[0] + nota[1])/2);
    printf("media = %.2f\n", media);
    do{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &X);
    switch(X){
        case 1: i = -1, j++, X = 0;  break;
        case 2: i = 0, j++; break;
        default: j = 0; break;
    }
   }
    while(j==0);
}
return 0;
}
/*******************************************************************************************/
#include <stdio.h>

int main(){
    int X[10], i;
    for(i=0; i<10; i++){
        scanf("%d", &X[i]);
    };
    
    for(i=0; i<10; i++){
        if(X[i]<=0){
            X[i] = 1;
        };
        printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
}
/*********************************************************************************************/
#include <stdio.h>

int main()
{
    float A[100];
    int i = 0;

    for (i; i < 100; i++)
    {
        scanf("%f", &A[i]);
    }

    for (i = 0; i < 100; i++)
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, A[i]);
        };
    }
    return 0;
}
/*********************************************************************************************/
#include <stdio.h>

int main(){
    int N[20], i, number;
    for(i=0; i<20; i++){
        scanf("%d", &N[i]);
    };
    
    for(i=0; i<10; i++){
        number = N[i];
        N[i] = N[19-i];
        N[19-i] = number;
    }

    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
/*************************************************************************************/
#include <stdio.h>

int main()
{
    int T, i, j;
    unsigned int fib[60];

    scanf("%d", &T);
    int N[T];

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N[i]);
    }

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < 60; i++)
    {
        fib[i] = ((fib[(i - 1)]) + (fib[(i - 2)]));
    }

    for (i = 0; i < T; i++)
    {
        printf("Fib(%d) = %d\n", N[i], fib[(N[i])]);
    }
    return 0;
}
/***********************************************************************/
#include <stdio.h>

int main()
{
    double M[12][12], soma = 0, media = 0;
    char T;
    int i, j, L;

    scanf("%d", &L);
    scanf("%c", &T);


    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

for (j = 0; j < 12; j++)
    {
       soma = soma + (M[L][j]);
    }

    media = soma / 12;

   switch (T)
    {
    case 'S':
        printf("%.1lf", soma);
        break;
    case 'M':
        printf("%.1lf", media);
        break;
    }
   
   return 0;
}