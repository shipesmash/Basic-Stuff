#include <iostream>
#include <cmath>
using namespace std;

double fx(double x)
{
  double answer;
  answer=3.141592653589793238462643373279*3*x*x-3.1415*x*x*x/3-30;
  return answer;
}
double secant(double x1, double x0)
{
  double x2, iterationnumber=0;

  while (fabs(x1-x0)>0.000001)
    {
      x2= x1 - ((fx(x1)*(x1-x0)/(fx(x1)-fx(x0))));
      x0=x1;
      x1=x2;
      iterationnumber=iterationnumber+1;
      if (iterationnumber>50)
	return x2;
    }
  return x2;
}

int main ()
{
  double x0, x1;
  cout << "Please input two approximations of the equation's roots. " << endl;
  cin >> x0 >> x1;
  cout << "The approxmiated root is " << secant (x0, x1) << endl;

  return 0;
}
