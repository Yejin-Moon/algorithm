#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s = to_string(num);
    int len = s.length();
    char ktmp = k+'0';
    for(int i=0; i<len; i++) {
        if(s[i]==ktmp) return i+1;
    }
    return answer;
}
