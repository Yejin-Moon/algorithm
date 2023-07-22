#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int dis1 = common[1]-common[0];
    int dis2 = common[2]-common[1];
    int sz = common.size();
    if(dis1==dis2) answer=common[sz-1]+dis1;
    else answer=common[sz-1]*(common[1]/common[0]);
    return answer;
}
