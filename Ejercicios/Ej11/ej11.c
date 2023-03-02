#include <stdio.h>
#include <stdlib.h>



typedef struct 
{
    int x;
    int y;
} Point;

void escalar(int a[], Point *p, int size);
void printPoint(Point p);

int main(){

    int a[] = {1, 2, 4};

    Point p1 = {1, 2};
    Point p2 = {3, 4};
    Point p3 = {2, 2};

    Point *p = (Point*) malloc(3 * sizeof(Point));

    p[0] = p1;
    p[1] = p2;
    p[2] = p3;

/* 
    * Es equivalente hacer:
    * p[0].x = 1
    * p[0].x = 2
    
    * (p+1)-> x = 1
    * (p+1)-> y = 2
     
    * (*(p+2)).x = 1
    * (*(p+2)).y = 2
*/
    printPoint(p[0]);
    printPoint(p[1]);
    printPoint(p[2]);

    escalar(a, p, 3);

    printPoint(p[0]);
    printPoint(p[1]);
    printPoint(p[2]);

    return 0;
}

void escalar(int a[], Point *p, int size){
    size = 3;

    for (int i = 0; i < size; i++){
        p->x *= a[i];
        p->y *= a[i];

        p++;
    }

}

void printPoint(Point p){
    printf("(%i, %i)\n", p.x, p.y); 
}