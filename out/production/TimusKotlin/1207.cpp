#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>
#include<cinttypes>

using namespace std;

typedef struct point {
    int64_t x, y, id;
} point;

point* points;

bool cmp(point a, point b) {
    return (a.x - points[0].x) * (b.y - points[0].y) - (b.x - points[0].x) * (a.y - points[0].y) > 0; //angle comparison
}

int main() {
    int n;
    scanf("%d", &n);
    points = (point *) (malloc(n * sizeof(point)));
    scanf("%lld%lld", &points[0].x, &points[0].y);
    points[0].id = 0;
    for (int i = 1; i < n; i++) {
        scanf("%lld%lld", &points[i].x, &points[i].y);
        points[i].id = i;
        if (points[i].x < points[0].x) //make sure zeroth point is at the corner
            swap(points[0], points[i]);
        else if (points[i].x == points[0].x && points[i].y < points[0].y)
            swap(points[0], points[i]);
    }
    nth_element(points + 1, points + n / 2, points + n, cmp); //sort by angle until n/2
    printf("%lld %lld", points[0].id + 1, points[n / 2].id + 1);
}