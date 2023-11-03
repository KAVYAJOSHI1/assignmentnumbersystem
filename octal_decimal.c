#include<stdio.h>
#include<math.h>

int main() 
{
    int n;
    printf("ENTER THE VALUE OF N\n");
    scanf("%d",&n);
     int rem=0, n1=n,count=0;
        int sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*pow(8,count));
            count++;
            n=n/10;
        }
        printf("%d",sum);
}