#include <bits/stdc++.h>

using namespace std;

// function prototypes
string ltrim(const string &); // removes heading whitespaces
string rtrim(const string &); // removes trailing whitespaces

int main() {
  string n_temp;        // string variable to store the input
  getline(cin, n_temp); // reads userinput and then stores in n_temp

  // calls rtrim function to remove trailing whitespaces
  // call ltrim function to remove heading whitespaces
  // calls stoi function to convert the final string to integer
  int n = stoi(ltrim(rtrim(n_temp)));
  if (n == 1) {
    cout << "one" << endl;
  } else if (n == 2) {
    cout << "two" << endl;
  } else if (n == 3) {
    cout << "three" << endl;
  } else if (n == 4) {
    cout << "four" << endl;
  } else if (n == 5) {
    cout << "five" << endl;
  } else if (n == 6) {
    cout << "six" << endl;
  } else if (n == 7) {
    cout << "seven" << endl;
  } else if (n == 8) {
    cout << "eight" << endl;
  } else if (n == 9) {
    cout << "nine" << endl;

  } else {
    cout << "Greater than 9" << endl;
  }

  return 0;
}

// function to remove leading whitespaces

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}
// function to remove trailing whitespaces
string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
