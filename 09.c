//write a program to check if it is a Armstrong number
#include<stdio.h>
int main()
{
    int n,a=0,b,c=0,d,i,j,k;
    printf("Enter any number : ");
    scanf("%d",&n);
    a=n;
//counting digits of entered number
   for(j=0;a!=0;j++)
       a=a/10;

   a=n;
//logic for Armstrong number
   for(i=1;i<=j;i++)
   {
       b=1;
       c=a%10;
       for(k=0;k<j;k++)
          b=b*c;
       d+=b;
       a=a/10;
   }
   if(d==n)
    printf("%d is a armstrong number.",n);
   else
    printf("%d is not a armstrong number.",n);

   return 0;
}
