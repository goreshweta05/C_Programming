#include<stdio.h>
int main()
{
   int iValue1=0,iValue2=0,iAns=0;
   printf("Enter first Number: \n");
   scanf("%d",&iValue1);
    printf("Enter Second Number: \n");
   scanf("%d",&iValue2);
   iAns =Addition(iValue1,iValue2);
   printf("Addition: ");
   return 0 ;
}
int Addition(int iNO1,int iNO2)
{
    int iSum=0;
    iSum = iNO1 + iNO2;
    return iSum;

}