#include <stdio.h>
int main() {
float num, originalNum, remainder;
float sum = 0;
int product =1;
printf("ENTER AN INTEGER:");
scanf("%d", &num);
originalNum = num;
if (num < 0) {
    num=-num;
}
    while (num>0){
        remainder = num%10;
        sum += remainder;
        product *= remainder;
        num /= 10;
    }
    printf("\nFor the number %d:\n", originalNum);
    printf("Sum of digits = %d\n", sum);
    printf("product of digits = %d\n", product);
    return 0;

}