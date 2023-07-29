#include <stdio.h>

void main()
{
    float num1, num2, res;
    int op;
    char choice;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("      Welcome to the calc'o'matic 1.0      \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    do
    {

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

    switch(op)
    {
    case 1:
        res = num1 + num2;
        printf("%f\n", res);
        break;
    case 2:
        res = num1 - num2;
        printf("%f\n", res);
        break;
    case 3:
        res = num1 * num2;
        printf("%f\n", res);
        break;
    case 4:
        if(num1 == 0 || num2 == 0)
        {
            printf("Impossivel dividir por zero!\n");
            break;
        }
        res = num1 / num2;
        printf("%f\n", res);
        break;
    default:
        printf("Invalid choice!\n");
    };
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    while ((getchar()) != '\n');

    printf("Do you want to make another operation? (Type '1' or 'Y' to continue and '2' or 'N' to stop.): \n");
    scanf("%c", &choice);

    } while(choice == '1' || choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator!\n");




    return 0;
};
