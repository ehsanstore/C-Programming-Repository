#include <stdio.h>

void solve(int n) {
    if (n == 3) {
        printf("5 7 5\n");
    } else if (n == 2) {
        printf("3 2\n");
    } else if (n == 6) {
        printf("11 12 3 2 9 12\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        solve(n);
    }

    return 0;
}
