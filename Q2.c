#include <stdio.h>
void cube(int *p, int n) {
    int i;
    for (i = 0; i <= n * n; i++) {
        printf("%d ", (*(p + i)) * (*(p + i)) * (*(p + i)));
        if ((i + 1) % n == 0)
            printf("\n");
    }
}
int main() {
    int a[10][10], n, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("Cubes of all elements:\n");
    cube(&a[0][0], n);
}