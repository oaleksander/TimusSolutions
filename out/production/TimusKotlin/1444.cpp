
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct point {
    int x, y;
    int id;
} points[30000];
point pk;

int comparator(point& a, point& b) {
    if(a.x*b.y == a.y*b.x && a.x*b.x + a.y*b.y >= 0)
        // Points with the same angle are sorted outwards
        return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y;
    return atan2(a.y, a.x) < atan2(b.y, b.x);
}

int main() {
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d",&points[i].x,&points[i].y);
        points[i].id = i;
    }

    for(int i = n-1; i >= 0; i--)
        // Translate everything towards the first point
        points[i].x -= points[0].x, points[i].y -= points[0].y;

    sort(points, points + n, comparator);

    int start = 0;
    for(int i = 0; i < n-1; i++) {
        point p0 = points[0], p1 = points[i], p2 = points[i + 1];
        int d1x = p1.x-p0.x, d2y = p2.y-p0.y, d1y = p1.y-p0.y, d2x = p2.x-p0.x;
        int x = d1x*d2y - d1y*d2x, d = d1x*d2x + d1y*d2y;
        if(x < 0 || x == 0 && d < 0) { // Opposite turn, start at that point instead
            start = i;
            break;
        }
    }

    printf("%d\n%d\n", n, (points[0].id + 1));
    for(int i = 0; i < n-1; i++)
        printf("%d\n", (points[(start + i) % (n - 1) + 1].id + 1));
}