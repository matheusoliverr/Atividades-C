/****************************Saída de valores**************************/
#include <stdio.h>
int a;
int b;
int main()
{
    printf("Digite um número inteiro:");
    scanf("%d", &a);
    printf("Digite outro número inteiro:");
    scanf("%d", &b);
    printf("%d \n%d", a, b);
    return 0;
}

/******************************Sáida com valores trocados******************************/

#include <stdio.h>
int a;
char b;
int main()
{
    printf("Digite um caractere:");
    scanf("%c", &b);
    printf("Digite um número inteiro:");
    scanf("%d", &a);
    printf("%c\n%d", b, a);
    return 0;
}

/******************************Média de notas***********************************/
#include <stdio.h>
float a;
float b;
int main()
{
    printf("Nota do aluno 1:");
    scanf("%f", &a);
    printf("Nota do aluno 2:");
    scanf("%f", &b);
    float c = (a + b) / 2;
    printf("Media das notas:");
    printf("%2.1f", c);
    return 0;
}
/******************************Consumo médio************************************/

#include <stdio.h>
float a;
float b;
int main()
{
    printf("Distância percorrida:");
    scanf("%f", &a);
    printf("Total de litros gasto:");
    scanf("%f", &b);
    float c = a / b;
    printf("Consumo médio: %2.1f litros por km", c);

    return 0;
}
/*******************************Valores em ASCII*************************************/

#include <stdio.h>
char a;
int main()
{
    printf("Digite um caractere:");
    scanf("%c", &a);
    printf("octal: %o\ndecimal: %d\nhexadecimal: %x", a, a, a);

    return 0;
}
/*******************************Conversão de temperatura**************************************/

#include <stdio.h>
float a;
int main()
{
    printf("Digite a temperatura em graus Fahrenheit:");
    scanf("%f", &a);
    float c = (a - 32) * (5.0 / 9.0);
    printf("Temperatura em graus Celsius: %f", c);

    return 0;
}
/*********************************Medida de hipotenusa****************************************/
#include <stdio.h>
#include <math.h>
float a;
float b;
int main()
{
    printf("Medida do cateto oposto:");
    scanf("%f", &a);
    printf("Medida do cateto adjacente:");
    scanf("%f", &b);
    float c = sqrt((a * a) + (b * b));
    printf("Medida da hipotenusa:%1.1f", c);
    return 0;
}
/*******************************Expressões lógicas**************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("%d %d %d %d", !3, !0, 3 + 'a' > 'b' + 2 && !'b', 1 || !2 && 3);
    printf("\n\n");
    printf("%d\n%d\n%d\n%d", !'a', !1, 'x' + 'y' + 'z' >= 'X' + 'Y' + 'Z', 2 + 3 + 5 == 5 + 3 + 2);
    printf("\n\n");
    printf("%d", ('0' + 3) <= (2 + 3 > 5 || 6 + 3 && 4));
    return 0;
}
/************************************Reajuste salarial***********************************/
#include <stdio.h>
float S, RS, NS;
int main()
{
    printf("Informe seu salário:");
    scanf("%f", &S);
    RS = (S + 0.05 * S);
    if (S <= 750)
    {
        NS = RS + 100;
    }
    else
    {
        NS = RS;
    }
    printf("Seu novo salário é: R$%.2f", NS);
    return 0;
}

