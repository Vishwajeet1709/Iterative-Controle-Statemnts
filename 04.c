//write a program to calculate HCF
#include<stdio.h>
int main()
{
    int a,b,HCF;
//taking input from user
    printf("Enter two numbers to find HCF : ");
    scanf("%d%d",&a,&b);

//finding smallest number
    HCF = a<b ? a : b;

//logic for LCM
    while(1)
    {
        if(a%HCF ==0 && b%HCF == 0)
        {
            printf("HCF of %d and %d is %d",a,b,HCF);
            break;
        }
        HCF-=1;
    }
    return 0;
}
