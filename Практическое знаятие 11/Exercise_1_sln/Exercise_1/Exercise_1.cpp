 
 
#include <iostream>
#include <cmath>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:

    const float MTF;


    Distance() : feet(0), inches(0.0), MTF(3.280833F) 
    {
    }

    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
    {
    }
    Distance(float meters) :MTF(3.280833F)
    {
        float  fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }

    operator float() const 
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }

    void getdist()
    {
        cout << "\nВведите число футов: ";
        cin >> feet;
        cout << "\n";
        cin >> inches;
    }

    void showdist()
    {
        cout << feet << "\' -" << inches << "\"\n";
    }
    Distance operator+(const Distance&) const;
    friend Distance  operator-(Distance d1, Distance d2);
    
    friend Distance operator+(Distance D, double b);
   

};

  Distance operator+(Distance D, double b)
{
    float f = b * D.MTF;
    Distance d;
    int f_d = (int)f;
    float f_i = abs(f - f_d);
    d.feet = D.feet + f_d;
    d.inches = (float)(D.inches + f_i)*39.37;
    if (d.inches > 12) 
    {
        d.feet++;
        d.inches -= 12;
    }
    return d;

}


 Distance  operator-(Distance d1, Distance d2)
{
     Distance d3;
     d3.feet = d1.feet - d2.feet;
     d3.inches = d1.inches - d2.inches;
     return d3;

}
Distance Distance :: operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12)
    {
        i -= 12.0;
        f++;
    }
    Distance d;
    d.feet = f;
    d.inches = i;
    return d;

    

}





int main()
{
    system("chcp 1251");
    
    Distance dist = 2.35F;
    dist.showdist();
    Distance ddd = 1.2F;
    ddd.showdist();
    Distance d = dist + 1.2;
    d.showdist();

   
}
