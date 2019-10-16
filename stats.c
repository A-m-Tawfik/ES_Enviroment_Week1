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
 * @file  stats.c 
 * @brief <statistics source code to work with array to find min max values , mean and median and implement print array function and also sort array function >
 *
 * 
 * @author Ahmed Tawfik
 * @date   16/11/2019 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main(void) 
{

  	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              	114, 88,   45,  76, 123,  87,  25,  23,
                              	200, 122, 150, 90,   92,  87, 177, 244,
                              	201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
    

	print_array(test, SIZE);

	print_statistics(test, SIZE);
	
	print_array(test, SIZE);

}

/* Add other Implementation File Code Here */


void print_array(unsigned char* arr, unsigned int size)
{
	unsigned char LoopIndex;
	for(LoopIndex=0; LoopIndex<size; LoopIndex++)
	{
		printf("arr[%d]=%d\n",LoopIndex,arr[LoopIndex]);
	}
} 

unsigned char find_median(unsigned char* arr, unsigned int size)
{
	unsigned char MedianValue;

	sort_array(arr, size);

	if(size%2 != 0)  									/* Check if the array size is odd */ 
	{
		MedianValue=arr[(size/2)+1];
	}
	else      											/* if the array size is even */
	{
		MedianValue=(arr[size/2]+arr[(size/2)+1])/2;
	}

	return MedianValue;	
}
unsigned char find_mean(unsigned char* arr, unsigned int size)
{
	unsigned int Sum=0;
	unsigned char LoopIndex3;
	unsigned char MeanValue;

	for(LoopIndex3=0;LoopIndex3<size;LoopIndex3++)
	{
		Sum+=arr[LoopIndex3];
	}
	MeanValue=(Sum/size);

	return MeanValue;
}

unsigned char find_maximum(unsigned char* arr, unsigned int size)
{
	unsigned char MaxValue;

	sort_array(arr, size);

	MaxValue= arr[0];

	return MaxValue;
} 

unsigned char find_minimum(unsigned char* arr, unsigned int size)
{
	unsigned char MinValue;

	sort_array(arr, size);

	MinValue= arr[size-1];

	return MinValue;
} 

void sort_array(unsigned char* arr, unsigned int size)
{
	unsigned char LoopIndex1;
	unsigned char LoopIndex2;
	unsigned char temp;
	unsigned char flag=0;
	for(LoopIndex1=0;LoopIndex1<size;LoopIndex1++)
	{
		for(LoopIndex2=0;LoopIndex2<(size-1-LoopIndex1);LoopIndex2++)
		{
			if(arr[LoopIndex2]<arr[LoopIndex2+1])
			{
				flag=1;
				temp=arr[LoopIndex2];
				arr[LoopIndex2]=arr[LoopIndex2+1];
				arr[LoopIndex2+1]=temp;
			}
			else
			{
				/*Do Nothing*/
			}
		}
		if(flag==0)
		{
			break;
		}
		else
		{
			flag=0;
		}
	}
}

void print_statistics(unsigned char* arr, unsigned int size)
{
	unsigned char Median;
	unsigned char Mean;
	unsigned char Min;
	unsigned char Max;

	Median = find_median(arr, size);
	Mean   = find_mean(arr, size);
	Min    = find_minimum(arr, size);
	Max    = find_maximum(arr, size);

	printf("Median=%d\n",Median);
	printf("Mean=%d\n",Mean);
	printf("Min=%d\n",Min);
	printf("Max=%d\n",Max);


}
