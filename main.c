#include <stdio.h>
#include <stdlib.h>



int main()
{
   double n1,n2;
   char opselector;

   printf("add your first number: ");
   scanf("%lf",&n1);

   printf("add your opselector:+,-,*,/: ");
   scanf(" %c",&opselector);

   printf("add your second number: ");
   scanf("%lf",&n2);


   if(opselector=='+'){
       printf("%lf+%lf=%lf",n1,n2,n1+n2);
   }
   else if(opselector=='-'){
       printf("%lf-%lf=%lf",n1,n2,n1-n2);
   }
   else if(opselector=='*'){
       printf("%lf*%lf=%lf",n1,n2,n1*n2);
   }
   else if(opselector=='/'){
       printf("%lf/%lf=%lf",n1,n2,n1/n2);
   }
   else{
       printf("error");
   }


    return 0;
}
