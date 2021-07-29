 
 
#include <iostream>
#include <math.h>

using namespace std;

class Point 
{
public:
    double x;
    double y;
    Point() 
    {
    }
    Point(double a, double b) 
    {
        x = a;
        y = b;
        Dlina();
    }
    double l;
    void Dlina() 
    {
        l = sqrt(pow(x, 2.) + pow(y, 2.));
    }
    bool operator<(const Point& p) 
    {
        return l < p.l;
    }
};


ostream& operator<<(ostream& os, const Point& p)
{
    os << "для координат x=" << p.x << " , y =" << p.y << "длина будет = " << p.l;
    return os;
};
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    system("chcp 1251");
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
    for (auto& point : v)
        std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
    return 0;
}
 