#include<stdio.h>
int main()
{
    int Arr[] = {11,22,33,44,55,66};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    p = p+3;

    printf("Data fetched by p is: %d\n",*p);
    
    return 0 ;
}