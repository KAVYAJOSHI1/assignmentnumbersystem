#include <stdio.h>
int main()
{
    int n,rem=0,oct=0,base=1;
    
    printf("ENTER THE VALUE OF N\n");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%8;
        oct=oct+rem*base;
        base=base*10;
        n=n/8;

    }
    printf("THE OCTAL NUMBER IS %d\n",oct);
    return 0;
}
