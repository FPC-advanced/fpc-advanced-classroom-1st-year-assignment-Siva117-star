// 1.  Write a program to find the distance between two points.

// ***Function Declarations***

// ```c
// struct _point {
//   float x;
//   float y;
// };

// typedef struct _point Point;

// Point input();
// void dist(Point a, Point b, float *res);
// void output(Point a, Point b, float res);
// ```

// ***Input***

// ```
// 1.0 1.0
// 2.0 2.0
// ***Output***

// ```
// The Distance between (1.0,1.0) and (2.0,2.0) is 1.0

#include<stdio.h>
#include<math.h>

struct _point {
 float x;
 float y;
};

typedef struct _point Point;

struct _points {
 Point p1;
 Point p2;
};

typedef struct _points Points;

Points input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
 Points pts;
 float res;
 pts = input();
 dist(pts.p1, pts.p2, &res);
 output(pts.p1, pts.p2, res);
}

Points input(){
 Points p;
 printf("Enter First points \n ");
 scanf("%f %f",&p.p1.x,&p.p1.y);
 printf("Enter Second points\n");
 scanf("%f %f",&p.p2.x,&p.p2.y);
 return p;
}

void dist(Point a, Point b, float *res){
 *res = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
  
}

void output(Point a, Point b, float res){
 printf("The Distance between (%f,%f) and (%f,%f) is %f\n", a.x, a.y, b.x, b.y, res);
}
