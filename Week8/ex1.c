#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
struct coordinate2D {
    float x;
    float y;
};

typedef struct coordinate2D point;

float point_dist(point a, point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int pointeq (point a, point b) {
    if (abs(a.x - b.x) <= 0.000001 && abs(a.y - b.y) <= 0.000001) {
        return 1;
    } else return 0;
}

int main(int argc, char const *argv[]) {
    point a;
    point b;
    printf("Enter your coordinate of 2 point:x1 ,y1, x2, y2 = ");
    scanf("%f %f %f %f",&a.x, &a.y, &b.x, &b.y);
    printf("The distance between two point: %f \n", point_dist(a, b));
    printf("Equallity check: %d\n", pointeq(a, b));
    return 0;
}
