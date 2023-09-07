#include<stdio.h>
int main(void)
{
    int age;
    printf("Enter youe age : ");
    scanf("%d",&age);
    if(age >= 18)
        printf("OK.");
    else
        printf("KOOK KOOK!!!\n");
    return 0;
}