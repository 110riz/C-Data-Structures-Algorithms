#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Before Selection Sort Programe\n");
    int a[15] = {10, 2, 6, 7, 8, 3, 9, 4, 15, 13, 12, 30, 25, 22, 14};
    int i, j, min, index, temp;
    for (i = 0; i < 15; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 15; i++)
    {
        min = a[i];
        index = i;
        for (j = i + 1; j < 15; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
    printf("\nAfter Selection Sort Programe\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", a[i]);
    }
}