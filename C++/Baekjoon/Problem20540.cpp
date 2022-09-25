#include <iostream>
using namespace std;

char mbti[5];
char m[8]={'I','E','S','N','T','F','P','J'};

char itype(char a)
{
    for(int i=0; i<8; i++)
    {
        if(a==m[i])
        {
            if(i%2==0) return m[i+1];
            else return m[i-1];
        }
    }
}

int main()
{
    scanf("%s",mbti);
    for(int i=0; i<4; i++)
    {
        printf("%c",itype(mbti[i]));
    }
}