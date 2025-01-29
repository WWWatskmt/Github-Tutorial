/*
長さ N の数列 a (a_1, a_2, ..., a_N) と b (b_1, b_2, ..., b_N) が与えられます。
a の各要素から b の各要素を引いた結果 (a_1 - b_1, a_2 - b_2, ..., a_N - b_N) を、改行区切りで出力してください。
*/

#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);

    int a[100], b[100];

    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i] != b[i])
    }

    return 0;
}