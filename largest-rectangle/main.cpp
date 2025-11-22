#include <iostream>
using namespace std;

int main(){
  struct TypObdelnik{
     float stranaA, stranaB, Obsah;
  };
  TypObdelnik max1, max2, max3, C;
  max1.Obsah=0;

  while (cin >> C.stranaA >> C.stranaB){
    C.Obsah = C.stranaA * C.stranaB;
    if (C.Obsah>max1.Obsah) {
      max3=max2;
      max2=max1;
      max1=C;
    } else if (C.Obsah>max2.Obsah){
        max3=max2;
        max2=C;
    } else if (C.Obsah>max3.Obsah) max3=C;
  }
  
  cout << max1.stranaA << max1.stranaB << endl;
  cout << max2.stranaA << max2.stranaB << endl;
  cout << max3.stranaA << max3.stranaB << endl;
  return 0;
}