#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    int k=1;
    while(n>0)
    {
//print spaces
        for(int i=0;i<(n-1);i++)
        {
            printf(" ");
        }
//print left hash pyramid
        for(int j=0;j<k;j++)
        {
            printf("#");
        }
        printf("  ");
//print right hash pyramis
        for(int j=0;j<k;j++)
        {
            printf("#");
        }
        printf(" \n");
        k++;
        n--;
    }
    return 0;
}
