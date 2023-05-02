#include "punto.h"
#include <iostream>

int main(){
    using namespace std;
    Point p1(1, 2);
    Point p2(2, 3);
    p1.print();
    p2.print();

    p1.suma1(p2);
    p1.print();


    // p1.suma1(p2);

    // p1.suma2(p2);

    // p1.suma3(&p2);
    return 0;
}