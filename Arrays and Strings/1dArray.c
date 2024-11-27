#include <stdio.h>

int main() {
    int size, sum = 0;
    scanf("%d", &size);
    int array[size];
    
    for (int i = 0; i< size; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d", sum);
    return 0;
}