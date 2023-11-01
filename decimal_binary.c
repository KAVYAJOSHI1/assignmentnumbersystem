#include<stdio.h>
void main()
{
    int n,rem,base=1;
    int bin=0;
    
    printf("ENTER THE NUMBER IN DECIMAL\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*base;
        base=base*10;
        n=n/2;
        
    }
    printf("THE BINARY NUMBER IS %d",bin);
}