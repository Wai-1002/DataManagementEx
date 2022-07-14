#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char name[100];
    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello,%s!\n", name);
    int countH = 0, countT = 0;
    srand((unsigned int)time(NULL));
    printf("Tossing a coin...\n");
    for(int i=0; i<3; i++){
        printf("Round %d: ", i+1);
        int num = rand()%2;
        if(num == 0){
            printf("Heads\n");
            countH++;
        } else {
            printf("Tails\n");
            countT++;
        }
    }
    printf("Heads: %d,Tails: %d\n",countH,countT);
}