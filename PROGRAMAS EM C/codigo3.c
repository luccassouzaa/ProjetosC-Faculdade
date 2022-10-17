#include <stdio.h>
int main()
{
   int n;  // declarar a variavel
   int count=0;
   printf("Entre com um numero: \n");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       count++;
   }

   printf("O algarismo desse numero e: %d",count);
    return 0;
}
