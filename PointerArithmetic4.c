#include<stdio.h>
int main()
{
    int Arr[] = {11,22,33,44,55,66};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    q = q - 2;

    printf("Data fetched by q is: %d\n",*q);
    
    return 0 ;
}