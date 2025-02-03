#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int a[n], b[n];

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
        }
    }

    if (comparison) {
        printf("同じです\n");
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                printf("%d 番目が違います\n", i + 1);
            }
        }
    }
    
    return 0;
}
