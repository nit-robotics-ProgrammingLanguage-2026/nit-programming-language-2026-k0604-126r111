#include <stdio.h>

int main(void)
{
    int upper_limit;
    if (scanf("%d", &upper_limit) != 1) {
        return 0;
    }

    if (upper_limit < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力値までのうち、条件を満たす整数の合計を求める。
    long long total = 0;
    for (long long value = 1; value <= upper_limit; value++) {
        // 3または5の倍数は合計に入れない。
        if (value % 3 == 0 || value % 5 == 0) {
            continue;
        }
        total += value;
    }

    printf("%lld", total);
    return 0;
}