#include <stdio.h>

int main() {
    int n;
    float u = 2.0, v, sum = 0.0;

    for (n = 0; n < 100; n++) {
        v = 1 - (1 / u);   
        sum += v;        
        u = 1 + (1 / v);    
    }

    printf(": %f \n", sum);
    
    return 0;
}