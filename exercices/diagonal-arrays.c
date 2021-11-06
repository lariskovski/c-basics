#include <stdio.h>

// Diagonal matrix is a squared matrix in which everything that is ((i != j) == 0) and ((i = j) != 0)

void main(){
    // Squared matrix size
    int size= 3;
    int arr[3][3]= {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int is_diagonal = 1;
    
    // Loop through array
    for (int i = 0; i < size && is_diagonal; i ++){
        for (int j = 0; j < size && is_diagonal; j++){
             // Check if diagonal elements are not null (!=0)
            if (i == j && arr[i][j] != 0){
                continue;
            }
            // Check if elements around the diagonal are null (==0)
            else if(i != j && arr[i][j] == 0){
                continue;
            }
            else{
                // DEBUG
                // printf("%d!=%d | arr value %d\n", i, j, arr[i][j]);
                is_diagonal = 0;
            }
        }
    }

    // Results
    if (is_diagonal){
        printf("This is a diagonal array!");
    }else{
        printf("This is not a diagonal array");
    }

}
