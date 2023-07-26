#include <string>
#include <vector>

using namespace std;

int abs(int a) {
    if(a<0) return -a;
    else return a;
}
int solution(vector<vector<int>> dots) {
    int answer = 0;
    int tmpa, tmpb;
    tmpa = (dots[0][0]==dots[1][0]) ? dots[2][0]-dots[0][0] : dots[1][0]-dots[0][0];
    tmpb = (dots[0][1]==dots[1][1]) ? dots[2][1]-dots[0][1] : dots[1][1]-dots[0][1];

    answer=(abs(tmpa))*(abs(tmpb));
    return answer;
}
