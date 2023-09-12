#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    int len = numbers.length();
    string tmp="";
    for(int i=0; i<len; i++) {
        if(numbers[i]=='z') {
            tmp+='0';
            i+=3;
        }
        else if(numbers[i]=='o') {
            tmp+='1';
            i+=2;
        }
        else if(numbers[i]=='t') {
            if(numbers[i+1]=='w') {
                tmp+='2';
                i+=2;
            }
            else {
                tmp+='3';
                i+=4;
            }
        }
        else if(numbers[i]=='f') {
            if(numbers[i+1]=='o') tmp+='4';
            else tmp+='5';
            i+=3;
        }
        else if(numbers[i]=='s') {
            if(numbers[i+1]=='i') {
                tmp+='6';
                i+=2;
            }
            else {
                tmp+='7';
                i+=4;
            }
        }
        else if(numbers[i]=='e') {
            tmp+='8';
            i+=4;
        }
        else {
            tmp+='9';
            i+=3;
        }
    }
    answer=stoull(tmp);
    return answer;
}
