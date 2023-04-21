#include <iostream>
#include <sample/sample.h>
#include <string>

using namespace std;
int main(){
    Sample jane{"Jane"};
    if(jane.getName() == "Jane")
        cout << "Name: Jane" << "\n";
    
    jane.setName("Mary Jane");
    if(jane.getName() == "Mary Jane")
        cout << "Success" << endl;
}