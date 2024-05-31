//problem: code takes input but doesn't run properly
#include <stdio.h>
#include <ctype.h>
int avg_letters(char input[]);
int avg_sentence(char input[]);
int main(void){
    //input text
    char text[500]; //may vary for different i/p
    printf("Enter paragraph:\n");
    scanf("%s",text);
    //calculate and print readability
    int l=avg_letters(text);
    int s=avg_sentence(text);
    int index;
    index = 0.0588*l - 0.296*s - 15.8;
    if(index<1)
    printf("Readability of before Grade 1");
    else if(index>16)
    printf("Readability of Grade 16+");
    else
    printf("Readabaility of Grade %d",index);
}
int avg_letters(char input[]){
    int wc=0; //word count
    int letcnt[5]; //letter count
    int avgl; //avg letter every 100 words
    int templ=0; //letter count temp var
    int i=0;
    int j=0; //letcnt[] counter (essentially no of 100 words)
    while(input[i]!=0){
        while(wc<100){
            if(input[i]==' '){
                wc++; //word count
            }
            else if((input[i]>65 && input[i]<90) || (input[i]>97 && input[i]<122)){
                templ++; //letter count
            }
            i++;
        }
        //reset no of letters every 100 words so we can analyse whole text
        if (wc==100){
            letcnt[j]=templ;
            j++;
            templ=0;
            wc=0;
        }
    }
    letcnt[j]=templ;
    int sum=0; //for avg
    for(int k=0; k<=j; k++){
        sum+=letcnt[k];
    }
    avgl=sum/j;
    return avgl;
}
int avg_sentence(char input[]){
    int wc=0; //word count
    int sencnt[5]; //sentence count
    int avgs; //avg sentence every 100 words
    int temps=0; //sen count temp var
    int i=0;
    int j=0; //sentence count array counter (essentially no of 100 words)
    while(input[i]!=0){
        while(wc<100){
            if(input[i]==' '){
                wc++; //word count
            }
            else if(input[i]=='.'){
                temps++; //sentence count
            }
            i++;
        }
        //reset no of sentences every 100 words so we can analyse whole text
        if (wc==100){
            sencnt[j]=temps;
            j++;
            temps=0;
            wc=0;
        }
    }
    sencnt[j]=temps;
    int sum=0; //for avg
    for(int k=0; k<=j; k++){
        sum+=sencnt[k];
    }
    avgs=sum/j;
    return avgs;
}
