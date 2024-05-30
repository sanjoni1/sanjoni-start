#include <stdio.h>
#include <ctype.h>
int POINTS[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
int score(char upper_word[]);
void result(int score1, int score2);
int main(void){
    //input from players
    char word1[30], word2[30];
    printf("Player 1 word:\n");
    scanf("%s",word1);
    printf("Player 2 word:\n");
    scanf("%s",word2);
    //finding string lengths
    int l1=0;
    int l2=0;
    while(word1[l1]!=0){
        l1++;
    }
    while(word2[l2]!=0){
        l2++;
    }
    //convert each word to uppercase
    char uword1[l1], uword2[l2];
    for(int i=0; i<l1; i++){
        uword1[i]=toupper(word1[i]);
    }
    for(int i=0; i<l2; i++){
        uword2[i]=toupper(word2[i]);
    }
    //calculate score and results
    int score1=score(uword1);
    int score2=score(uword2);
    result(score1, score2);
}
int score(char upper_word[]){
    int score=0;
    int i=0;
    while(upper_word[i]!=0){
        score+=POINTS[upper_word[i]-65];
        i++;
    }
    return score;
}
void result(int score1, int score2){
    if(score1>score2)
    printf("Player 1 wins!");
    else if(score2>score1)
    printf("Player 2 wins!");
    else
    printf("Tie!");
}
