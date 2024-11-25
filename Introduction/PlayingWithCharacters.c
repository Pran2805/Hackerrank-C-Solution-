#include <stdio.h>

int main() 
{

    char c, string[100], string_max[100];   
    scanf("%c %s %[^\n]%*c", &c, &string, &string_max);
    printf("%c\n%s\n%s",c,string,string_max);
    return 0;
}