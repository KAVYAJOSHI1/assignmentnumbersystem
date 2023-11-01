      #include<stdio.h>
      void main()
      {
              int decimalNumber;
              printf("ENTER THE DECIMAL NUMBER\n");
              scanf("%d",&decimalNumber);
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