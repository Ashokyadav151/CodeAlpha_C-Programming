// Task 2 - Matrix Operations
// CodeAlpha Internship

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;
    int ch;

    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Transpose of first matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if(ch == 1)
    {
        if(r1 != r2 || c1 != c2)
        {
            printf("Addition not possible");
        }
        else
        {
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("Result:\n");
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if(ch == 2)
    {
        if(c1 != r2)
        {
            printf("Multiplication not possible");
        }
        else
        {
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    c[i][j] = 0;
                    for(k = 0; k < c1; k++)
                    {
                        c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    }
                }
            }
            printf("Result:\n");
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if(ch == 3)
    {
        printf("Transpose:\n");
        for(i = 0; i < c1; i++)
        {
            for(j = 0; j < r1; j++)
            {
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong choice");
    }

    return 0;
}
