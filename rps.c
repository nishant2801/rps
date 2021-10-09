#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char y, char c){
    if(y==c){
        return 0;
        
    }
    if(y=='S' && c=='R'){
        return -1;
    }
    if(y=='R' && c=='S'){
        return 1;
    }
    if(y=='P' && c=='S'){
        return -1;
    }
    if(y=='S' && c=='P'){
        return 1;
    }
    if(y=='R' && c=='P'){
        return -1;
    }
    if(y=='P' && c=='R' ){
        return 1;
    }
}

int main()
{
    int n;
    char you,comp;
    srand(time(0));
    n=(rand()%3)+1;
    if(n==1){
        comp='R';
    }
    if(n==2){
        comp='P';
    }
    if(n==3){
        comp='S';
    }
    printf("enter R for rock, P for paper and S for scissor:\n");
    scanf("%c",&you);
    if(you!='R' && you!='P' && you!='S'){
        printf("abe ooye, jitna bola hai...usi me se choose kar\njyaada hoshiyaari nahi\n");
        goto exit;
    }
    int result=game(you,comp);
    if(result==0){
        printf("\nGAME DRAW\n");
    }
    if(result==1){
        printf("\nYOU WON!\n");
    }
    if(result==-1){
        printf("\nUFFF..... !\nYOU LOSE,TRY AGAIN");
    }
    printf("\nbecause you choose %c and computer choose %c\n",you,comp);

    exit :
    return 0;
}


