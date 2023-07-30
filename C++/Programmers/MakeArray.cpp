#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i=0;
    int len = arr.size();
    while(i<len) {
        if(answer.size()==0) answer.push_back(arr[i]);
        else {
            if(answer.back()==arr[i]) answer.erase(answer.end()-1);
            else answer.push_back(arr[i]);
        }
        i++;
    }
    if(answer.size()==0) answer.push_back(-1);
    return answer;
}
