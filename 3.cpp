#include <iostream>
using namespace std;
int main() 
{
  int money;
  cout << "請輸入金錢:";
  cin >> money;
  int a=money % 50;
  int b=a % 10;
  int c=b % 5;
  int d=c % 1;
  
  if(money>=50)
  {
    cout <<money/50 <<"個50\n";
  }
  if(a>=10)
  {
    cout <<a/10 <<"個10\n";
  }
  if(b>=5)
  {
    cout <<b/5 <<"個5\n";
  }
  if(c>=1)
  {
    cout <<c/1 <<"個1\n";
  }
}
