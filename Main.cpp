#include <iostream>
using namespace std;

int main() {
  setlocale(LC_CTYPE, "ukr");
  const int mask = 1;
  int var;
  cout << "Введіть значення змінної: ";
  cin  >> var;
  
  if (var < 0 || var > 511){
    cout << "Error";
    return 0;
  }
  
  if (var & mask)
    cout << "Значення бiта: 1" << "\n";
  else
    cout << "Значення бiта: 0" << "\n";
  
  return 0;
}
