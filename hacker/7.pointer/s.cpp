#include <stdio.h>
#include <cstdlib> // For abs()

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = std::abs(*a - *b);
    
    // Assigning the new values back to the original memory locations
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    if (scanf("%d %d", &a, &b) == 2) {
        update(pa, pb);
        printf("%d\n%d\n", a, b);
    }

    return 0;
}
