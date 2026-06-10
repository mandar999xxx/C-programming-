/**
 * Module: Lab Programs
 * Problem: 7. Matrix multiplication using functions
 * 
 * Description:
 * This program multiplies two matrices A and B using helper functions and prints the result.
 */

#include <stdio.h>

int a[50][50], b[50][50], c[50][50];
int m, n, p, q, i, j, k;

void read_matrixA(int a[50][50], int m, int n)
{
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}

void print_matrixA(int a[50][50], int m, int n)
{
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void read_matrixB(int b[50][50], int p, int q)
{
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
}

void print_matrixB(int b[50][50], int p, int q)
{
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}

void compute_matrixC(int a[50][50], int b[50][50], int m, int n, int p, int q)
{
    (void)p; // Mark p as unused to prevent warning since n must equal p
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

void result_matrixC(int c[50][50], int m, int q)
{
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

int main()
{
    printf("Enter order of matrix A\n");
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter order of matrix B\n");
    if (scanf("%d %d", &p, &q) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n != p)
        printf("Multiplication not possible\n");
    else
    {
        printf("Enter elements of A\n");
        read_matrixA(a, m, n);
        printf("Enter elements of B\n");
        read_matrixB(b, p, q);
        compute_matrixC(a, b, m, n, p, q);
        printf("Resultant matrix C is\n");
        result_matrixC(c, m, q);
    }

    return 0;
}
