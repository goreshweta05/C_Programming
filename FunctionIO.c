#include<stdio.h>
int main()
{
    int iValue1=0,iValue2=0,iAns;
    printf("Enter first number: \n");
    scanf("%d",&iValue1);
    printf("Enter second number: \n");
    scanf("%d",&iValue2);
    iAns= iValue1 + iValue2;
    printf("Addition of both numbers are: %d",iAns);
    return 0;
}