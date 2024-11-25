#include <stdio.h>

int sumDigits(int n){
    int answer = 0;
    while(n>0){
        int remainder = n%10;
        answer += remainder;
        n /= 10;
    }
    return answer;
}
int main() {
	
    int n;
    scanf("%d", &n);
    printf("%d",sumDigits(n));
    return 0;
}