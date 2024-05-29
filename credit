#include <stdio.h>
int main(void)
{
    int n;
    //input number
    printf("Enter number:\n");
    scanf("%d",&n);
    //finding no of digits
    int x=0; //x=no of digits
    int temp=n;
    while(temp>=1)
    {
        temp=temp/10;
        x++;
    }
    //using array to isolate and store digits in reverse order
    int digits[x];
    int temp2=n;
    for(int i=0;i<x;i++)
    {
        digits[i]=temp2%10;
        temp2=temp2/10;
    }
    //finding checker sum
    int sum=0;
    for(int i=0;i<x;i++)
    {
        if(i%2==1)
        sum+=2*digits[i];
        else
        sum+=digits[i];
    }
    //final checking
    if(sum%10==0)
    printf("VALID");
    else
    printf("INVALID");
    return 0;
}
