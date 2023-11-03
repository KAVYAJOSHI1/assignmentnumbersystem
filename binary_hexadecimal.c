#include<stdio.h>
#include<math.h>
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
            int decimalNumber=sum;
  char hexadecimalNumber[100];
  int i = 0;
  while (decimalNumber > 0)
   {
    int remainder = decimalNumber % 16;
    if (remainder < 10) {
      hexadecimalNumber[i++] = remainder + 48;
    } else {
      hexadecimalNumber[i++] = remainder + 55;
    }
    decimalNumber /= 16;
  }
   printf("THE HEXADECIMAL EQUIVALENT IS:");
  for (i = i - 1; i >= 0; i--) {
    printf("%c", hexadecimalNumber[i]);
  }
}