#include <iostream>

using namespace std;

bool find_char(const char *s, char c){
    while(*s != '\0'){
        if(*s == c){
            return true;
        }
        s++;
    }
    return 0;
}

int main()
{
    const char* ch = "phrase";

    for(char c = 'a'; c<= 'z'; c++){
        cout<<"["<<c<<"] is ";

        if(!find_char(ch,c)){
            cout<<"Not ";
        }
        else{
            cout<<"    ";
        }
        cout<<"in "<<ch<<endl;
    }
    return 0;
}