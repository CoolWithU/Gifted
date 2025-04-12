#include <stdio.h>

int main() {
    int cnt, isPrime;
    int result = 0;
    scanf("%d", &cnt);

    int num[cnt];
    for (int i = 0; i < cnt; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < cnt; i++) {
        if (num[i] != 1) {
            isPrime = 1;
            for (int j = 2; j <= num[i]/2; j++) {
                if (num[i] % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                result++;
            }
        }
    }

    printf("%d", result);
}
