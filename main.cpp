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

class Point3d : public Point {
protected:
    int z;
    std::vector<int> p;
public:
    Point3d() : Point(), z(0) { cout << "Point3d(" << z << ")" << endl; }
    Point3d(int x, int y, int zIn) : Point(x, y), z(zIn) { cout << "Point3d(" << x << ", " << y << ", " << z << ")" << endl; }
    Point3d(const Point3d& other) : Point(other), z(other.z) { cout << "Point3d(Point3d(" << x << ", " << y << ", " << z << "))" << endl; }

    int getZ() { return z; }
    void print() {
        Point::print();
        cout << " " << z;
    }

    ~Point3d() { cout << "Destructor Point3d" << endl; }
};

int main() {
    return 0;
}
