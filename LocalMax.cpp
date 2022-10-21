#include <iostream>

int main(){
    int n; std::cin >> n;
    int prev, cur, next;
    std::cin >> prev >> cur;
    for(int i = 2; i < n; ++i){
        std::cin >> next;
        if(cur > next and cur > prev){
            std::cout << i-1;
            return 0;
        }
        prev = cur;
        cur = next;
    } 
    std::cout << -1;
    return 0;
}