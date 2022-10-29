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
    int val; std::cin >> val;

    int* b = new int[n+1];
    int cur = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < val){
            b[cur] = a[i];
            cur++;
        }
    }

    b[cur] = val;
    cur++;

    for(int i = 0; i < n; i++){
        if(a[i] >= val){
            b[cur] = a[i];
            cur++;
        }
    }
    
    coutArray(b, n);

    return 0;
}