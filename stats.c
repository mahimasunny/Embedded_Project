/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Report statistics
 *
 * analyze an array of unsigned char data items
 * report analytics on the maximum, minimum, ? mean, and median of the data set
 *
 * @author Mahima Sunny
 * @date 10-29-2020
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int n = 0;
  n = sizeof(test)/ sizeof(char);
  print_statistics(test, n);
  print_array(test,n);
}

void print_statistics(unsigned char *arr, int n) {
  sort(arr,n);
  printf("Median is %f\n",find_median(arr,n));
  printf("Mean is %d\n",find_mean(arr,n));
  printf("Max is %d\n",find_maximum(arr,n));
  printf("Min is %d\n",find_minimum(arr,n));
}

void print_array(unsigned char *arr, int n) {
  printf("printing array\n");
  int i = 0;
  for(i=0; i<n; i++) {
    printf("%d\t", (int)arr[i]);
  }
  printf("\n");
}


double find_median(unsigned char *arr, int n) {
    float val =0.0;
    if (n % 2 != 0) {
        val = arr[n / 2];
        return round(val); 
    }
        
    val = (double)(int)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
    return round(val); 
}

int find_mean(unsigned char *arr, int n){
  int sum=0, i=0;
  float average = 0.0;
  for(i=0; i<n; i++) {
    sum = sum+ (int)arr[i];
  }
  average = (float)sum/n;
  return round(average);
}

int find_maximum(unsigned char *arr, int n) {
  int max=INT_MIN, i=0;
  for(i=0; i<n; i++) {
    if((int)arr[i] > max)
      max = arr[i];
  }
  return max;
}

int find_minimum(unsigned char *arr, int n){
  int min=INT_MAX, i=0;
  for(i=0; i<n; i++) {
    if((int)arr[i] < min)
      min = arr[i];
  }
  return min;
}


void sort(unsigned char *arr, int n) {
  
  int i=0, j=0;
  char temp=0;
  
  for(i=0; i<n; i++) {
    for(j=0; j<n-1;j++){ 
      if((int)arr[j+1] > (int)arr[j]) {
        temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp; 
      }
    }
  }
}



/* Add other Implementation File Code Here */
