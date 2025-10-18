#include<stdio.h>
int main()
{
    int Arr[4]={5,10,2,24};
    printf("%lu \n Arr: ",Arr);
    printf("%lu \n &Arr: ",&Arr);
    printf("%lu \n &(Arr[0]): ",&(Arr[0]));
    return 0;


}