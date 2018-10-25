#include <iostream>
using namespace std;
int main() {
int a=50,b=10,c=5,d=1;
int money;
    cout << "請輸入金額";
    cin >> money;

int e = money/a, f=money-e*a;
    cout << e << "個50元";
int g = f/b, h= f-g*b;
    cout <<"\n" << g <<"個10元";
int i = h/c, j=h-i*c;
    cout <<"\n" << i << "個5元";
int k=j/d;
    cout <<"\n" << k << "個1元";
}
