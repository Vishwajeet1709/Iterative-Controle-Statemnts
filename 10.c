//program to print Armstrong numbers up-to 1000
#include<stdio.h>
int expo(int, int);
int IsArmstrong(int n)
{
    int c=n,i,count=0,armst=0;
//    counting digits in the number
    while(c!=0)
    {
        c=c/10;
        count++;
    }
//    logic for Armstrong number
    for(i=1;i<=count;i++)
    {
        armst=armst+expo(n%10,count);
        n=n/10;
    }
    return armst;
}
int main()
{
    int num;
    printf("Enter a number to check if it is a Armstrong number or not : ");
    scanf("%d",&num);

    if(IsArmstrong(num)==num)
        printf("\n\n Yes, %d is an Armstrong number.\n\n",num);
    else
        printf("\n\n No, %d is not an Armstrong number.\n\n",num);
    return 0;
}
//calculating p^n
int expo(int p,int n)
{
    int i,pow=1;
    if(p==0)
        return 1;
    for(i=1;i<=n;i++)
    {
        pow=pow*p;
    }
    return pow;
}
