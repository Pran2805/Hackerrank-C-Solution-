#include <stdio.h>

int main() {
    int size, sum = 0;
    scanf("%d", &size);
    int array[size];
    
    for (int i = 0; i< size; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    
    for(int i = size-1; i>= 0; i--){
        printf("%d ", array[i]);
    }
    
    return 0;
}