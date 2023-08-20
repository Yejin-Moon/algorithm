#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int idx=-1;
    bool flag=false;
    int len = str_list.size();
    for(int i=0; i<len; i++) {
        if(str_list[i]=="l" || str_list[i]=="r") {
            if(str_list[i]=="l") flag=true;
            idx=i;
            break;
        }
    }
    if(idx==-1) return answer;
    if(flag) {
        for(int i=0; i<idx; i++) answer.push_back(str_list[i]);
    }
    else {
        for(int i=idx+1; i<len; i++) answer.push_back(str_list[i]);
    }
    return answer;
}
