#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  // declare the variables for all the data type
  int a;
  long int b;
  char c;
  float d;
  double e;
  // get the user input
  cin >> a >> b >> c >> d >> e;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  // set precision for the float data type
  cout << fixed << setprecision(3) << d << endl;
  // set precision for the double data type
  cout << fixed << setprecision(9) << e << endl;

  return 0;
}