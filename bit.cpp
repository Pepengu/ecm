#include <iostream>

void binary(int n){
    if(n){
        binary(n>>1);
        std::cout << (n&1);
    }

}

int main(){
    long long n; std::cin >> n;
    binary(n);
    return 0;
}