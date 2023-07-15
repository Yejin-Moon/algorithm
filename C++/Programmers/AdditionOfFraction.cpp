#include <string>
#include <vector>
#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if(b==0) return a;
    else return GCD(b,a%b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int gcd = GCD(denom1, denom2);
    int lcm = denom1*denom2/gcd;
    int a = lcm/denom1;
    int b = lcm/denom2;
    int son = numer1*a+numer2*b;
    int gcd2 = GCD(son,lcm);
    answer.push_back((numer1*a+numer2*b)/gcd2);
    answer.push_back(lcm/gcd2);
    return answer;
}
