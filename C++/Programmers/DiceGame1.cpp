#include <string>
#include <vector>

using namespace std;

int abs(int a) {
    if(a<0) return -a;
    else return a;
} 

int solution(int a, int b) {
    int answer = 0;
    if(a%2==0 && b%2==0) answer=abs(a-b);
    else if(a%2==0 || b%2==0) answer=2*(a+b);
    else answer=a*a+b*b;
    return answer;
}
