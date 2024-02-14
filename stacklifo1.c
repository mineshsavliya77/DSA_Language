#include <stdio.h>
#define n 8

int a[n], top = -1;

int display()
{
    if (top < 0)
        printf("Array is Empty");
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// int inserdelete(int val)
// {
//     if(top < 0)
//     {
//         printf("Array is Empty");
//     }else{
//         a[top] = val;   
//         top --;
//     }
// }

int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Array is Full\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

int First(int val)
{
    int l;
    if(top == -1)
    {
        top++;
        a[top] = val;
    }else if (top >= n)
    {
        printf("Array is Full\n");
    }else{
        top++;
        l = top-1;

        for(int i = top ; i > 0 ; i--)
        {
            a[i] = a[l];
            l--;
        }
        a[0] = val;
    }
}

int main()
{
        First(10);
        First(20);
        First(30);
        First(40);
        First(50);
        First(60);
        First(70);
        First(80);
        First(90);
        First(100);
//     insertEnd(10);
//     insertEnd(20);
//     insertEnd(30);
//     insertEnd(40);
//     insertEnd(50);
//     inserdelete(50);
//     insertEnd(60);
//     insertEnd(70);
//     insertEnd(80);
//     inserdelete(80);
//     insertEnd(90);
//     insertEnd(100);


    display();
}

/*
Array is Full
10 20 30 40 50 60 70 90 
*/