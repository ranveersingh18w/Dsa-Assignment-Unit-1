#include <stdio.h>
#include <stdlib.h>
char* str;
int top=-1;
char stack[20];

void stacking(){
    for (int i = 0; str[i]!= '\0'; i++)
    {
        top++;
        stack[top]=str[i];
    }   
}

void destack(){
    for (int t = top; t >= 0; t--)
    {
        printf("%c",stack[top]);
        top--;
    }
}

int main(){
    str=(char*)calloc(20,sizeof(char));
    printf("Enter a string: ");
    scanf("%s",str);
    stacking();
    destack();

    

    return 0;
}