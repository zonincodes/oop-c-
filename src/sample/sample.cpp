#include <sample/sample.h>
#include <string>

using namespace std;

void Sample::setName(std::string x)
{
    name = x;
}

string Sample::getName(){
    return name;
}