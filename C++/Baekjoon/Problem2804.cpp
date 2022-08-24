#include <iostream>
using namespace std;

char arr[26];

int main()
{
    char cross;
    int bidx=100;
    char strA[31];
    char strB[31];
    scanf("%s %s",strA,strB);
    for(int i=0; strA[i]!=0; i++) arr[strA[i]-'A']++;
    for(int i=0; strB[i]!=0; i++)
    {
        if(arr[strB[i]-'A']>0) 
        {
            for(int j=0; strA[j]!=0; j++)
            {
                if(strA[j]==strB[i]) 
                {
                    bidx=i;
                    cross=strB[i];
                    break;
                    /*
                    if(bidx>j)
                    {
                        bidx=j;
                        cross=strB[i];
                        break;
                    }
                    */
                }
            }
        }
    }
    int idx=0;
    for(int i=0; strA[i]!=0; i++)
    {
        if(strA[i]==cross) 
        {
            idx=i;
            break;
        }
    }

    for(int i=0; strB[i]!=0; i++)
    {
        for(int j=0; strA[j]!=0; j++)
        {
            if(i!=bidx)
            {
                if(j!=idx) printf(".");
                else printf("%c",strB[i]);
            }
            else printf("%c",strA[j]);
        }
        printf("\n");
    }
}