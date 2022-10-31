#include <iostream>

void cinArray(int* a, int n){
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
}

int main(){
    std::cout << "Enter array length: ";
    int n; std::cin >> n;

    std::cout << "Enter array: ";
    int* a = new int[n]; cinArray(a, n);

    int flag = 1;
    for(int i = 1; i < n; i++){
        if(a[i-1]>=a[i]){
            flag = 0;
        }
    }
    if(flag)
        std::cout << "increases";
    
    flag = 1;
    for(int i = 1; i < n; i++){
        if(a[i-1]<=a[i]){
            flag = 0;
        }
    }
    if(flag)
        std::cout << "decreases";

    return 0;
}