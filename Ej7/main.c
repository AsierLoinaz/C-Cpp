#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} Point;


void escalar(Point *p, int num);

int main(){
    
    Point p1 = {4, 5};
    printf("El valor original del punto p1 es (%i, %i)\n", p1.x, p1.y); 

    escalar(&p1, 10);
    printf("El nuevo valor del punto p1 es (%i, %i)\n", p1.x, p1.y); 
    return 0;
}


void escalar(Point *p, int num){
    (*p).x += num;
    (*p).y += num;
}