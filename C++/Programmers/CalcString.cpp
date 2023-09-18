#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    string s1;

    string op;
    while(ss>>s1) {
        if(s1!="+" && s1!="-") {
            if(op=="+") answer+=stoi(s1);
            else if(op=="-") answer-=stoi(s1);
            else answer=stoi(s1);
        }
        else op=s1;
    }
    return answer;
}
