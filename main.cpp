#include <iostream>
#include <string>
#include <cctype>

using namespace std;
// --------Функция проверки на корректность ввода---
bool check_symbol(const string &str) {
  for (int i = 0; (i < str.length()); i++) {
    if (!isalpha(str[i])) {
      cout << "Incorrect surname!" << endl;
      return false;
    }
  }
  return true;
}

int main() {
  string tenants[10], s;
  int count (0), n;
  do {
    cout << "Input surname " << count + 1 << ":" << endl;
    cin >> tenants[count];
    string tenant = tenants[count];
    if (check_symbol(tenant))
      count++;
  } while (count < 10);
  while (s != "n") {
    cout << " Input number: ";
    cin >> n;
    cout << tenants[n - 1] << endl;
    cout << "Continue work? y/n  -   ";
    cin >> s;
  }
}
