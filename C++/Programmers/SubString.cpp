#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int plen = p.length();
    int tlen = t.length();
    for(int i=0; i<tlen; i++) {
        string tmp = t.substr(i,plen);
        if(tmp<=p && tmp.length()==plen) answer++;
    }
    return answer;
}
