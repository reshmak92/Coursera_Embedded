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
 * @brief Implementation file for analyzing an array of unsigned char data items 
 * and report analytics on the maximum, minimum, mean, and median of the data set
 *
 * @author Reshma Kotamsetty
 * @date April 14, 2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 
  printf("\nThe given array is: \n\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE); 
  sort_array(test, SIZE);
  printf("\nThe array after sorting:\n\n");
  print_array(test, SIZE);

  return 0;
}

void print_array(unsigned char * a, unsigned int len){
    for (int i = 0; i < len; i++)
        printf("%d\t",a[i]);
    printf("\n\n");
}


void sort_array(unsigned char * a, unsigned int len){
   /* Implementing a simple selection sort: O(n2) time complexity */
   int max_index = 0, temp = 0;
   for(int i = 0; i < len; i++){
       max_index = i;
       for(int j = i+1; j < len; j++){
           if(a[max_index] < a[j])
               max_index = j;
       }
       temp = a[max_index];
       a[max_index] = a[i];
       a[i] = temp;
   }
}

unsigned char find_minimum(unsigned char * a, unsigned int len){
    unsigned char min = 255;
    for(int i = 0; i < len; i++){
        if(min > a[i])
            min = a[i];
    }
    return min;
}


unsigned char find_maximum(unsigned char * a, unsigned int len){
    unsigned char max = 0;
    for(int i = 0; i < len; i++){
        if(max < a[i])
            max = a[i];
    }
    return max;
}

unsigned char find_mean(unsigned char * a, unsigned int len){
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += a[i];
    }
    return sum/len;    
}


unsigned char find_median(unsigned char * a, unsigned int len){
    sort_array(a, len);
    if(len%2)
        return a[len/2];
    else
        return (a[len/2] + a[len/2 - 1])/2;
}

void print_statistics(unsigned char * a, unsigned int len){
    printf("Statistics of the given array:\n");
    printf("Mean: %d\n", find_mean(a, len));
    printf("Median: %d\n", find_median(a, len));
    printf("Minimum: %d\n", find_minimum(a, len));
    printf("Maximum: %d\n", find_maximum(a, len));
}

