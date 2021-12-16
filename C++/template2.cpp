#include <iostream>
#include <string>

template <class T>
T sum(T a, T b){
    return a+b;
}

//템플릿 재정의
template<>
char *sum<char*> (char* s1, char* s2){
    char *str = "[char*] String cannot be added.";
    std::cout << "s1 : "<<s1<<std::endl;
    std::cout << "s2 : "<<s2<<std::endl;
    return str;
}

template<>
const char* sum<const char*> (const char * s1, const char *s2){
    char *str = "[const char*] String cannot be added.";
    std::cout<<"const s1: "<< s1<< std::endl;
    std::cout<<"const s2: "<< s2<< std::endl;
    return str;
}

template<>
std::string sum<std::string> (std::string s1, std::string s2){
    std::string str = "[string] String cannot be added.";
    std::cout<< "string s1 : "<<s1<<std::endl;
    std::cout<< "string s2 : "<<s2<<std::endl;
    return str;
}

int main()
{
    int a = 10;
    int b = 20;
    double d1 = 1.1;
    double d2 = 2.2;
    char *s1 = "ABC";
    char *s2 = "def";
    std::string s3 = "Stirng1";
    std::string s4 = "String2";

    std::cout<<sum(a,b)<<std::endl<<std::endl;
    std::cout<<sum(d1,d2)<<std::endl<<std::endl;
    std::cout<<sum(s1,s2)<<std::endl<<std::endl;
    std::cout<<sum("ex","ample")<<std::endl<<std::endl;
    std::cout<<sum<const char*>(s1,s2)<<std::endl<<std::endl;
    std::cout<<sum(s3,s4)<<std::endl;

    return 0;
}
