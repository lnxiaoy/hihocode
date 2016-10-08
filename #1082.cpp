#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while (getline(cin, s)) {
    string res = s;
    const string s1 = "marshtomp";
    const string s2 = "fjxmlhx";
    for (int i = 0; i < s.size(); i++) {
      if ((s[i] == 'm' || s[i] == 'M') &&
          (s[i + 1] == 'a' || s[i + 1] == 'A') &&
          (s[i + 2] == 'r' || s[i + 2] == 'R') &&
          (s[i + 3] == 's' || s[i + 3] == 'S') &&
          (s[i + 4] == 'h' || s[i + 4] == 'H') &&
          (s[i + 5] == 't' || s[i + 5] == 'T') &&
          (s[i + 6] == 'o' || s[i + 6] == 'O') &&
          (s[i + 7] == 'm' || s[i + 7] == 'M') &&
          (s[i + 8] == 'p' || s[i + 8] == 'P')) {
        s.replace(i, s1.size(), s2);
      }
    }
    cout << s << endl;
  }
  // system("PAUSE");
  return 0;
}
