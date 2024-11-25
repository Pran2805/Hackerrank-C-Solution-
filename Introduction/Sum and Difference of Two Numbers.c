#include <stdio.h>

int main()
{
	int a,b;
    float num1, num2;
    scanf("%d %d %f %f", &a, &b, &num1, &num2);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", num1+num2, num1-num2);
    
    return 0;
}