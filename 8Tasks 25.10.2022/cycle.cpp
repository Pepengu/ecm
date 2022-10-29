#include <iostream>

void cinArray(int* a, int n){
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }
}

void coutArray(int* a, int n){
    for(int i = 0; i < n; i++){
        std::cout << a[i] << " ";
    }
}

int main(){
    std::cout << "Enter array length: ";
    int n; std::cin >> n;

    std::cout << "Enter array: ";
    int* a = new int[n]; cinArray(a, n);

    std::cout << "Enter value: ";
    int s; std::cin >> s;
    s %= n;

    int* b = new int[n];
    for(int i = 0; i < n; i++){
        if(s < 0){
            b[i] = a[(i-s)%n];
        }
        else{
            b[i] = a[(n-s+i)%n];
        }
    }
    coutArray(b, n);

    return 0;
}