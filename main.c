#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,ans;
    long long first=0,second=1;

    printf("add your number: ");
    scanf("%d",&n1);

    for(int i=1;i<n1;i++){

    ans=first+second;
    printf("%d\n",ans);
    first=second;
    second=ans;

    }
}
