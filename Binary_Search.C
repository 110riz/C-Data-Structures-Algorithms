#include <stdio.h>
#include <conio.h>
int main()
{
    int a[11] = {10, 20, 25, 30, 50, 60, 65, 70, 80, 90, 100};
    int l = 0, r = 11, m, search;
    printf("Enter a Number that you want to search? ");
    scanf("%d", &search);
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == search)
        {
            printf("Number is found at this postion %d.",m+1);
            break;
        }
        else if (a[m] < search)
        {
            l = m + 1;
        }
        else if (a[m] > search)
        {
            r = m - 1;
        }
    }
    if(l>m){
        printf("Number is Not found!!");
    }
}