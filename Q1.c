#include <stdio.h>
int main() {
    char str[50];
    char *p;
    int len = 0;
    printf("Enter string: ");
    gets(str);        
    p = str;          
    while (*p != '\0') {
        len++;
        p++;
    }
    printf("Length of string is: %d", len);
}