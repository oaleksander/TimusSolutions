#include <cstdio>
#include <vector>

using namespace std;

struct station {
    vector<pair<int, int>> pipeline;    // contains destination and profit
    int profit;                         // sum of all previous profits
} stations[500];

int m, n, s, f;

#define PIPE_DESTINATION first
#define PIPE_PROFIT second

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        stations[--a].pipeline.emplace_back(--b, c);
    }

    scanf("%d %d", &s, &f);
    s--;

    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n; ++j) //traverse over all stations n-1 times
            for (int k = 0; k < stations[j].pipeline.size(); ++k) { //traverse over all pipelines
                auto currPipeline = stations[j].pipeline[k];
                if (currPipeline.PIPE_DESTINATION != s && ((j == s) || stations[j].profit))
                    stations[currPipeline.PIPE_DESTINATION].profit = max(stations[j].profit + currPipeline.PIPE_PROFIT,
                                                                         stations[currPipeline.PIPE_DESTINATION].profit);
            }

    if (!stations[--f].profit)
        puts("No solution");
    else
        printf("%d", stations[f].profit);

    return 0;
}
