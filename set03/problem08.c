// 8. Write a program to find the permeter of a polygon

// ***Function Declarations***
// ```c
// typedef struct point {
//     float x,y;
// } Point;


// typedef struct polygon {
//     int sides;
//     point p[100];
//     float perimeter;
// } Polygon;

// int input_n();
// Point input_point(char *promt_msg);
// int input_polygon(Polygon *p);
// float find_distance(Point a, Point b);
// void find_perimeter(Polygon* p);
// void output(Polygon p);
// ```

// ***Input***
// ```
// Enter the number of sides of the polygon:
// 4
// Enter the coordinates of point 1 (x,y):
// 0 0
// Enter the coordinates of point 2 (x,y):
// 1 0
// Enter the coordinates of point 3 (x,y):
// 1 1
// Enter the coordinates of point 4 (x,y):
// 0 1
// ```

// ***Output***
// ```
// The perimeter of the polynomial is 4.000000
// ```
#include<stdio.h>
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Polygon p);
void find_perimeter(Polygon* p,float distance);
void output(Polygon p);
int main()
{
       Polygon p;
       float distance;
       int poly;
       char prompt_msg[100]="ente the coordinates";
    // p.sides=input_n();
    Point a,b;
    input_polygon(&p);
    distance=find_distance(p);
    find_perimeter(&p,distance);
    output(p);
    return 0;

 

}
int input_n()
{
    int x;
    printf("enter the sides");
    scanf("%d",&x);
    return x;
}
Point input_point()
{
    Point p;
    printf("enter the x and y coordinates");
    scanf("%f %f",&p.x,&p.y);
    return p;
}
void input_polygon(Polygon *p)
{
    Polygon x;
    p->sides=input_n();
    for(int i=0;i<p->sides;i++)
    {
        p->p[i]=input_point();
    }
    
}
float find_distance(Polygon p)
{
    float total;
    total=(((p.p[1].x-p.p[0].x))*((p.p[1].x-p.p[0].x)))+(((p.p[1].y-p.p[0].y))*(((p.p[1].y-p.p[0].y))));
    float x;
    x=total;
    while(x*x-total>0.00001)
    {
        x=0.5*(x+total/x);
    }
    return x;
}
void find_perimeter(Polygon* p,float distance)
{
    p->perimeter=p->sides*distance;
}
void output(Polygon p)
{
    printf("the perimeter of the polygon is %f",p.perimeter);
}