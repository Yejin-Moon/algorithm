#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int rest = 0;
    while(chicken>=10) {
        answer+=chicken/10;
        rest+=chicken%10;
        chicken/=10;
    }
    rest+=chicken;
    answer+=rest/10;
    int tmp=rest%10;
    rest/=10;
    answer+=(tmp+rest)/10;

    return answer;
}
