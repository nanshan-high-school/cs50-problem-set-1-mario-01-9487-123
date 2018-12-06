#include <iostream>
using namespace std;
int main() 
{
  int a,b,c;
  cout <<"請輸入運算符號:(1:+,2:-,3:*,4:/)";
  cin >> a;
  cout <<"請輸入第一個數字:";
  cin >> b;
  cout <<"請輸入第二個數字:";
  cin >> c;
  if (a==1)
    cout << b+c;
  if (a==2)
    cout << b-c;
  if (a==3)
    cout << b*c;
  if (a==4)
    cout << b/c;
}
