#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int n = 1000;//количество точек
    int cnt = 0;
    srand(time(0));
    for(int i = 0; i < n; ++i){
        long double x = (rand()%(4*n) - 2*n)/(2.0*n), y = (rand()%(4*n) - 2*n)/(2.0*n);
        cnt += x*x+y*y<1;
    }
    std::cout << (cnt*4.0)/n;
    return 0;
}