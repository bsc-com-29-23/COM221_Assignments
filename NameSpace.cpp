#include <iostream>
using namespace std;
    
int main(){
  const int ARRAY_SIZE = 10;
  double myList[ARRAY_SIZE];
  cout<<"Enter " << ARRAY_SIZE << " values: ";
  for(int i = 0; i < ARRAY_SIZE; i++)
  cin >> myList[i];
}