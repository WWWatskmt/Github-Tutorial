/*
長さ N の数列 a (a_1, a_2, ..., a_N) と b (b_1, b_2, ..., b_N) が与えられます。
a の各要素から b の各要素を引いた結果 (a_1 - b_1, a_2 - b_2, ..., a_N - b_N) を、改行区切りで出力してください。
*/

#include <stdio.h>

int main()
{
        int N;

        printf("長さNの数値を入力してください");
        scanf("%d", &N);

        int a[10], b[10];

        for (int i = 0; i < N; i++){
        if (a[N] > b[N]){
            printf("a[%d] (%d) は b[%d] (%d) より大きい\n", i, a[N], i, b[N]);
        } 
        else if (a[N] < b[N]){
            printf("a[%d] (%d) は b[%d] (%d) より小さい\n", i, a[N], i, b[N]);
        } 
        else{
            printf("a[%d] (%d) は b[%d] (%d) と等しい\n", i, a[N], i, b[N]);
        }
        }
        return 0;

}