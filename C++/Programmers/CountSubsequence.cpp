#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int len = elements.size();
    
    set<int> s;
    for(int i=1; i<=len; i++) {
        for(int j=0; j<elements.size(); j++) {
            int tmp=0;
            for(int k=j; k<i+j; k++) {
                tmp+=elements[k%len];
            }
            s.insert(tmp);
        }
    }
    answer=s.size();
    return answer;
}
