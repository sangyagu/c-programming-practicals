#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    if (n<=1){
printf("Please enter a valid positive integer.\n");
return 1;
    }
    for (i = 1; i<=n; i++){
        if (i%2==0){
            sum-=i;
        }
        else {
            sum+=i;
        }
    }
    printf("The sum of the first %d terms is: %d\n", n, sum);
    return 0;
}