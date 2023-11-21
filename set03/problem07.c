// 7. Write a program to find the length of a line

// ***Function Declarations***
// ```c
// typedef struct point {
//     float x, y;
// } Point;

// typedef struct line {
//     Point p1, p2;
//     float distance;
// } Line;

// Point input_point();
// Line input_line();
// void find_length(Line *l);
// void output(Line l);

#include <stdio.h>
#include <math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter the coordinate of X: ");
    scanf("%f", &p.x);
    printf("Enter the coordinate of Y: ");
    scanf("%f", &p.y);
    return p;
}
Line input_line() {
    Line l;
    printf("Enter the coordinates of the first point:\n");
    l.p1 = input_point();
    printf("Enter the coordinates of the second point:\n");
    l.p2 = input_point();
    return l;
}
void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}


void output(Line l) {
    printf("The distance between the points (%f, %f) and (%f, %f) is %f\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y,l.distance);
    
}

int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}

