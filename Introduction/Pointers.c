#include <stdio.h>

void update(int *a,int *b) {
    printf("%d\n", (*a) + (*b)); 
    if(*b > *a){    
        // i don't know why but i get error at below line so i put this in bracket after that error was removed
    printf("%d", (*b) - (*a));
    }else{
    
    printf("%d", *a - *b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}