#include <iostream>

int main(){
    int n; std::cin >> n;
    int s = 0;
    int* arr = new int[n];
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
        s += arr[i];
    }
    std::cout << n*(n+1)/2 - s;
    return 0;
}