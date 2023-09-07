#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(auto s:rny_string) {
        if(s=='m') answer+="rn";
        else answer+=s;
    }
    return answer;
}
