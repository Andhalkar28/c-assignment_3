// 2. Write a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result.
#include <stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter 2 Numbers :");
    scanf("%d%d", &a, &b);

    printf("\n Choose Between Cases :");
    printf("\n Cases :- 1.Addition , 2.Subtraction , 3.Multiplication , 4.Division :");
    printf("\n Enter your choice Of Case ? :");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Addition Is %d", (a + b));
        break;
    case 2:
        printf("Subtracton Is %d", (a - b));
        break;
    case 3:
        printf("Multiplication Is %d", (a * b));
        break;
    case 4:
        printf("Division Is %d", (a / b));
        break;

    default:
        printf("Invalid");
        break;

        return 0;
    }
}