#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string tmp="";
    for(int i=e; i>=s; i--) {
        tmp+=my_string[i];
    }
    my_string.replace(s,e-s+1,tmp);
    return my_string;
}
