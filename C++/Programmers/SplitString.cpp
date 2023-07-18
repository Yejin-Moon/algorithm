#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.length();
    int scnt=0, tcnt=0;
    char sta;
    bool flag=false;
    for(int i=0; i<len; i++) {
        if(!flag) {
            sta = s[i];
            scnt=1;
            tcnt=0;
            flag=true;
        }
        else {
            if(s[i]==sta) scnt++;
            else tcnt++;
            if(scnt==tcnt) {
                answer++;
                flag=false;
            }
        }
    }
    if(flag) answer++;
    return answer;
}
