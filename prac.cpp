#include <iostream>
using namespace std;
int add(int x,int y){
    int number;
     cout<<"Enter a number : "<<endl;
    cin >> x;
    cout<<"Enter a number : "<<endl;
    cin>>y;
     number = x + y;
    
    if (number >=10)
    cout<<"Awesome! It's a correct answer "<<endl;
   
    else if (number < 0)
    {
       cout<<"It's a negative number "<<endl; /* code */
    }
   return number; 
}
int main(){
    int max , min;
   
    int result = add(max,min);
    cout<<"The result is "<<result<<endl;
    return 0;
}
