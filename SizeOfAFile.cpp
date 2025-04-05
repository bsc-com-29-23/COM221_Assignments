//obtaining file size
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    streampos begin;
    streampos end;

    ifstream MyFile("example.bin",ios::binary);
    begin = MyFile.tellg();
    MyFile.seekg(0,ios::end);
    end = MyFile.tellg();
    MyFile.close();
    cout <<"Size is: " <<(end-begin) <<"bytes.\n";
    return 0;
}