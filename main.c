#include <stdio.h>
#include <stdlib.h>

int countSequences(int n) {
    int a = 1, b = 2, c = 4;

    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    int count;
    for (int i = 4; i <= n; i++) {
        count = (a + b + c) % 12345;
        a = b;
        b = c;
        c = count;
    }

    return count;
}

int main() {
    int n;

    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Number of searched sequences: %d\n", result);

    return 0;
}
