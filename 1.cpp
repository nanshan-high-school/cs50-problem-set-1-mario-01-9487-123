#include <iostream>
using namespace std;
int main() {
  int height;
  cout << "�п�J�T���ΰ���(���׻~>8or<1):";
  cin >> height;
  if (9>height && height>0) {
    for (int a=0;a<height;a++) {
      for (int b=height;b>a;b--) {
        cout << " ";
      }
      for (int b=0;b<=a;b++) {
        cout << "#";
      }
      cout << "  ";
      for (int b=0;b<=a;b++) {
        cout << "#";
      }
      cout << "\n";
    }
    cout << "����:" << height << "\n";
  }
  else {
    cout << "���~\n";
  }
}
