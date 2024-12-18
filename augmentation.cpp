#include "includes_and_constants.h"


void vertical_flip(const float image[][IMAGE_SIZE],float flipped_image[][IMAGE_SIZE]){
    for (int i=0;i<IMAGE_SIZE;i++){
        for (int j = 0;j <IMAGE_SIZE;j++){
            flipped_image[i][j]=image[IMAGE_SIZE-1-i][j];
        };
    };
}

void horizontal_flip(const float image[][IMAGE_SIZE],float flipped_image[][IMAGE_SIZE]){
    for (int i = 0;i < IMAGE_SIZE;i++){
        for (int j = 0;j<IMAGE_SIZE;j++){
            flipped_image[i][j]=image[i][IMAGE_SIZE-1-j]; 
    }
}

}


void rotate(const float image[][IMAGE_SIZE],float flipped_image[][IMAGE_SIZE]){

    for (int i = 0;i<IMAGE_SIZE;i++){
        for(int j=0;j<IMAGE_SIZE;j++){
            flipped_image[j][IMAGE_SIZE - 1 - i]=image[i][j]; 
        }
    }


}





