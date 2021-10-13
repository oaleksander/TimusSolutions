#include <stdio.h>

int n, adjacent[105][105] = {0}, colors[105], a;

int depthSearch(int v, int color) {
    if (colors[v] != -1 && colors[v] == color) return 1;
    else if (colors[v] != -1 && colors[v] != color) return 0;
    colors[v] = color;
    for (int i = 0; i < n; i++)
        if (adjacent[v][i] && !depthSearch(i, 1 - color))return 0;
    return 1;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        while (1) {
            scanf("%d", &a);
            if (a == 0) break;
            adjacent[i][a - 1] = adjacent[a - 1][i] = 1;
        }
    for (int i = 0; i < 105; i++) colors[i] = -1;
    if (depthSearch(0, 0) == 1)
        for (int i = 0; i < n; i++)
            printf("%d", colors[i]);
    else printf("-1");
    return 0;
}