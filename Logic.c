#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 0;

    if (a > b && b > c) {
        printf("Both conditions are true (AND)\n");
    }

    else if  (a > b || c > b) {
        printf("At least one condition is true (OR)\n");
    }

    else{
        c = !c;
        printf("c is zero (NOT)\n");
    }

    return 0;
}
