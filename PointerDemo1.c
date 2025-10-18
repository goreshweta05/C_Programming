#include<stdio.h>
int main()
{
    int iValue = 24;
    char cValue = 'M';
    int *iptr = &iValue;
    char *cptr = &cValue;
    printf("Size of iptr: %lu\n",sizeof(iValue));
    printf("Size of cptr: %lu\n",sizeof(cValue));
    return 0;
}