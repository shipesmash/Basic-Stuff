#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
#include<string>
#include "quadratic.h"

using namespace std;

Quadratic::Quadratic(): a(1), b(1), c(1)
{
}

Quadratic::Quadratic(double a, double b, double c): a(a), b(b), c(c)
{
}

void Quadratic::GetData()
{
  cout << "Please input the values for a, b, and c." << endl;
  cin >> a >> b >> c;
}

void Quadratic::ShowData()
{
  cout<<a<<"x^2";
  if (b<0)
    cout<<b<<"x";
  else
    cout<<"+"<<b << "x";
  if (c<0)
    cout<<c;
  else
    cout<<"+"<<c<<endl;
}

double Quadratic::Value (double x)
{
  x = a*x*x + b*x + c;
  cout<< "The value of the function at x is: " << x << endl;
}

void Quadratic::Roots()
{
  double root1, root2;
  if (b*b-4*a*c<0)
    {
      cout << "Unreal roots" << endl;
    }
  else
    {
      root1 = (-b + (sqrt(b*b-4*a*c)))/(2*a);
      root2 = (-b - (sqrt(b*b-4*a*c)))/(2*a);
      if (root1 == root2)
	cout << "The double root is: " << root1 << endl;
      else
      cout << "The roots are: " << root1 << " " << root2 << endl;  
    }
}

