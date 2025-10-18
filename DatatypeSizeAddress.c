#include<stdio.h>
int main()
{
    char cValue='S';
    int iValue=29;
    float fValue=38.453f;
    double dValue=52.135263562645;
    printf("Size of cValue is: %lu\n",sizeof(cValue));
    printf("Size of iValue is: %lu\n",sizeof(iValue));
    printf("Size of fValue is: %lu\n",sizeof(fValue));
    printf("Size of dValue is: %lu\n",sizeof(dValue));
    printf("Address of cValue: %lu\n ",&cValue);
    printf("Address of iValue: %lu\n ",&iValue);
    printf("Address of fValue: %lu\n ",&fValue);
    printf("Address of dValue: %lu\n ",&dValue);
    return 0;
}