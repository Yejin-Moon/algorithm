#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    int num[6];
    int i=0;
    string str = "1 2 3 4 5 6";
    stringstream stream;
    stream.str(str);
    while(stream>>num[i])
    {
        cout<<num[i]<<endl;
        i++;
    }
    stream.str("");
}