#include <stdio.h>
#include <stdlib.h>
char* str;
int top=-1;
char stack[20];
char reverses[20];

void reverse(){

    for (int i = 0; str[i]!='\0'; i++)
    {
        top++;
        stack[top]=str[i];
    }
}

void check(){

    int a=0;

    for (int i = 0; i <= top; i++)
    {
        if (stack[top]!=str[i])
        {
            a=1;
            break;
        }
        top--;
    }
    if (a==0)
    {
        printf("It is Plalindrome");
    }
    else
        printf("It is Not a Palindrome");
    
       
}

int main(){
    str=(char*)calloc(20,sizeof(char));
    printf("Enter a string: ");

    scanf("%s",str);

    reverse();
    check();
    
    
    
    

    return 0;
}