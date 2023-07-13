#include <string>
#include <vector>
#include <cmath>

using namespace std;

int sol(int n) {
    int res=0;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            res++;
            if(i!=n/i) res++;
        }
    }
    return res;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i=1; i<=number; i++) {
        int tmp = sol(i);
        if(tmp>limit) tmp=power;
        answer+=tmp;
    }
    return answer;
}
