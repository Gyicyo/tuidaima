#include <stdio.h>
#include <math.h>
int main()
{
   int a=12,b,c;
   for(b=0;a>0;b++)
   {
       c += (a%2)*pow(10,b);
       a /= 2;
   }
   printf("%d",c);
}


pow