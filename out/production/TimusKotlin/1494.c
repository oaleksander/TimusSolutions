#include <stdio.h>
#include <malloc.h>

int main() {
    int n, *ball_input, *verification_stack;
    scanf("%d", &n);
    ball_input = malloc(n * sizeof(int));
    verification_stack = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &ball_input[i]);
    _Bool ok = 1;
    int balls_verified = 0, possible_max_ball = 0, possible_balls_in_queue = 0;
    while (ok && balls_verified < n) {
        if (possible_balls_in_queue > 0 && verification_stack[possible_balls_in_queue - 1] == ball_input[balls_verified]) {
            possible_balls_in_queue--;
            balls_verified++;
        } else if (n > possible_max_ball) {
            verification_stack[possible_balls_in_queue] = ++possible_max_ball;
            possible_balls_in_queue++;
        } else ok = 0;
    }
    puts(ok ? "Not a proof" : "Cheater");
    return 0;
}