#include "includes_and_constants.h"


void flatten_image(const float image[][IMAGE_SIZE], float flattened_image[IMAGE_NUMEL]){
    int index=0;
    for(int i=0; i< IMAGE_SIZE;i++) {
        for(int j= 0;j< IMAGE_SIZE;j++){
            flattened_image[index++]=image[i][j]; 
        }
    }
}
    
void matrix_multiply(const float flattened_image[],int flattened_image_length,const float fc_weight[][IMAGE_NUMEL],int fc_weight_length,float fc_output[]){
    for (int i=0;i<fc_weight_length;i++){
        fc_output[i]=0; 
        for (int j=0;j<flattened_image_length;j++){
            fc_output[i]+=flattened_image[j]*fc_weight[i][j]; 
        }
    }
}



int argmax(const float fc_output[], int fc_output_length) {
    int max_index = 0;
    for (int i = 1; i < fc_output_length; i++) {
        if (fc_output[i] > fc_output[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}