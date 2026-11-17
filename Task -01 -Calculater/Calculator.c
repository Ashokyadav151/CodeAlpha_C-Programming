// Task 1 - Calculator Program
// CodeAlpha Internship

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}

int main()
{
    float n1, n2, ans;
    int ch;

    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            ans = add(n1, n2);
            printf("Answer = %f", ans);
            break;

        case 2:
            ans = sub(n1, n2);
            printf("Answer = %f", ans);
            break;

        case 3:
            ans = mul(n1, n2);
            printf("Answer = %f", ans);
            break;

        case 4:
            if(n2 == 0)
            {
                printf("Divide by zero not possible");
            }
            else
            {
                ans = div(n1, n2);
                printf("Answer = %f", ans);
            }
            break;

        default:
            printf("Wrong choice");
    }

    return 0;
}
