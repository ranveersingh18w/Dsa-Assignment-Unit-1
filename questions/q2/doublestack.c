#include <stdio.h>
#include <stdlib.h>

int arr[10];
int top =-1,topb=10;

int main(){
    int a,element;
    int n = 1;

    while (n==1)
    {  
    printf("\n--------------------------\n");
    printf(" 1.Enter Element is class A \n 2. Enter Element in class B \n 3. For exit \n 4. Show the stack\n");
    scanf("%d",&a);
    

    if (top+1==topb)
    {
        printf("\nOverflow contion");
        return 0;
    }
    else {
    

    switch (a)
    {
    case 1:
        printf("\nEnter the element = ")  ;
        scanf("%d",&element) ;
        top++;
        arr[top]=element;
        break;
    
    case 2: 
        printf("\n Enter the element = ")  ;
        scanf("%d",&element) ;
        topb--;
        arr[topb]=element;
        break;

    case 3:
        exit(0);
        break;
    
    case 4: 
        printf("\nElementt in class a are : ");
            for (int i = 0; i < top+1; i++)
            {
                printf(" %d ",arr[i]);
            
            }


        printf("\nElent in class b are : ");
        
        for (int i = 9; i >=topb; i--)
        {
            printf(" %d ",arr[i]);
        }

        break;
    }
}
}
    return 0;
}

