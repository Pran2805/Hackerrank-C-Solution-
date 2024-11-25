#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int mxAnd = 0, mxOr = 0, mxXor = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            // we are doing same operation double and taking the and of it for removing the duplicates
            // after multiple tries i understand that we can't get the max value of and, or, xor by doing this
            if(mxAnd < (i & j) && (i & j) < k)
                mxAnd = i & j;
            if(mxOr < (i | j) && (i | j) < k)
                mxOr = i | j;
            if(mxXor < (i ^ j) && (i ^ j) < k)
                mxXor = i ^ j;
        }
    }
    printf("%d\n", mxAnd);
    printf("%d\n", mxOr);
    printf("%d\n", mxXor);
 
    return 0;
}