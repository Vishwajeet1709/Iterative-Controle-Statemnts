//write a program to print prime numbers up-to 100
#include<stdio.h>
int main()
{
    int i,j,flag;
    printf("\n  Upto 100 prime numbers : 1, ");
    for(i=2;i<=100;i++)
    {
        flag=0;
//checking whether "i" is a prime number, if yes then print else do nothing
        for(j=2;j<=i;j++)
        {
            if(i%j == 0)
                flag+=1;
        }
//if "i" is a prime number them it will be divided by "j" only once
        if(flag==1)
            printf("%d, ",i);
    }
    return 0;
}
