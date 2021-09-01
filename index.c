#include<stdio.h>

// 関数（単純に足し算）
// 宣言
int add(int res, int x2);
// 定義
int add(int x1, int x2) {
    return x1 + x2;
}

// メイン
int main(void)
{
    // 出力
    printf("HelloWorld!\n"); 

    // 変数
    int x = 100;
    double f = 10.10;
    char c = 'c';

    printf("%d\n", x);
    printf("%f\n", f);
    printf("%c\n", c);

    // 演算
    int b = x + 10;
    printf("%d\n", b);

    // 配列
    int a[] = {10, 3, 0, -5, 2};
    printf("%d\n", a[2]);

    // 分岐
    int j = 10;
    if (j < 5){
        printf("jは5より小さい\n");
    } else {
        printf("jは5より大きい\n");
    }

    // ループ
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d個目のデータは%d\n", i + 1, a[i]);
    }

    // goto(ジャンプ)
    int k;
    for (k = 0; k < 5; k++) {
        if (k == 2) {
            printf("ジャンプします\n");
            goto jump;
        }
        printf("%d個目のデータは%d\n", k + 1, a[k]);
    }
    // ジャンプ先
    jump:;

    // 関数利用(ここより上に定義されている必要がある)
    int res = add(2,3);
    printf("%d\n", res);

    return 0;
}
