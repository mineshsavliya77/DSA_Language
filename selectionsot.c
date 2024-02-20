#include<stdio.h>
#include<stdlib.h>
#define n 10

int arr[n],i,j,m,min;

int value()
{
    for(i=0 ; i<n ; i++)
    {
        arr[i] = rand() %50;
        printf("%d\t",arr[i]);
    }
}


int selection_sort()
{

    for(i =0 ; i < n-1 ; i++)
    {
        min = i;
        for (j = i+1 ; j < n ; j++)
        {
            if (arr[j] < arr[min])
            {
               min = j;
            }
        }       
                m = arr[i];
                arr[i] = arr[min];
                arr[min] = m;
    }
    
        printf("\n\n\t\t\t\t Answer \n\n");

   
}


int main()
{
    value();
    selection_sort();

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}


/*3	36	27	15	43	35	36	42	49	21	

				 Answer 

15	21	27	33	35	36	36	42	43	49	*/