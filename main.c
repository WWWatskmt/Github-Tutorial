/*
長さ N の数列 a (a_1, a_2, ..., a_N) と b (b_1, b_2, ..., b_N) が与えられます。
a の各要素から b の各要素を引いた結果 (a_1 - b_1, a_2 - b_2, ..., a_N - b_N) を、改行区切りで出力してください。
*/

#include <stdio.h>

int main()
{
    int n;
    int a[n], b[n];

    scanf("%d",&n);



    for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int comparison = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            comparison = 0;
            break;
        }
    }

    if (comparison) {
        printf("同じです\n");
    } else {
        printf("違います\n");
    }

    
    
    return 0;
}