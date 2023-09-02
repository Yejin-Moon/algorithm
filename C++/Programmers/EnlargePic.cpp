#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(auto s:picture) {
        string str="";
        int len = s.length();
        for(int j=0; j<len; j++) {
            for(int i=0; i<k; i++) {
                str+=s[j];
            }
        }
        for(int i=0; i<k; i++) answer.push_back(str);
    }
    return answer;
}
