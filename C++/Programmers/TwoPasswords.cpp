#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    sort(skip.begin(),skip.end());
    map<char, int> m;
    int idx=0, idx2=0;
    for(int i=0; i<26; i++) {
        if(skip[idx2]-'a'==i) {
            m.insert({i+'a',idx2-100});
            idx2++;
        }
        else {
            m.insert({i+'a',idx});
            idx++;
        }
    }
    int len = s.length();
    for(int i=0; i<len; i++) {
        for(auto it=m.begin(); it!=m.end(); it++) {
            if(it->second == (m[s[i]]+index)%(26-skip.length())) {
                answer+=it->first;
                break;
            }
        }
    }
    return answer;
}
