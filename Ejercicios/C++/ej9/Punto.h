#ifndef PUNTO_H
#define PUNTO_H

class Point
{
    protected:
        float x, y;
    public:
        Point(float x, float y);
        Point(const Point& p);
        virtual ~Point();
        void suma1(Point p);
        void suma2(Point &p);
        void suma3(Point *p);
        Point getSuma(Point &p);
        virtual void print()const;
};
#endif