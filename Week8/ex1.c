#include <stdio.h>
#include <math.h>
#include <stdlib.h>

point enter_point () {
    point p;
    printf("x, y = \n");
    scanf("%d %d", p.x, p.y);
}
// structure store the coordinate
struct coordinate2D {
    int x;
    int y;
};

typedef struct coordinate2D point;

//point distance
float point_dist(point a, point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


//point equallity
int is_point_equal(point a, point b) {
    if (abs(a.x - b.x) <= 0.000001 &&
        abs(a.y - b.y) <= 0.000001) {
        return 1;
    }
    return 0;
}

//coordinate of the rectangle
typedef struct {
    point lower_left;
    point upper_right;
} rect;

//function in area of the rectangle
float rect_area (rect r) {
    float area = (abs(r.upper_right.x) - abs(r.lower_left.x)) *
                 (abs(r.upper_right.y) - abs(r.lower_left.y));
    return area;
}

//position of a point w.r.t the rectangle
int point_position (point n, rect r) {
    if (abs(r.upper_right.x) > n.x && n.x > abs(r.lower_left.x) &&
       (abs(r.upper_right.y) > n.y && n.y > abs(r.lower_left.y))) {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    // point a;
    // point b;
    // rect r;
    // point n;
    // printf("Enter your coordinate of 2 point:x1 ,y1, x2, y2 = ");
    // scanf("%d %d %d %d", &r.lower_left.x, &r.lower_left.y,
    //                     &r.upper_right.x, &r.upper_right.y);
    // printf("The coordinate of lower left point is: %d %d \n", r.lower_left.x,
    //                                                           r.lower_left.y);
    // printf("The coordinate of upper right point is: %d %d \n",r.upper_right.x,
    //                                                           r.upper_right.y);
    // printf("Area of the rectangle is: %f\n", rect_area(r));
    // printf("Enter a point:");
    // scanf("%d %d", &n.x, &n.y);
    // printf("%d\n", point_position(n, r));
    // scanf("%f %f %f %f",&a.x, &a.y, &b.x, &b.y);
    // printf("The distance between two point: %f \n", point_dist(a, b));
    // printf("Equallity check: %d\n", pointeq(a, b));
        //11
    int n;
    printf("Enter a number of points you want to enter\n");
    scanf("%d\n", &n);

    point p[n];
    if (n < 2) {
        printf("the number of points is too small\n");
    } else {
        for (int i = 0; i < n; i++) {
            enter_point(p[i]);
        }
    }


    

    return 0;
}
