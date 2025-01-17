#include <stdio.h>

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

void printValues(int* array){
  printf("[");
  for (int i = 0; i < 9; i++){
    printf("%d ", *(array+i));
  }
  printf("]\n");
}

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void sort (int* array){

  for (int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      if (*(array + j) > *(array + 1 + j)){
	swap(array + j, array + 1 + j);
	printValues(array);
      }
    }
  }
//test
}
