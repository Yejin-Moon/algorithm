#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while(n>=a) {
        int tmp=n/a;
        answer+=tmp*b;
        n+=tmp*b;
        n-=tmp*a;
    }
    return answer;
}
