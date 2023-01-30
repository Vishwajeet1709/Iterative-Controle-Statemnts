//write a program to print prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,j,a,b,flag;
    printf("Enter two numbers to print prime numbers between them : ");
    scanf("%d%d",&a,&b);

//swapping given numbers smaller will be stored in variable "a" and greater number will be stored in "b"
    i=a<b?a:b;
    b=a>b?a:b;
    a=i;

//code to print prime numbers between two numbers

    printf("\n   Prime numbers between %d and %d : ",a,b);
    if(a==1)
        printf("1, ");
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==1)
            printf(" %d,",i);
    }
    printf("\n");
    return 0;
}
