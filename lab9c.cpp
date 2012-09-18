#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include <iomanip>
#include "quadratic.h"
using namespace std;

int main()
{
Quadratic f1 (2, -4, 6);
f1.ShowData();
f1.Value(8);
f1.Roots();

 Quadratic f2;
f2.GetData();
f2.Value(8);
f2.Roots();

return 0;
}
