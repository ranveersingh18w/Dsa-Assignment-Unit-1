#include <stdio.h>
#include <stdlib.h>

char* database[11] = {"a","b","c","d","e","f","g","h","h","i"};
char** player;
 int input;
 int top = 0;
 


void Nexttoplay(){

    printf("\nNow Playing : %s \n",player[0]);

    printf("Next to Play:\n");

    for (int i = 1; player[i]!=NULL; i++)
    {
        printf("%s\n",player[i]);
    }
}

void transfer(int input){

    player = realloc(player, (top + 1) * sizeof(char*)); 

    player[top] = database[input];
    top++;
    player[top]=NULL;
    
    //shifting the database

    for (int i = input; database[i]!= NULL; i++)
    {
        database[i]=database[i+1];
    }
}

void Queue(){
    printf("Add to Queue\n");

    for (int i = 0; database[i] != NULL; i++)
    {
        printf("%d. %s \n",i+1,database[i]);
    }
}

int main(){

player = (char**)calloc(1,sizeof(char*));

int n=1;

printf("Welcome to the Music Player \n");



while (n==1)
{
Nexttoplay();
Queue();
printf("Type the No.");
scanf("%d",&input);
transfer(input-1);

}
free(player);
    return 0; 
}