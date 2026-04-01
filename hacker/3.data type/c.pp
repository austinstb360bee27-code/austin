#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;

    // Reading the input
    if (scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d) == 5) {
        // Printing with required precision
        printf("%d\n", i);
        printf("%ld\n", l);
        printf("%c\n", ch);
        printf("%.3f\n", f);
        printf("%.9lf\n", d);
    }

    return 0;
}
