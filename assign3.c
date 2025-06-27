// 3. Accept two numbers in variables x and y from the user and perform the following operations
#include <stdio.h>
int main()
{
    int x, y, num, choice, temp;
    printf("enter 2 number :");
    scanf("%d%d", &x, &y);

    printf("Enter yoiur choice :1: Equality 2: Less Than 3: Quotient and Remainder 4: Range 5: Swap ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (x == y)
            printf("equal ");
        else
            printf("not equal ");
        break;
    case 2:
        if (x < y)
            printf("x<y ");
        else
            printf("x>=y");
        break;
    case 3:
        if (y != 0)
            printf(" Q : % d R : % d\n ", x / y, x % y);
        else
            printf("div by 0/n");
        break;
    case 4:
        scanf("%d", &num);
        if ((num >= x && num <= y) || (num >= y && num <= x))
            printf("in range ");
        else
            printf("not in range ");
        break;
    case 5:
        temp = x;
        x = y;
        y = temp;
        printf("%d%d", x, y);
        break;

    default:
        printf("INVALID INPUT !! ");
        break;
    }
}