//write a programe to find if it a co prime number or not1#include<stdio.h>
int main()
{
    int a,b,HCF;
//taking input from user
    printf("Enter two numbers to check whether these are co-prime or not : ");
    scanf("%d%d",&a,&b);

//finding smallest number
    HCF = a<b ? a : b;

//logic for LCM
    while(1)
    {
        if(a%HCF ==0 && b%HCF == 0)
        break;
        HCF-=1;
    }
//if the HCF is "1" means number is co-prime else we will print it is a composite number

    if(HCF == 1)
        printf("\n  %d and %d are co-prime numbers.\n",a,b);
    else
        printf("\n  %d and %d are not co-prime numbers.\n",a,b);
    return 0;
}
