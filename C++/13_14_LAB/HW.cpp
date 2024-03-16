#include <iostream>
#include <cmath>

class Point {
private:
    double xCoordinate;
    double yCoordinate;

public:
    Point(double x, double y) {
        xCoordinate = x;
        yCoordinate = y;
    }

    double getDistanceTo(Point otherPoint) {
        double deltaX = xCoordinate - otherPoint.xCoordinate;
        double deltaY = yCoordinate - otherPoint.yCoordinate;
        return std::sqrt(deltaX * deltaX + deltaY * deltaY);
    }
};

int main() {
    Point point1(2.0, 3.0);
    Point point2(-1.5, 2.5);
    Point point3(0.0, -1.0);

    double distance1to2 = point1.getDistanceTo(point2);
    double distance1to3 = point1.getDistanceTo(point3);
    double distance2to3 = point2.getDistanceTo(point3);

    std::cout << "Расстояния между точками:" << std::endl;
    std::cout << "Расстояние между точкой 1 и точкой 2: " << distance1to2 << std::endl;
    std::cout << "Расстояние между точкой 1 и точкой 3: " << distance1to3 << std::endl;
    std::cout << "Расстояние между точкой 2 и точкой 3: " << distance2to3 << std::endl;

    return 0;
}