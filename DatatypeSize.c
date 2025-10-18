#include<stdio.h>
int main()
{
    char cValue='M';
    int iValue=24;
    float fValue=34.78f;
    double dValue=56.7873734685;
    printf("Size of cValue is: %lu\n",sizeof(cValue));
    printf("Size of iValue is: %lu\n",sizeof(iValue));
    printf("Size of fValue is: %lu\n",sizeof(fValue));
    printf("Size of dValue is: %lu\n",sizeof(dValue));
    return 0;
}