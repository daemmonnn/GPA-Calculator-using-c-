#include <iostream>

using namespace std;


int main (int argc, char *argv[]) {
  int sub, units;

  cout << "Total subjects? : ";
  cin >> sub;

  cout << "Total units? : ";
  cin >> units;

  float grades[sub];
  int unit[sub];

  float total[sub];

  float final = 0;

  for (int i=0; i<sub; i++) {
    cout << "Enter grade #" << i+1 << " : ";
    cin >> grades[i];
    cout << "Enter unit for grade #" << i+1 << " : ";
    cin >> unit[i];
  }

  for (int i=0; i<sub; i++) {
    float product = grades[i] * unit[i];
    total[i] = product;
  }

  for (int i=0; i < sub; i++) {
    final += total[i];
  }

  cout << "GPA : " << final / units << endl;

  return 0;
}
