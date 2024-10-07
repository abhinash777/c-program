

#include <stdio.h>

int main()
{
    int num,ans,i=2;

    printf("add your number: ");
    scanf("%d",&num);


   for(i=2;i<=num;i++){
    ans=i%2;


   if(ans==0)
     printf(" ");

     else
        printf("%d",i);
   }

}
