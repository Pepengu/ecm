#include <iostream>

int main(){
    int n; std::cin >> n;
    int s = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        std::cin >> tmp;
        s += tmp;
    }
    std::cout << n*(n+1)/2 - s;
    return 0;
}