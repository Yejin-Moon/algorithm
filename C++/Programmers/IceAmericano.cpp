#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    if(money==0) return answer={0,0};
    int a = money/5500;
    if(a<1) return answer={0,money};
    int b = money % (5500*a);
    return answer={a,b};
}
