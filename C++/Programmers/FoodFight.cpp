#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int len = food.size();
    for(int i=1; i<len; i++) {
        for(int j=0; j<food[i]/2; j++) {
            answer+=(i+'0');
        }
    }
    string tmpans = answer;
    reverse(answer.begin(), answer.end());
    tmpans+='0';
    tmpans+=answer;
    return tmpans;
}
