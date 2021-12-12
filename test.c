#include <stdio.h>

int main() {
    int a, shift, result, min, max;
    
    scanf("%d", &a);
    
    for ( int i = 0, min = 0, max = 32; i < 6; i++ ) {
        result = 0;
        shift = (min / 2 + max / 2);
        result = 1 << shift;
        
        if ( result > a ) {
            max = shift;
        } else {
            min = shift;
        }
    }
    if ( result == a ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
