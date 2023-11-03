#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("ENTER THE VALUE IN BINARY");
    scanf("%d",&n);
int power=0,rem=0,sum=0,x=0;
            while(n>0)
            {
                rem=n%10;
                power=pow(2,x);
                sum+=power*rem;
                x++;
                n=n/10;
            }
            
             int rem1=0,base=1,oct=0;
        while(sum>0)
        {
            rem1=sum%8;
            oct=oct+rem1*base;
            sum=sum/8;
            base=base*10;
        }
        printf("OCTAL EQUIVALENT IS %d\n",oct);
         }