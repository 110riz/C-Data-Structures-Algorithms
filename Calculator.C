#include <stdio.h>
#include <conio.h>

int main()
{
    int choice;
    int a, b, c, i, s = 1;
    printf("\n------------------------Calculator------------------------");
    printf("\n1:Addition.\n2:division.\n3:Subtraction.\n4:multiplication.\n5:remainder.\n6:Calculating factorial.\n7:Number of Power.\n8:LCM Progame.\n9:Even and Odd Number.\n");
    printf("----------------------------------------------------------\n");
    printf("Enter a Your choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter a 1st Number:");
        scanf("%d", &a);
        printf("Enter a 2nd Number:");
        scanf("%d", &b);
        c = a + b;
        printf("Addition is %d.", c);
    }

    else if (choice == 2)
    {
        printf("Enter a 1st Number:");
        scanf("%d", &a);
        printf("Enter a 2nd Number:");
        scanf("%d", &b);
        c = a / b;
        printf("division is %d.", c);
    }

    else if (choice == 3)
    {
        printf("Enter a 1st Number:");
        scanf("%d", &a);
        printf("Enter a 2nd Number:");
        scanf("%d", &b);
        c = a - b;
        printf("Subtraction is %d.", c);
    }

    else if (choice == 4)
    {
        printf("Enter a 1st Number:");
        scanf("%d", &a);
        printf("Enter a 2nd Number:");
        scanf("%d", &b);
        c = a * b;
        printf("multiplication is %d.", c);
    }
    else if (choice == 5)
    {
        printf("Enter 1st Number:");
        scanf("%d", &a);
        printf("Enter 2nd Number:");
        scanf("%d", &b);
        c = a % b;
        printf("remainder is %d.", c);
    }
    else if (choice == 6)
    {
        printf("Enter a Number:");
        scanf("%d", &a);
        for (i = 1; i <= a; i++)
        {
            s = s * i;
        }
        printf("factorial is %d.", s);
    }
    else if (choice == 7)
    {
        printf("Enter a Number:");
        scanf("%d", &a);
        printf("Enter a Number of Power:");
        scanf("%d", &b);
        for (i = 1; i <= b; i++)
        {
            s = s * a;
        }
        printf("Number power is %d,", s);
    }
    else if (choice == 8)
    {
        printf("Enter 1st Number:");
        scanf("%d", &a);
        printf("Enter 2nd Number:");
        scanf("%d", &b);
        for (i = 2; i <= 100; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                printf("LCM is %d.", i);
                break;
            }
        }
    }

    else if (choice == 9)
    {
        printf("Enter a Number:");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("Even Number");
        }
        else
        {
            printf("Odd Number");
        }
    }
    else
    {
        printf("Sorry invild choice!!!!");
    }
}