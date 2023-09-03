#include <stdio.h>
void main()
{
    int n;
    int kumar[50];

    printf("Enter the size of array\n");
    scanf("%d", &n);

    printf("enter the elements in an array\n");
    for (int v = 0; v < n; v++)
    {
        scanf("%d", &kumar[v]);
    }
    printf("The enterd elements in an array are\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", kumar[k]);
    }
}