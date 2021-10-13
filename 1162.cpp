#include <cstdio>
#include <vector>

using namespace std;

struct edge_t {
    int a, b;
    double rate, comm;
};

vector<edge_t> edges;

double nodes[101];

int main() {
    int n, m, s;
    double v;

    scanf("%d %d %d %lf", &n, &m, &s, &v);
    nodes[s] = v;
    for (int i = 0; i < m; ++i) {
        int a, b;
        double rab, cab, rba, cba;
        scanf("%d %d %lf %lf %lf %lf", &a, &b, &rab, &cab, &rba, &cba);
        edges.push_back({a, b, rab, cab});
        edges.push_back({b, a, rba, cba});
    }
    for (int i = 0; i < n - 1; ++i)
        for (auto &edge: edges)
            nodes[edge.b] = max(nodes[edge.b], (nodes[edge.a] - edge.comm) * edge.rate);
    for (auto &edge: edges) {
        if ((nodes[edge.a] - edge.comm) * edge.rate > nodes[edge.b]) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
