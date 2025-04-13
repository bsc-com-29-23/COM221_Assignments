#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string names[] ={"B123","C234","A345","C15","B177","G3003","C235","B179"} ;
    char check = 'B';
    for( int i = 0; i < 8; i++){
      if(names[i][0] == check)
      cout << "A word that start with  letter B is " << names[i] << endl;
    
    };
    return 0;
}