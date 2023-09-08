#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string tmp = "";
    for(auto s:myString) {
        if(s=='A') tmp+='B';
        else tmp+='A';
    }
    if(tmp.find(pat)!=string::npos) answer=1;
    return answer;
}
