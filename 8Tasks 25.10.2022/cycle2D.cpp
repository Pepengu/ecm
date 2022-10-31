#include <iostream>
#include <time.h>

void cout2DArrayAlligned(int** matrix, int n, int m){
    int maxEl = matrix[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(maxEl < matrix[i][j]){
                maxEl = matrix[i][j];
            }
        }
    }

    int maxElLength = 1;
    while(maxEl/=10)
        maxElLength++;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cout << matrix[i][j];
            int curElLength = 1, cur = matrix[i][j];
            while(cur/=10)
                curElLength++;
            for(int i = 0; i <= maxElLength-curElLength; i++)
                std::cout << " ";
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
    int n = 3, m = 5;
    int** matrix = random2D(n,m);
    cout2DArrayAlligned(matrix, n, m);

    std::cout << "Enter value: ";
    int s; std::cin >> s;
    s %= m;

    int** b = new int*[n];
    for(int i = 0; i < n; i++){
        b[i] = new int[m];
        for(int j = 0; j < m; j++){
            if(s < 0){
                b[i][j] = matrix[i][(j-s)%m];
            }
            else{
                b[i][j] = matrix[i][(m-s+j)%m];
            }
        }
    }
    cout2DArrayAlligned(b, n, m);
    
    return 0;
}