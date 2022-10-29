#include <iostream>

int main(){
    int n; std::cin >> n;
    int* arr = new int[n];

    //заполнение массива
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    
    //нахождние локального максимума
    for(int i = 1; i < n-1; ++i){
        if(arr[i] > arr[i+1] and arr[i] > arr[i-1]){
            std::cout << i;
            return 0;
        }
    } 
    std::cout << -1;
    return 0;
}