#include <stdio.h>

char stack[100];
// char string;
char string;
int top=-1;
int n=1;

void print(){
    printf("Current Characters:");
    for (int i = 0; i <=top; i++)
    {
    
       printf("%c",stack[i]);
    }
    
    
}

void push(){

    if (top<100)
    {
        top++;
    stack[top]=string;
        
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
        printf("Enter The character ");
        scanf(" %c",&string);
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