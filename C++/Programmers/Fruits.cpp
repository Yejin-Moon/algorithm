#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(),score.end());
    int len = score.size();
    int tr = len%m;
    for(int i=tr; i<len; i+=m) {
        answer+=(score[i]*m);
    }
    return answer;
}
