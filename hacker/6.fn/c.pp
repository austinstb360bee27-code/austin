#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    // Nested max calls efficiently find the largest value
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    // Reading four integers, one per line
    if (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        int ans = max_of_four(a, b, c, d);
        printf("%d\n", ans);
    }
    return 0;
}
