#include <iostream>
#include <iomanip>
using namespace std;

#define IMAGE_SIZE 8
#define IMAGE_NUMEL 64  // IMAGE_SIZE * IMAGE_SIZE
#define NUM_CLASSES 10

void vertical_flip(const float image[][IMAGE_SIZE], float flipped_image[][IMAGE_SIZE]);
void horizontal_flip(const float image[][IMAGE_SIZE], float flipped_image[][IMAGE_SIZE]);
void rotate(const float image[][IMAGE_SIZE], float flipped_image[][IMAGE_SIZE]);

void flatten_image(const float image[][IMAGE_SIZE], float flattened_image[IMAGE_NUMEL]);
void matrix_multiply(const float flattened_image[], int flattened_image_length, const float fc_weight[][IMAGE_NUMEL], int fc_weight_length, float fc_output[]);
int argmax(const float fc_output[], int fc_output_length);