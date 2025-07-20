#include <stdio.h>
#include <string.h>

char stack[100][20];
// char string;
char string[100];

int top=-1;
int n=1;

void print(){
    printf("Current Characters:");
    for (int i = 0; i <=top; i++)
    {
    
       printf("%s",stack[i]);
       printf(" ");
    }  
}

void push(){

    if (top<20)
    {
        top++;
    
    strcpy(stack[top], string);

        
    }
    else{
        printf("Over Flow \n");
        print();
        n=0;

    }      
}

void pop(){
    if(top>0){
        top--;
    }
    else {
        
        printf("Error Underflow");
        print();
        n=0;}
        
}





int main(){

    start:
    

    while (n==1)
    {
    printf("\n------------------------\n");
    print();
    
    printf("\nPress \n1. Enter Characters \n2.Undo \n3. Save ");
    int input;
    
    
    scanf("%d",&input);
    if (input==1)
    {
        printf("Enter The string ");
        scanf(" %s",&string);
        push();
        
    }

    else if (input == 2)
    {
        pop();
        
    }
    
    else if ( input == 3){
        
        print();
        goto END;
        
    }
    else{
        printf("Enter the Correct Number");
        goto start;
    }
}

    END:
    n=0;
    return 0;
}