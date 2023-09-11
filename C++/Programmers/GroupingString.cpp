#include <string>
#include <vector>

using namespace std;

int arr[31];

int solution(vector<string> strArr) {
    int answer = 0;
    for(auto s:strArr) {
        arr[s.length()]++;
    }
    for(auto a:arr) {
        if(answer<a) answer=a;
    }
    return answer;
}
