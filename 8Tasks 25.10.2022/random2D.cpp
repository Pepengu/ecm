#include <iostream>
#include <time.h>

int** random2D(const int &n, const int &m){
    int** matrix = new int*[n];
    for(int i = 0; i < n; i++){
        matrix[i] = new int[m];
        for(int j = 0; j < m; j++){
            matrix[i][j] = rand();
        }
    }
    return matrix;
}

int main(){
    srand( (unsigned int)time(NULL) );
    std::cout << "Enter matrix size x, y:";
    int n, m; std::cin >> n >> m;
    int** matrix = random2D(n,m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}