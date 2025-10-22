#include<stdio.h>

struct Demo{
    int i;
    float f;
    int j;
};
 int main()
 {
    printf("size of structure is: %lu\n",sizeof(struct Demo));
    
    return 0;
 }