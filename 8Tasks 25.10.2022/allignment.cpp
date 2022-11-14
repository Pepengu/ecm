#include <iostream>
#include <time.h>

int digit_amount(int n){
    int res = 0;
    while(n>0){
        res++;
        n/=10;
    }
    return res;
}

void cout2DArrayAlligned(int** matrix, int n, int m){
    int* maximum_size = new int[m];
    for(int i = 0; i < m; i++){
        int m = matrix[0][i];
        for(int j = 1; j < n; j++){
            m = std::max(m, matrix[j][i]);
        }
        maximum_size[i]=digit_amount(m);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int current_size = digit_amount(matrix[i][j]);
            for(int k = 0; k < maximum_size[j]-current_size; k++){
                std::cout << " ";
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

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
    int** matrix = random2D(3,3);
    cout2DArrayAlligned(matrix, 3, 3);
    return 0;
}