

#include <iostream>

using namespace std;
void ZaprosVvoda();
double storona(double x1, double  y1, double  x2, double y2);
double ploshad(double a, double  b, double c);

int main()
{
	system("chcp 1251");
	ZaprosVvoda();
	double x1, y1;
	cin >> x1>> y1;
	ZaprosVvoda();
	double x2, y2;
	cin >> x2 >> y2;
	ZaprosVvoda();
	double x3, y3;
	cin >> x3 >> y3;
	ZaprosVvoda();
	double x4, y4;
	cin >> x4 >> y4;
	ZaprosVvoda();
	double x5, y5;
	cin >> x5 >> y5;

	//Reshenie;

	double e = storona(x1,y1,x2,y2);
	double d = storona(x2,y2,x3,y3);
	double c = storona(x3,y3,x4,y4);
	double b = storona(x4, y4, x5, y5);
	double a = storona(x5,y5,x1,y1);
	double g = storona(x1, y1, x3, y3);
	double f = storona(x1,y1,x4,y4);

	double S_edg = ploshad(e, d, g);
	double S_gcf = ploshad(g,c,f);
	double S_abf = ploshad(a,b,f);
	double S = S_edg + S_gcf + S_abf;
	cout << "Площадь многоугольника = " << S;
	return 1;

}

int i = 1;
void ZaprosVvoda() 
{
	cout << "Введите координаты через пробел для точки " << i << endl;
	i++;
}
double storona(double x1,double  y1,double  x2,double y2) 
{
	double prostoRazX = x1 - x2;
	double raznitsa_x_kv = pow(prostoRazX,2);
	double prRazY = y1 - y2;
	double razYKv = pow(prRazY,2);
	double sumRaz = raznitsa_x_kv + razYKv;
	double rez = pow(sumRaz,0.5);
	return rez;
}

double ploshad(double a,double  b,double c)
{
	 
	double x;
	double per = a+b+c;
	double p = per / 2;
	x = per / 3;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}