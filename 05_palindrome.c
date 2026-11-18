/*Write a fuction that checks whether a given string is Palindrome or not.
Use this function to find whetherthe string entered by the useris Palindrome or not.*/
#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
    int i,len;
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1 -i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    if(isPalindrome(str))
    {
        printf("%s is a palindrome:", str);
    }
    else {
        printf("%s is not a palindrome:", str);
    }
    return 0;
