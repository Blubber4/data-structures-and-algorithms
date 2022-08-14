#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

#include <iostream>

using namespace std;

class Point2D {

	protected:
        int xc, yc;
	public:
        Point2D(int x, int y) {
            xc = x;
            yc = y;
        }
        int getX() const {
            return xc;
        }
        int getY() const {
            return yc;
        }
        friend ostream& operator<<(ostream& os, const Point2D& point);

};

ostream& operator<<(ostream& os, const Point2D& point) {
    os << "point: x= " << point.getX() << " y= " << point.getY() ;
    return os;
}



#endif // POINT2D_H_INCLUDED
