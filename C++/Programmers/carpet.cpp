#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown+yellow;
    for(int i=1; i<brown; i++) {
        int j=total/i;
        if(2*i+2*j-4==brown && i*j==total) {
            answer={j,i};
            return answer;
        }
    }
}
