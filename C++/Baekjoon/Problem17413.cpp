#include <iostream>
#include <stack>
#include <queue>
using namespace std;

char str[100010];
stack <char> st;
queue <char> qu;

int main()
{
    int flag = -1;
    cin.getline(str,100010);
    int cnt=0;
    for(int i=0; i<100001; i++)
    {
        if(str[i]=='\0') break;;
        cnt++;
    }

    int scnt=0;
    for(int i=0; i<cnt+1; i++)
    {
        if(str[i]=='>') scnt--;
        if(!flag && str[i]=='>' && scnt==0)
        {
            while(!qu.empty())
            {
                cout<<qu.front();
                qu.pop();
            }
            
            cout<<">";
            flag=1;
            i++;
        }
        if(flag!=0 && str[i]==' ' || str[i]=='\0' ||(flag!=0&&str[i]=='<'))
        {
            if(!st.empty())
            {
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
            }
            if(str[i]==' ') 
            {
                cout<<' ';
                i++;
            }
        }
        if(str[i]=='<')
        {
            flag = 0;
            scnt++;
        }
        if(flag==0) qu.push(str[i]);
        if(flag!=0) st.push(str[i]);
    }
}