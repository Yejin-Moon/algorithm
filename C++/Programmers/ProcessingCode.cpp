#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    int len = code.length();
    for(int i=0; i<len; i++) {
        if(mode==0) {
            if(code[i]!='1' && i%2==0) answer+=code[i];
            else if(code[i]=='1') mode=1;
        }
        else {
            if(code[i]!='1' && i%2==1) answer+=code[i];
            else if(code[i]=='1') mode=0;
        }
    }
    if(answer.length()==0) answer="EMPTY";
    return answer;
}
