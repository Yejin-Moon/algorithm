#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num){
    if(num<2){
        return false;
    }
    for(int i = 2; i < num; i++){
        if(num %i ==0){
            return false;
        }
    }
    return true;
}

vector<int> primes(int low, int up){
    vector<int> vec;

    for(int i = low; i<=up; i++){
        if(is_prime(i)){
            vec.push_back(i);
        }
    }
    return vec;
}

int main()
{
    int lower = 1, upper = 100;

    vector<int> v_prime = primes(lower, upper);
    for(int elem: v_prime){
        cout<<elem <<'\n';
    }
    cout<<endl;

    return 0;
}