#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    int len = arr.size();
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            if(arr[i][j]!=arr[j][i]) return 0;
        }
    }
    return answer;
}
