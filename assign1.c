// 1. Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter single digit Between 0 to 9 :");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;

    default:
        printf("invalid , please enter a valid digit !!");
        break;
    }
    return 0;
}
