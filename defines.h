#include<stdio.h>
#include<conio.h>
#include<iostream>

#define INPUT_SIZE 4
#define KERNEL_SIZE 2

int data[INPUT_SIZE][INPUT_SIZE] = { {1, 1, 1, 1},
                                     {1, 1, 1, 1},
                                     {1, 1, 1, 1},
                                     {1, 1, 1, 1}
                                    };


int kernel[KERNEL_SIZE][KERNEL_SIZE] = { {1, 1},
                                         {1, 1}
                                       };