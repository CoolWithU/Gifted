//문제에서는 띄어쓰기를 요구하였으나, 본 코드는 수 그대로 출력함.

#include <stdio.h>

void printAll(int digits, int n, int m, int* arr) {
    if (digits == m) {
        for (int i = 0; i < m; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        arr[digits] = i;
        printAll(digits + 1, n, m, arr);
    }
}

int main() {
    int arr[100] = { 0 };
    int n, m;
    scanf("%d %d", &n, &m);
    printAll(0, n, m, arr);

    return 0;
}
