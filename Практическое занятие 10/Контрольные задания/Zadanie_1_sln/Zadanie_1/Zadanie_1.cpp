 
#include <iostream>
#include "Dot.h"
using namespace std;
 

class Triangle 
{
 
public:
    Dot* a;
    Dot* b;
    Dot* c;
    Triangle() 
    {
        cout << "Введите координаты x и y 1-й точки";
        
        double z1, z2;
         
        cin >> z1 >> z2;
        a= new Dot(z1, z2);
         


        cout << "Введите координаты x и y 2-й точки";
        cin >> z1 >> z2;
        
       b = new Dot(z1, z2);


        cout << "Введите координаты x и y 3-й точки";
      
        
        cin >> z1 >>z2;
       c = new Dot(z1, z2);
         
       x1 = a->distanceTo(*b);


       x2 = c->distanceTo(*a);
       x3 = b->distanceTo(*c);
        
    }

    double x1;
    double x2;
    double x3;

    double Ploshad() 
    {
        double p = (double)per / 2;
         
        double s = sqrt(p * (p - (double)x1) * (p - x2) * (p - x3));
        cout << "S = " << s << endl;
        return s;
    }

    void DlinaStoron() 
    {
        
        cout << "длина 1 стороны"<<x1;
        cout << "длина 2 стороны" << x2;
        cout << "длина 3 стороны" << x3;
    }

    double per;
    
    double Perimetr() 
    {
        per = x1 + x2 + x3;
        cout << "Периметр = " << per<<endl;
        return per;

    }

    Triangle(Dot* a1, Dot* b1, Dot* c1) 
    {
        a = a1;
        b = b1;
        c = c1;
        x1 = a->distanceTo(*b);


        x2 = c->distanceTo(*a);
        x3 = b->distanceTo(*c);
    }

    Triangle(double a1, double a2, double b1, double b2, double c1, double c2)
        {
        a = new Dot(a1, a2);
        b = new Dot(b1, b2);
        c = new Dot(c1, c2);
        
        x1 = a->distanceTo(*b);


        x2 = c->distanceTo(*a);
        x3 = b->distanceTo(*c);

        }



    
};


int main()
{
    system("chcp 1251");
   //первый способ
    Triangle* tr = new Triangle();
    tr->DlinaStoron();
    tr->Perimetr();
    tr->Ploshad();
    double x1, x2, y1, y2, c1, c2;
    //2 sposob
    cout << "введи через создание Dot 6 точек x1,x2,y1,y2,z1,z2";
    
    cin >> x1 >> x2 >> y1 >> y2 >> c1 >> c2;
    Dot* a = new Dot(x1, x2);
    Dot* b = new Dot(y1, y2);
    Dot* c = new Dot(c1, c2);
    Triangle* tr2 = new Triangle(a,b,c);
    tr2->DlinaStoron();
    tr2->Perimetr();
    tr2->Ploshad();
    delete tr;
    delete tr2;
}

 