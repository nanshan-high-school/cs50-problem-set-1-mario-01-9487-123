#include <iostream>
using namespace std;

int main(){
  int height;
  cout <<"�п�J1-8���@�ӼƦr:";
  cin >> height;
  if(height<1 || height>8)
    cout<<"���~";
  else
    for(int x=1; x<height+1; x++){
      for(int y=height; y>x; y--){
        cout<< " ";
      }
      for(int y=1; y<=x; y++){
        cout<< "#";
      }
      cout<< "\n";
    }
}
