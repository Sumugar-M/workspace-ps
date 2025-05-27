#include<stdio.h>
#include<math.h>

typedef struct Point { //declaration not definition..
    double x;
    double y;
    double (*calculate_distance)(struct Point*);
} Point;

double _calculate_distance(Point *p) {
      return sqrt(p->x * p->x + p->y * p->y);
}

//constructor
void _init_point(Point *p, double x, double y) {
    p->x = x;
   // (*p).x = x
    p->y = y;
    p->calculate_distance = _calculate_distance;
}

int main()
{
    Point p;
    _init_point(&p,1,2);
    printf("x = %lf\n",p.x);
    printf("y = %lf\n",p.y);
    printf("%lf", p.calculate_distance(&p));
}
