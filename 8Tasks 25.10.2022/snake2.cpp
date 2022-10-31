#include <iostream>

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

int main(){
    std::cout << "Enter number of rows: ";
    int r, c;
    std::cin >> r;
    std::cout << "Enter number of columns: ";
    std::cin >> c;

    int** matrix = new int*[r];

    for(int i = 0; i < r; i++){
        matrix[i] = new int[c];
        for(int j = 0; j < c; j++){
            matrix[i][j] = i*c+(i%2 ? -j+c : j+1);
        }
    }

    cout2DArrayAlligned(matrix, r, c);
    return 0;
}