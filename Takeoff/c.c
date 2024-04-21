#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Point {
    int x;
    int y;
};

struct Point find_closest_neighbor(int n, struct Point* neighbors) {
    int min_distance = INT_MAX;
    struct Point closest_neighbor = {0, 0};  // default closest neighbor is the origin

    for (int i = 0; i < n; i++) {
        int x = neighbors[i].x;
        int y = neighbors[i].y;
        int distance = abs(x) + abs(y);  // Manhattan distance from origin

        if (distance < min_distance) {
            min_distance = distance;
            closest_neighbor = neighbors[i];
        }
    }

    return closest_neighbor;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Point* neighbors = (struct Point*)malloc(n * sizeof(struct Point));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &neighbors[i].x, &neighbors[i].y);
    }

    // Find the closest neighbor
    struct Point closest_neighbor = find_closest_neighbor(n, neighbors);

    // Print the result
    printf("%d %d\n", closest_neighbor.x, closest_neighbor.y);

    free(neighbors);
    return 0;
}
