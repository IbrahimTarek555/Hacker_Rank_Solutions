#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf(" %c", &ch);
    scanf("%s", &s);
    scanf("\n%[^\n]s", &sen);
    
    printf("%c\n%s\n%s", ch, s, sen);
    
    return 0;
}
