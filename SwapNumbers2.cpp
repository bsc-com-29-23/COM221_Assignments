#include <iostream>
using namespace std;
void  SwapNumbers( int*x, int*y){
      int temp = *x;
      *x = *y;
      *y = temp;

}
int main(){
   int   varA = 25;
   int  varB = 100;

     cout << "VarA before swap: " << varA << endl; //varA is 25
    cout << "VarB before swap: " << varB << endl; //varB is 100
    
    
     SwapNumbers(&varA ,  &varB);

    cout << "varA after swap: " << varA << endl; //varA is 100
    cout << "varB after swap: " << varB << endl;//varB is 25
    return 0;
}