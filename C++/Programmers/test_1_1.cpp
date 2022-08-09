#include <string>
#include <vector>
#include <iostream>

using namespace std;
int xarr[10];
int yarr[10];

int smval(int a, int b)
{
    if(a<b) return a;
    else return b;
}

string solution(string X, string Y) {
    string answer = "";
    int xlen = X.length();
    int ylen = Y.length();
    for(int i=0; i<xlen; i++)
    {
        xarr[X[i]-'0']++;
    }
    for(int i=0; i<ylen; i++)
    {
        yarr[Y[i]-'0']++;
    }
    for(int i=9; i>=0; i--)
    {
        if(xarr[i]>0 && yarr[i]>0)
        {
            int big = smval(xarr[i],yarr[i]);
            for(int j=0; j<big; j++)
            {
                answer+=i+'0';
                if(answer[0]=='0') return answer;
            }
        }
    }
    if(answer.length()==0) answer="-1";
    return answer;
}