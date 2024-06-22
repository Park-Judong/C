// minesweeper

#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>

int main(){
    int col, row;

    scanf("%d %d", &col, &row);
    
    char **matrix = (char**)malloc(sizeof(char)*col);
    int **matrix2 = (int**)malloc(sizeof(int)*col);

    for(int i=0;i<col;i++){
        matrix[i] = (char*)malloc(sizeof(char)*(row+1));
    }

    for(int k=0;k<col;k++){
        matrix2[k] = (int*)malloc(sizeof(int)*(row));
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            matrix2[i][j] = 0;
        }
    }
    
    for(int j=0;j<col;j++){
        scanf("%s", matrix[j]);
    }


    for(int l=0;l<col;l++){
        for(int m=0;m<row;m++){
            if(matrix[l][m] == '*'){
                matrix2[l][m] = '*';
            }else {
                if(l != 0){
                    if(matrix[l-1][m] =='*')
                        matrix2[l][m] += 1; 
                }
                if(l != col-1){
                    if(matrix[l+1][m] =='*'){
                        matrix2[l][m] += 1; 
                    }
                }
                if(matrix[l][m+1]=='*' && m != row-1){
                    matrix2[l][m] += 1; 
                }
                if(m != 0){
                    if(matrix[l][m-1]=='*')
                        matrix2[l][m] += 1; 
                }
            }
        }
    }

    for(int n=0;n<col;n++){
        for(int s=0;s<row;s++){
            if(matrix2[n][s] == '*')
                printf("%c ", matrix2[n][s]);
            else{
                printf("%d ", matrix2[n][s]);
            }
        }
        printf("\n");
    }

    for(int k=0;k<col;k++){
        free(matrix2[col]);
        free(matrix[col]);
    }

    //free(matrix);
    //free(matrix2);

    return 0;
}
