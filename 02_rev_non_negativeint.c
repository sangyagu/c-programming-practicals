# include <stdio.h>
int main()
{
    float n;
    int rev=0,remainder;
    printf("ENTER A NON-NEGATIVE INTEGER:\n");
    scanf("%f", &n);
    if(n<=0){
        printf("Enter a positive integer");
    }
    else{
        int temp = (int)n;
        while(temp>0){
            remainder= temp % 10;
            rev=rev*10+remainder;
            temp=temp/10;
}
printf("Reversed number =\n %d", rev);
    }
    return 0;
}