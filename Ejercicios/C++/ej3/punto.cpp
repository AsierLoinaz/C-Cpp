#include "punto.h"
#include <iostream>

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::suma1(Point p){
    this->x += p.x;
    this->y += p.y;

}
void Point::suma2(Point &p){
    this->x += p.x;
    this->y += p.y;
}
void Point::suma3(Point *p){
    this->x += p->x;
    this->y += p->y;
}
// Point Point::getSuma(Point &p){
//     Point p = Point(this->x + p.x, this->y + p.y);
//     return p;
// }
void Point::print(){
    std::cout << this->x << ", " << this->y << std::endl;
}