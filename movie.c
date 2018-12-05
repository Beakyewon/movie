#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

typedef struct movInfo{ //구조체 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
} movInfo_t;


void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	movInfo_t *mvPtr; //구조체 포인터  
	
	//allocate memory and set the member variables 메모리 할당 변수 설정.  
	
	mvPtr = (struct movInfo*) malloc(100*sizeof(struct movInfo));
	
	return (void*)mvPtr;
}

void mv_print(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %i, score : %f\n", mvPtr->runTime, mvPtr->score);
	
	return;
}


//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	
}

//return the runtime value from the input instance of movInfo_t structure
int mv_getRunTime(void* obj)
{
	
}

//return the name string pointer from the input instance of movInfo_t structure
char* mv_getName(void* obj)
{
	
}

//return the country string pointer from the input instance of movInfo_t structure
char* mv_getCountry(void* obj)
{
	
}