/*********************Condição com valores matemáticos e lógicos**********************/
#include <stdio.h>
#include <math.h>
int A, B, C, D;
int main()
{
    printf("Digite 4 valores:");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if (B > C && D > A && (C + D > A + B) && (C && D) && ((A % 2) == 0))
        printf("Valores Aceitos.");
    else
    {
        printf("Valores não aceitos.");
    }
    return 0;
}
/******************************Custo de peças**********************************/
#include <stdio.h>
#include <math.h>
int CP_1, CP_2, QP_1, QP_2;
float V_1, V_2;
int main()
{
    printf("Digite o codigo da peca 1:\n");
    scanf("%d", &CP_1);
    printf("Digite o numeros de pecas 1:\n");
    scanf("%d", &QP_1);
    printf("Digite o valor de cada peca 1:\n");
    scanf("%f", &V_1);
    printf("Digite o codigo da peca 2:\n");
    scanf("%d", &CP_2);
    printf("Digite o numeros de pecas 2:\n");
    scanf("%d", &QP_2);
    printf("Digite o valor de cada peca 2:\n");
    scanf("%f", &V_2);
    float VT = (V_1 * QP_1) + (V_2 * QP_1);
    printf("Valor a ser pago:R$%.2f", VT);
    return 0;
}
/**********************Distância entre pontos****************************/
#include <stdio.h>
#include <math.h>
float x_1, x_2, y_1, y_2;
int main()
{
    printf("Digite os valores para X1 e Y1:");
    scanf("%f %f", &x_1, &y_1);
    printf("Digite os valores para X2 e Y2:");
    scanf("%f %f", &x_2, &y_2);
    float d = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
    printf("Distancia=%.4f", d);
    return 0;
}
/**************************Duração de evento***************************/
#include <stdio.h>
#include <math.h>
int value;
int main()
{
    printf("Digite a duracao do evento (s):");
    scanf("%d", &value);
    int hour = value / 3600;
    int min = (value % 3600) / 60;
    int sec = (value % 3600) % 60;
    printf("Resultado = %02d:%02d:%02d", hour, min, sec);
    return 0;
}
/**************************Valores múltiplos***************************/
#include <stdio.h>
int A, B;
int main()
{
    printf("Digite 2 valores inteiros:\n");
    scanf("%d\n%d", &A, &B);
    if (A % B == 0 || B % A == 0)
    {
        printf("%d e %d sao multiplos.", A, B);
    }
    else
    {
        printf("%d e %d nao sao multiplos.", A, B);
    }
    return 0;
}
/**********************Comparação entre números********************/
#include <stdio.h>
#include <math.h>
float A, B;
int main()
{
    printf("Digite dois numeros:\n");
    scanf("%f\n%f", &A, &B);
    if (A > B)
    {
        printf("%.1f eh maior que %.1f", A, B);
    }
    else
    {
        if (A < B)
        {
            printf("%.1f eh maior que %.1f", B, A);
        }
        else
        {
            printf("Os dois numeros possuem o mesmo valor");
        }
    }
    return 0;
}
/************************Cálculo de raiz quadrada*********************/
#include <stdio.h>
#include <math.h>
float number;
int main()
{
    printf("Digite um numero:");
    scanf("%f", &number);
    if (number >= 0)
    {
        float result = sqrt(number);
        printf("Raiz quadrada:%.2f", result);
    }
    else
    {
        printf("Esse numero eh invalido");
    }
    return 0;
}
/**************************Cálculo de raiz e potência*********************/
#include <stdio.h>
#include <math.h>
float number;
int main()
{
    printf("Digite um numero:");
    scanf("%f", &number);
    if (number >= 0)
    {
        float result = sqrt(number);
        printf("Raiz quadrada do numero:%.2f", result);
    }
    else
    {
        float result = pow(number, 2);
        printf("Numero ao quadrado:%.2f", result);
    }
    return 0;
}
/***************************Raiz e potência para número positivo**************************/
#include <stdio.h>
#include <math.h>
float number;
int main()
{
    printf("Digite um numero:");
    scanf("%f", &number);
    if (number >= 0)
    {
        float square = sqrt(number);
        float power = pow(number, 2);
        printf("Numero ao quadrado:%.2f\nRaiz quadrada do numero:%.2f", power, square);
    }
    else
    {
        printf("Numero invalido");
    }
    return 0;
}
/*********************************Par ou Ímpar********************************/
#include <stdio.h>
#include <math.h>
int number;
int main()
{
    printf("Digite um numero:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d eh par", number);
    }
    else
    {
        printf("%d eh impar", number);
    }
    return 0;
}
/**************************Estruturas Condicionais Múltiplas******************************/
#include <stdio.h>
#include <math.h>
int number;
int main()
{
    printf("Digite um numero de 0 e 100:");
    scanf("%d", &number);
    if (number >= 0 && number <= 100)
    {
        if (number >= 0 && number <= 25)
        {
            printf("Intervalo [0, 25]");
        }
        else
        {
            if (number >= 25 && number <= 50)
            {
                printf("Intervalo [25, 50]");
            }
            else
            {
                if (number >= 50 && number <= 75)
                {
                    printf("Intervalo [50, 75]");
                }
                else
                {
                    printf("Intervalo [75, 100]");
                }
            }
        }
    }
    else
    {
        printf("Fora de intervalo.");
    }
    return 0;
}
/******************************Condicionais Múltiplas com Switch***************************************/
#include <stdio.h>
float x, y;
char op;
int main()
{
    printf("Expressao:\n");
    scanf("%f %c %f", &x, &op, &y);
    switch (op)
    {
    case '+':
        printf("Valor: %.2f", x + y);
        break;
    case '-':
        printf("Valor: %.2f", x - y);
        break;
    case '*':
        printf("Valor: %.2f", x * y);
        break;
    case '/':
        printf("Valor: %.2f", x / y);
        break;
    default:
        printf("%c eh um operador invalido.", op);
    }
    return 0;
}
/************************************Casos em Switch************************************************/
#include <stdio.h>
#include <math.h>
int code, qtd;
int main(){
    printf("Codigo\tNome\tPreco\n1\tPastel\tR$5,00\n2\tCoxinha\tR$6,00\n3\tEsfiha\tR$5,50\n4\tKibe\tR$6,50\n5\tRisole\tR$5,75\n\n");
    printf("Digite o codigo do item:");
    scanf("%d", &code);
    printf("\nDigite a quantidade desse item:");
    scanf("%d", &qtd);
    switch(code){
        case 1: printf("Valor a pagar: R$%.2f", 5.00*qtd);break;
        case 2: printf("Valor a pagar: R$%.2f", 6.00*qtd);break;
        case 3: printf("Valor a pagar: R$%.2f", 5.50*qtd);break;
        case 4: printf("Valor a pagar: R$%.2f", 6.50*qtd);break;
        case 5: printf("Valor a pagar: R$%.2f", 5.75*qtd);break;
        default: printf("codigo invalido");
    }
return 0;
}
/*******************************Operações Matemáticas com Switch*******************************/
#include <stdio.h>
#include <math.h>
int option, A, B;
int main(){
    printf("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\nOpcao:");
    scanf("%d", &option);
     printf("Digite dois numeros:\n");
    scanf("%d %d", &A, &B);
    switch (option){
        case 1: printf("Resultado: %d", A+B);break;
        case 2: if(A>B){printf("Resultado: %d", A-B);}
                else{printf("Resultado: %d", B-A);};break;
        case 3: printf("Resultado: %d", A*B);break;
        case 4: if(B==0){printf("Nao eh possivel dividir por 0.");}
                else{printf("Resultado: %d", A/B);};break;
        default: printf("opcao invalida");        
    }
    return 0;
}
/**********************************Contagem com Repetição**************************************/
#include <stdio.h>
int a = 1;
int main(){
    for(a;a<=100;a++){
        printf("%d\t", a);
    };

    printf("\n\n");
    a = 1;
    while(a<=100) {printf("%d\t", a);
    a++;};

    printf("\n\n");
    a = 1;
    do {
        printf("%d\t", a);
        a++;
    }
    while(a<=100);
}
/********************************Tabuada com While***********************************/
#include <stdio.h>
int number;
mult = 1;
int main()
{
    printf("Digite um numero de 1 a 20:\n");
    scanf("%d", &number);
    if (number > 0 && number <= 20)
    {
        while (mult <= 10)
        {
            printf("%d x %d = %d\n", number, mult, number * mult);
            mult++;
        }
    }
    else
    {
        printf("Esse numero nao eh valido.");
    }

    return 0;
}
/*********************************Contagem Decrescente com For***********************************/
#include <stdio.h>
int n;
int main()
{
  printf("Digite um numero:\n");
  scanf("%d", &n);
  for(n; n>=0; n--){
      printf("\n%d", n);
  }
    return 0;
}
/*********************************Tabela cm/polegada***************************************/
#include <stdio.h>
float polegada = 0;
int main()
{
  while(polegada<=10){
      printf("\n%.1f'' = %.2fcm", polegada, polegada*(2.54));
      polegada = (polegada+0.5);
  }
    return 0;
}
/*********************************Cálculo de Potência********************************************/
#include <stdio.h>
int main()
{
    float x;
    int n, i;
    float pot = 1;
    printf("Entre com o valor de x:\n");
    scanf("%f", &x);

    printf("Entre com o valor de n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        pot = pot * x;
    }

    printf("%.2f^%d = %.2f", x, n, pot);
    return 0;
}
/*********************************Cálculo de Fatorial*******************************************/
#include <stdio.h>
int n;
long int fat;
int main(){
    printf("Digite um numero natural:\n");
    scanf("%d", &n);
    if(n>=0){
        printf("%d ", n);
        fat = n;
        while(n>1){
            fat = fat*(n-1);
            printf("* %d ", n-1);
            n--;
        }
        printf("= %li", fat);
    }
    else
    {
        printf("numero invalido");
    }
    return 0;
}
/**************************Ordem Decrescente com Vetor*****************************/
#include <stdio.h>
float n[5]={1,2,3,4,5};
int main(){
    int i;
    printf("Digite um valor:\n");
    for(i=0; i<5; i++){
    scanf("%f", &n[i]);
    }
    for(i=4; i>=0;i--){
        printf("\n%.2f", n[i]);
    }
    return 0;
}
/*******************************Múltiplos com Vetores***************************************/
#include <stdio.h>
int main(){
    int v[10];
    int i;

    printf("Digite um valor inteiro:\n");
    scanf("%d", &v[0]);

    for(i=1;i<10;i++){
        v[i] = v[i-1]*2;
    }

    for(i=0;i<10;i++){
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
/**********************************Cálculo de Cédulas************************************/
#include <stdio.h>
#include <math.h>
int main(){
    int dinheiro=0;
    int n[7]={1,2,5,10,20,50,100};
    int r[7]={0,0,0,0,0,0,0};
    printf("Digite a quantia em dinheiro:\n");
    scanf("%d", &dinheiro);
    int i;
    for(i=6;i>=0;i--){
        r[i]= ((dinheiro)/(n[i]));
        dinheiro = dinheiro % n[i];
    }
    for(i=6;i>=0;i--){
        printf("%d notas de R$%d,00\n", r[i], n[i]);
    }
    return 0;
}
/*********************************Posição em Vetor**************************************/
#include <stdio.h>

int main()
{
    int vetor[8], x, i, posicao;

    printf("Digite 8 valores inteiros:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite um novo valor inteiro:");
    scanf("%d", &x);

    i = 0;
    while ((i < 8) && (x != vetor[i]))
    {
        posicao = i;
        printf("%d\n", posicao);
        i++;
    }
    if (i == 8)
    {
        printf("Numero nao encontrado\n");
    }
    else
    {
        printf("Numero encontrado na posicao %d\n", posicao + 1);
    }
    return 0;
}
/****************************Minúsculo em Maiúsculo com Ascii**********************************/
#include <stdio.h>
#include <string.h>
char n[20];
int i, max;
int main(){
    printf("Digite uma palavra: ");
    scanf("%s", n);
    max = strlen(n);
    for(i=0; i<max; i++){
        n[i] = n[i]-32;
    }
    printf("%s", n);
    return 0;
}
/*******************************Caracteres e Vogais*************************************/
#include <stdio.h>
#include <string.h>
char n[20];
int i, max, vogal = 0;
int main()
{
    printf("Digite um nome: ");
    scanf("%s", n);
    max = strlen(n);
    for (i = 0; i < max; i++)
    {
        if (n[i] < 123 && n[i] > 96)
        {
            n[i] = n[i] - 32;
        }

        if (n[i] == 65 || n[i] == 69 || n[i] == 73 || n[i] == 79 || n[i] == 85)
        {
            vogal = vogal + 1;
        }
    }
    printf("Total de caracteres: %d\nTotal de vogais: %d\nPorcentagem de vogais: %d%%", max, vogal, ((vogal * 100) / max));
    return 0;
}
/******************************Posição em String****************************************/
#include <stdio.h>
#include <string.h>
char n[20];
int i, max, vogal = 0;
int main()
{
    printf("Digite um nome: ");
    scanf("%s", n);
    max= strlen(n);

    printf("\nPrimeiro caractere: %c\n", n[0]);
    printf("Tres primeiros caracteres: %c%c%c\n", n[0], n[1], n[2]);

    for(i=0; i<max; i++){
        printf("posicao [%d] = %c\n", i, n[i]);
    }
    return 0;
}
/*********************************Pares Entre Números**************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, i, par = 0, quant = 0;

    scanf("%d\n%d", &A, &B);

    if (A < B)
    {
        i = A + 1;
        for (i; i < B; i++)
        {
            if (i % 2 == 0)
            {
                par = par + i;
                quant = quant + 1;
            }
        }
    }
    else
    {
        if (B < A)
        {
            i = B + 1;
            for (i; i < A; i++)
            {
                if (i % 2 == 0)
                {
                    par = par + i;
                    quant = quant + 1;
                }
            }
        }
    }

    printf("Resultado = %d", (par / quant));
    return 0;
}
/*********************************Multiplicação de Matriz*************************************/
#include <stdio.h>

int main(){
    int i, j, M[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor de M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    };

    printf("\nM * 2 = \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("[%d]\t", (M[i][j])*2);
        }
    }
    return 0;
}
/*****************************Matriz Inversa*************************************/
#include <stdio.h>

int main(){
    int n, m, i, j;

    printf("Digite o valor n:");
    scanf("%d", &n);
    printf("Digite o valor m:");
    scanf("%d", &m);

    int M[n][m], N[m][n];
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Digite o valor de M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            N[j][i] = M[i][j];
        }
    }

    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++){
            printf("[%d]\t", N[i][j]);
        }
    }
    return 0;
}
/*****************************Operação Acima da Diagonal Principal*************************************/
#include <stdio.h>

