#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int max = 0;
    int len = section.size();
    for(int i=0; i<len; i++) {
        if(section[i]<max) continue;
        answer++;
        max=section[i]+m;
    }
    return answer;
}
