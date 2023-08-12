#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i=l; i<=r; i++) {
        string s = to_string(i);
        bool flag = true;
        for(int j=0; j<s.length(); j++) {
            if(s[j]!='0' && s[j]!='5') {
                flag=false;
                break;
            }
        }
        if(flag) answer.push_back(i);
    }
    if(answer.size()==0) answer.push_back(-1);
    return answer;
}
