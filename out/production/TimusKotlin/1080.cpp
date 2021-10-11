#include <cstdio>
#include <cstring>

//O(n^2)

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    bool graph[N][N];
    memset(graph, false, N*N*sizeof(bool));

    for (int i = 0, x; i < N; ++i) {
        while (true) {
            scanf("%d", &x);
            if (x == 0) break;

            --x;
            graph[i][x] = graph[x][i] = true;
        }
    }

    int color[N], queue[N], head, tail;
    memset(color,-1,N*sizeof(int));
    bool is_bipartite = true;
    for (int i = 0; i < N; ++i) {
        if (color[i] != -1) continue;

        head = tail = 0;
        queue[0] = i; //?
        color[0] = 0; //?
        ++tail;

        while (head < tail) {
            int cur = queue[head];
            ++head;

            for (int i = 0; i < N; ++i) {
                if (!graph[cur][i]) continue;

                if (color[i] == -1) {
                    queue[tail] = i;
                    ++tail;
                    color[i] = 1 - color[cur];
                } else {
                    if (color[i] == color[cur])
                        is_bipartite = false;
                }
            }
        }
    }

    if (!is_bipartite) puts("-1");
    else
        for (int i = 0; i < N; ++i) printf("%d", color[i]);

    return 0;
}