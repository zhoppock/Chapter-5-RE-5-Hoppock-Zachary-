#include <iostream>
#include <cmath>
using namespace std;

double k(double x) { return 2 * (x + 1); }
double h(double x) { return x * x + k(x) - 1; }
double g(double x) { return 4 * h(x); }
double f(double x) { return g(x) + sqrt(h(x)); } 

int main()
{
  double x1 = f(2); 
  cout << "a. " << x1 << endl;
  double x2 = g(h(2)); 
  cout << "b. " << x2 << endl;
  double x3 = k(g(2) + h(2)); 
  cout << "c. " << x3 << endl;
  double x4 = f(0) + f(1) + f(2); 
  cout << "d. " << x4 << endl;
  double x5 = f(-1) + g(-1) + h(-1) + k(-1); 
  cout << "e. " << x5 << endl;
  return 0;
}