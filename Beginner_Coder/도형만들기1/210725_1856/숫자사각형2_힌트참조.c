#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n, m, i, j;
    int num = 1;
    int arr[101][101] = { 0, };

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++) { // n�ุŭ �ݺ�
        if (i % 2 == 0) { // ¦�����̸�
            for (j = m; j >= 1; j--) { 
                arr[i][j] = num++; 
            }
        }
        else { // ¦������ �ƴϸ�(Ȧ�����̸�)
            for (j = 1; j <= m; j++) { 
                arr[i][j] = num++; 
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}
