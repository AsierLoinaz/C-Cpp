#ifndef PUNTO_H
#define PUNTO_H

class Point
{
    private:
        float x, y;
    public:
        Point(int x, int y);
        void suma1(Point p);
        void suma2(Point &p);
        void suma3(Point *p);
        Point getSuma(Point &p);
        void print();
};

#endif