#include "defines.h"

int main(){
    
    int row_col_steps = INPUT_SIZE - KERNEL_SIZE + 1;
    int conv_array[row_col_steps][row_col_steps];
    int conv_row = 0, conv_col = 0, conv_value = 0;
    int kernel_row = 0, kernel_col = 0;

    for(int i = 0; i < row_col_steps; i++){
        conv_row = i;
        for(int j = 0; j < row_col_steps; j++){
            conv_col = j;
            conv_value = 0;
            kernel_row = 0;
            kernel_col = 0;
            for(int k = 0; k < KERNEL_SIZE*KERNEL_SIZE; k++){
              conv_value += data[conv_row][conv_col] * kernel[kernel_row][kernel_col];
              if(k % KERNEL_SIZE != 0){
                 conv_row += 1;
                 conv_col = j;
                 kernel_row += 1;
                 kernel_col = 0;
              }
              else{
                  conv_col += 1;
                  conv_row = i;
                  kernel_col += 1;
              }
            }
            conv_array[i][j] = conv_value;
        }
    }

    for(int l = 0; l < row_col_steps; l++){
        for(int m = 0; m < row_col_steps; m++){
            printf("%d\t", conv_array[l][m]);
        }
        printf("\n");
    }

    return 0;
}