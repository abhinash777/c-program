
#include <stdlib.h>
#include <stdio.h>

int main()

{
    int num,reverse=0,reminder;

    printf("add your number: ");
    scanf("%d",&num);
    int org=num;

    while(num!=0){
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }

    if(org==reverse){
        printf("%d is palindrome",reverse);
    }
    else
        printf("%d is not a palindrome",reverse);


}
