#include <stdio.h>
int is_palindrome(int num) {
    int reversed = 0, original, remainder;
    original = num;
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if(reversed == original)
        return 1;
    else
        return 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(is_palindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    return 0;
}
