#ifndef QUADRATIC_H
#define QUADRATIC_H

class Quadratic
{
 public:
  Quadratic();
  Quadratic(double a_init, double b_init, double c_init);
  void GetData();
  void ShowData();
  double Value (double x );
  void Roots(); 
 private:
  double a, b, c;


};
#endif
