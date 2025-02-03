/*
長さ N の数列 a (a_1, a_2, ..., a_N) と b (b_1, b_2, ..., b_N) が与えられます。
a の各要素から b の各要素を引いた結果 (a_1 - b_1, a_2 - b_2, ..., a_N - b_N) を、改行区切りで出力してください。
*/

#include <stdio.h>

int main() {
    int a[100], b[100];
    int N = 0;
    int suuzi;

    while (scanf("%d", &suuzi) == 1) {
        a[N] = suuzi;/*入力した数字をa[]に一時保管*/
        N++;/*長さ*/
        if (getchar() == '\n') break;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }


    printf("%d\n", N);

    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

 
    for (int i = 0; i < N; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    int isSame = 1;
    for (int i = 0; i < N; i++) {
        if (a[i] != b[i]) {
            isSame = 0;
            break;
        }
    }

    if (isSame) {
        printf("同じです\n");
    } else {
        printf("違います\n");
    }

    return 0;
}