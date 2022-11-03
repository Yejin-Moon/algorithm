#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        char name[11];
        int age,weight;
        scanf("%s %d %d",name,&age,&weight);
        if(age==0) break;
        if(age>17 || weight>=80)
        {
            printf("%s Senior\n",name);
        }
        else printf("%s Junior\n",name);
    }
}