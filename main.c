#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1,ans=0;

    printf("add your number: ");
    scanf("%d",&n1);

    for(int i=1;i<=n1;i++){

       ans=ans+i;
    }
    printf("%d",ans);
}

