#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    while(abs(b-a)>=1) {
        if(a%2==1) a++;
        if(b%2==1) b++;
        a=round(a/2);
        b=round(b/2);
        answer++;
    }
    return answer;
}
