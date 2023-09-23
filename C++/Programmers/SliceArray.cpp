#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int len = my_str.length();
    for(int i=0; i<len; i+=n) {
        string tmp="";
        for(int j=0; j<n; j++) {
            if(i+j>=len) break;
            tmp+=my_str[i+j];
        }
        answer.push_back(tmp);
    }
    return answer;
}
