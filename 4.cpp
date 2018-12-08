#include <iostream>
using namespace std;
int main() 
{
int a,b,c;
cout <<"請輸入運算符號:(1:+,2:-,3:*,4:/)";
cin >> a;
if (a<1 || a>4)
{cout <<"請輸入1,2,3,4\n";return 0;}
cout <<"請輸入第一個數字:";
cin >> b;
cout <<"請輸入第二個數字:";
cin >> c;
cout << "運算結果為:";
if (a==1)
{cout << b+c;}
if (a==2)
{cout << b-c;}
if (a==3)
{cout << b*c;}
if (a==4)
{cout << b/c;}
int d;
cout <<"\n請輸入運算結果:";
cin >> d;
if (d%3==0)
{cout <<"是3的倍數\n";}
if (d%3!=0)
{cout <<"不是3的倍數\n";}
return 0;
}
