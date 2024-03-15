#include<stdio.h>
int main()
{
    int rowNum;
    printf("Enter the number of Row: ");
    scanf("%d", &rowNum);

    for(int upperHalf = 1; upperHalf <= rowNum; upperHalf++)
    {
        for(int space = rowNum - upperHalf; space >= 1; space--)
        {
            printf(" ");
        }
        for(int star = 1; star <= 2*upperHalf - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int lowerHalf = rowNum - 1; lowerHalf >= 1; lowerHalf--)
    {
        for(int space = rowNum - lowerHalf; space >= 1; space--)
        {
            printf(" ");
        }
        for(int star = 1; star <= 2*lowerHalf - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}