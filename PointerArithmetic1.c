#include<stdio.h>
int main()
{
    int Arr[] = {11,22,33,44,55,66};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[2]);
    q = &(Arr[4]);

    printf("Data fetched by p is: %d\n",*p);
    printf("Data fetched by q is: %d\n",*q);
    return 0 ;
}