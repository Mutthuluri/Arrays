#include <stdio.h>
void main()
{
    int pos, num, size;
    int kumar[50];
    printf("enter the size of the array\n");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array is overflowed\n");
    }
    else
    {
        printf("Enter the elements in the array\n");
    }
    for (int v = 0; v < size; v++)
    {
        scanf("%d", &kumar[v]);
    }
    printf("enter the position where the element should be deleted:\n");
    scanf("%d", &pos);
    printf("enter the element that to be inserted:\n");
    scanf("%d", &num);
    for (int v = size - 1; v >= pos - 1; v--)
    {
        kumar[v+1] = kumar[v];
    }
    kumar[pos - 1] = num;
    size++;
    printf("Elements in an array after the insertion are:\n");
    for (int v = 0; v < size; v++)
    {
        printf("%d\n", kumar[v]);
    }
}