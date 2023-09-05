#include <stdio.h>
void main()
{
    int temp, pos, size, v;
    int kumar[50];
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array Overflow");
    }
    else
    {
        printf("Enter the elements in an array:");
        {
            for (v = 0; v < size; v++)
            {
                scanf("%d", &kumar[v]);
            }
        }
    }
    printf("Enter the position where the element to be deleted:");
        scanf("%d", &pos);
    if (pos <= 0 || pos > 50)
    {
        printf("Invalid Position come again");
    }
    else
    {
        kumar[pos - 1] = temp;
        for (v = pos - 1; v < size - 1; v++)
        {
            kumar[v] = kumar[v + 1];
        }
        size--;
        printf("The deleted element is/are: %d", temp);
        printf("The elements in array after the deleted element are:");
        for (v = 0; v < size; v++)
        {
            printf("%d", kumar[v]);
        }
    }
}