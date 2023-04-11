#include <stdio.h>
#include <math.h>
double raio;
int main(){
    printf("Digite o raio da circunferencia:\n");
    scanf("%lf", &raio);
    double area= pow(raio,2)*3.14159;
    printf("A=%.4lf", area);
    return 0;
}
/************************************************************************************/
#include <stdio.h>
int A, B;
int main(){
    printf("Digite dois valores inteiros:\n");
    scanf("%d\n%d", &A, &B);
    int prod = A*B;
    printf("PROD = %d", prod);
    return 0;
}
/**************************************************************************************/
#include <stdio.h>
#include <math.h>
double A, B, C;
int main(){
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    double media = (A*2 + B*3 + C*5) /10;
    printf("MEDIA = %.1lf", media);
    return 0;
}
/**************************************************************************************/
#include <stdio.h>
#include <math.h>
double raio;
int main(){
    scanf("%lf", &raio);
    double volume = (4.0/3)*3.14159*pow(raio, 3);
    printf("VOLUME = %.3lf", volume);
    return 0;
}
/***************************************************************************************/
#include <stdio.h>
#include <math.h>
double X1, X2, Y1, Y2;
int main(){
    scanf("%lf %lf\n%lf %lf", &X1, &Y1, &X2, &Y2);
    double distancia = sqrt(pow(X2-X1,2) + pow(Y2-Y1,2));
    printf("DISTANCIA = %.4lf", distancia);
    return 0;
}
/******************************************************************************************/
#include <stdio.h>
#include <math.h>
int valor;
int main(){
    scanf("%d", &valor);
    int nota100 = valor/100;
    int nota50 = (valor%100)/50;
    int nota20 = ((valor%100)%50)/20;
    int nota10 = (((valor%100)%50)%20)/10;
    int nota5 = ((((valor%100)%50)%20)%10)/5;
    int nota2 = (((((valor%100)%50)%20)%10)%5)/2;
    int nota1 = (((((valor%100)%50)%20)%10)%5)%2;
    
    printf("%d\n%d notas de R$100,00\n%d notas de R$50,00\n%d notas de R$20,00\n%d notas de R$10,00\n%d notas de R$5,00\n%d notas de R$2,00\n%d notas de R$1,00", valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    return 0;
}
/********************************************************************************************/
#include <stdio.h>
#include <math.h>
float N1, N2, N3, N4, exame;
int main(){
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    float media = (N1*2 + N2*3 + N3*4 +N4) /10;
    printf("Media: %.1f", media);
    if(media>=7.0){
        printf("\nAluno aprovado.");
    }
    else{
        if(media<5.0){
            printf("\nAluno reprovado.");
        }
        else{
            printf("\nAluno em exame. Digite a nota do exame:");
            scanf("%f", &exame);
            printf("Nota do exame: %.1f", exame);
            float mediaFinal = (media + exame)/2;
            if(mediaFinal>=5.0){
                printf("\nAluno aprovado.");
            }
            else{
                printf("\nAluno reprovado.");
            }
            printf("\nMedia final: %.1f", mediaFinal);
        }
    }
    return 0;
}
/********************************************************************************/
#include <stdio.h>
float X, Y;
int main()
{
    scanf("%f %f", &X, &Y);
    if (X > 0)
    {
        if (Y < 0)
        {
            printf("Q4");
        }
        else
        {
            if (Y > 0)
            {
                printf("Q1");
            }
            else
            {
                printf("Eixo Y");
            }
        }
    }
    else
    {
        if (X < 0)
        {
            if (Y < 0)
            {
                printf("Q3");
            }
            else
            {
                if (Y > 0)
                {
                    printf("Q2");
                }
                else
                {
                    printf("Eixo Y");
                }
            }
        }
        else
        {
            if (Y == 0)
            {
                printf("Origem");
            }
            else
            {
                printf("Eixo X");
            }
        }
    }
    return 0;
}
/******************************************************************************/
#include <stdio.h>
#include <math.h>
float A, B, C;
int main(){
    scanf("%f %f %f", &A, &B, &C);
    if(fabs(B-C)<A && A<(B+C) && fabs(A-C)<B && B<(A+C) && fabs(A-B)<C && C<(A+B)){
        printf("Perimetro = %.1f", A+B+C);
    }
    else{
        printf("Area = %.1f", ((A+B)*C)/2);
    }
    return 0;
}
/***************************************************************************************/
#include <stdio.h>
#include <math.h>
float salario;
int main()
{
    scanf("%f", &salario);
    if (salario <= 400.00)
    {
        float reajuste = (salario * 15) / 100;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%%", salario + reajuste, reajuste);
    }
    else
    {
        if (salario > 400.00 && salario <= 800.00)
        {
            float reajuste = (salario * 12) / 100;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%%", salario + reajuste, reajuste);
        }
        else
        {
            if (salario > 800.00 && salario <= 1200.00)
            {
                float reajuste = (salario * 10) / 100;
                printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%%", salario + reajuste, reajuste);
            }
            else
            {
                if (salario > 1200.00 && salario <= 2000.00)
                {
                    float reajuste = (salario * 7) / 100;
                    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%%", salario + reajuste, reajuste);
                }
                else
                {
                    if (salario > 2000.00)
                    {
                        float reajuste = (salario * 4) / 100;
                        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4%%", salario + reajuste, reajuste);
                    }
                }
            }
        }
    };
    return 0;
}
