#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct coordinate2D {
    float x;
    float y;
};

typedef struct coordinate2D point;

    //point distance
/*
float point_dist(point a, point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
*/

    //point equallity
/*
int pointeq (point a, point b) {
    if (abs(a.x - b.x) <= 0.000001 && abs(a.y - b.y) <= 0.000001) {
        return 1;
    } else return 0;
}
*/
typedef struct {
    point lower_left;
    point upper_right;
} rect;

float rect_area (rect r) {
    float area = (abs(r.upper_right.x) - abs(r.lower_left.x)) *
                 (abs(r.upper_right.y) - abs(r.lower_left.y));
    return area;
}
int main(int argc, char const *argv[]) {
    // point a;
    // point b;
    rect r;
    printf("Enter your coordinate of 2 point:x1 ,y1, x2, y2 = ");
    scanf("%f %f %f %f", &r.lower_left.x, &r.lower_left.y,
                        &r.upper_right.x, &r.upper_right.y);
    printf("The coordinate of lower left point is: %f %f \n", r.lower_left.x,
                                                              r.lower_left.y);
    printf("The coordinate of upper right point is: %f %f \n",r.upper_right.x,
                                                              r.upper_right.y);
    printf("Area of the rectangle is: %f\n", rect_area(r));
    // scanf("%f %f %f %f",&a.x, &a.y, &b.x, &b.y);
    // printf("The distance between two point: %f \n", point_dist(a, b));
    // printf("Equallity check: %d\n", pointeq(a, b));
    return 0;
}
