#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string revans = "";
    int len = food.size();
    for(int i=1; i<len; i++) {
        for(int j=0; j<food[i]/2; j++) {
            answer+=to_string(i);
            revans=to_string(i)+revans;
        }
    }
    answer+=('0'+revans);
    return answer;
}
