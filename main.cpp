#include <iostream>
#include <vector>
using namespace std;

class Point {
protected:
    int x, y;
public:
    Point() : x(0), y(0) { cout << "Point(" << x << ", " << y << ")" << endl; }
    Point(int xIn, int yIn) : x(xIn), y(yIn) { cout << "Point(" << x << ", " << y << ")" << endl; }
    Point(const Point& p) : x(p.x), y(p.y) { cout << "Point(Point(" << x << ", " << y << "))" << endl; }

    int getX() { return x; }
    int getY() { return y; }
    void setPos(int xIn, int yIn) {
        x = xIn;
        y = yIn;
    }
    void print() { cout << x << " " << y; }

    ~Point() { cout << "Destructor Point" << endl; }
};

int main() {
    return 0;
}
