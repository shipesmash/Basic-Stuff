#include<iostream>
#include<fstream>
#include<ctime>
#include<cmath>
using namespace std;

double monte(int total_darts)
{
  int i,total_under_curve=0;
  double approx_area_under_curve, randx, randy;
  srand (time(NULL));
  for (i=1;i<=total_darts;i++)
    {
      randx=(static_cast <double>(rand())/RAND_MAX)*6+2;
      randy=(static_cast <double>(rand())/RAND_MAX)*150;
      // randx=rand()%7+2;
      // randy=rand()%151;
      // cout << randx<< " " << randy <<  " " << total_darts << " " <<  total_under_curve << "" << RAND_MAX << endl;
      if(randy<=(2*randx*randx+3*randx-2))
	{	
	  total_under_curve++;
	}
    }
  approx_area_under_curve =6.0*150.0* static_cast <double> (total_under_curve)/total_darts;
  return approx_area_under_curve;
}

int main()
{
  int total_darts;
  cout<<"How many darts would you like to throw?"<<endl;
  cin>>total_darts;
  cout << "The area under the curve is approximately " << monte(total_darts) << endl;
  return 0;
}
