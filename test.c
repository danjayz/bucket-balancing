#include <stdio.h>

int sum(int n) {
    int s=0;
    if (n == 1) {
        return n;
    } else {
        return s=n+sum(n+1);
    }
}

int main() {
    printf(1000*45);



    printf("%d\n", sum(50));

    printf("Hello world")
}