int main()
{
    int i, j, soma = 0, media = 0, nmedia = 0, M[12][12];
    char C;

    printf("Digite a operacao a ser realizada (S ou M): ");
    scanf("%c", &C);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            M[i][j] = i + j;
        }
    }

    switch (C)
    {
    case 'S':
        for (i = 0; i < 12; i++)
    {
        printf("\n");
        for (j = 0; j < 12; j++)
        {
            if (j > i)
            {
                printf("[%d]\t", M[i][j]);
            }
            else
            {
                printf(" - \t");
            }
        }
    }
        for (i = 0; i < 12; i++)
        {
            for (j = 0; j < 12; j++)
            {
                if (j > i)
                {
                    soma = soma + M[i][j];
                }
            }
        }
        printf("\nSoma = %d", soma);
        break;

    case 'M':
        for (i = 0; i < 12; i++)
    {
        printf("\n");
        for (j = 0; j < 12; j++)
        {
            if (j > i)
            {
                printf("[%d]\t", M[i][j]);
            }
            else
            {
                printf(" - \t");
            }
        }
    }
        for (i = 0; i < 12; i++)
        {
            for (j = 0; j < 12; j++)
            {
                if (j > i)
                {
                    media = media + M[i][j];
                    nmedia = nmedia + 1;
                }
            }
        }
        printf("\nMedia = %d", media / nmedia);
        break;

    default:
        printf("\nOperacao invalida.");
    }
    return 0;
}
/*******************************Matriz crescente**********************************/
#include <stdio.h>

#include <stdio.h>

int main()
{
    int ordem, i, j;

    printf("Digite a ordem da matriz:\n");
    scanf("%d", &ordem);

    int M[ordem][ordem];

    int min = 0, max;
    max = ordem;

    while (min < max)
    {
        for (i = min; i < max; i++)
        {
            for (j = min; j < max; j++)
            {
                M[i][j] = min + 1;
            }
        }
        min++;
        max--;
    }

    for (i = 0; i < ordem; i++)
    {
        printf("\n\n");
        for (j = 0; j < ordem; j++)
        {
            printf("%d\t", M[i][j]);
        }
    }
    return 0;
}