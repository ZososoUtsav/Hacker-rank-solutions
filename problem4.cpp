#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  //  a is the upper bound and b is the lower bound
  int a, b, i;
  cin >> a >> b;
  for (i = a; i <= b; i++) {
    if (i > 0 && i <= 9) {
      // create an array to store the digit alphabets till nine
      string digAlpha[] = {"one", "two",   "three", "four", "five",
                           "six", "seven", "eight", "nine"};
      // [i-1] because its an array starts from zero
      cout << digAlpha[i - 1] << endl;
    } else if (i % 2 == 0) {
      cout << "even" << endl;
    } else if (i % 2 != 0) {
      cout << "odd" << endl;
    }
  }

  return 0;
}