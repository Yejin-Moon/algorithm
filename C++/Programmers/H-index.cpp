#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    int len = citations.size();
    int answer = 0;
    int start = citations[0], end = citations[len-1];
    
    for(int i=end; i>=0; i--) {
        int a=0, b=0;
        for(int j=0; j<len; j++) {
            if(citations[j]>=i) a++;
        }
        if(a>=i) {
        answer=i;
        break;
    }
    }
    
    return answer;
}
