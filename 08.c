//write a program to print next prime number
#include<stdio.h>
int main()
{
    int n, i,j, flag;
    printf("Enter a number to print its next prime number : ");
    scanf("%d",&n);

    for(i=n+1;1;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==1)
            {
                printf("\nNext prime number is %d",i);
                break;
            }
    }
    printf("\n");

    return 0;
}
