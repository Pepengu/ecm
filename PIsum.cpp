#include <iostream>

int main(){
    int n; std::cin >> n; //количество слагаемых 
    long double PI = 1;
    for(int i = 1; i<n;++i){
        if(i%2){
            PI -= 1/((long double)2*i+1);
        }
        else{
            PI += 1/((long double)2*i+1);
        }
    }
    std::cout << PI*4;
    return 0;
}