#include<stdio.h>
int main()
{
    int i=24;
    short int j=5;
    long int k=29;
    printf("Size of integer:  %lu\n",sizeof(i));
    printf("Size of short integer:  %lu\n",sizeof(j));
    printf("Size of long integer:  %lu\n",sizeof(k));
    return 0;
}