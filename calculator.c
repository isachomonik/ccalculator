#include <stdio.h>

void main()
{
    float num1, num2, res;
    int op;

    printf("Enter your FIRST number :\n");
    scanf("%f", &num1);

    printf("Enter your SECOND number:\n");
    scanf("%f", &num2);

    printf("Choose the operation you want to make:\n");

    printf("1. SOMA\n");
    printf("2. SUBTRACAO\n");
    printf("3. MULTIPLICACAO\n");
    printf("4. DIVISAO\n\n");

    scanf("%d", &op);

    if(op == 1){
        res = num1 + num2;
        printf("%f", res);
    };

    return 0;
};
