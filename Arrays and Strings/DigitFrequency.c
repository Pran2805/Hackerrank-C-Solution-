#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    char map[10] = {0,0,0,0,0,0,0,0,0,0};
    
    scanf("%s", s);
    
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        int x = s[i] - '0';
        if (x >= 0 && x <= 9) {
            map[x]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", map[i]);
    }
    
    
    return 0;
}
