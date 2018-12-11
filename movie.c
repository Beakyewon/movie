#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

typedef struct movInfo{ //구조체 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
	
}movInfo_t;



void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	//구조체 포인터  
	//struct movInfo movInfo_t[10];
	
	
	movInfo_t* mvPtr;
	

	//allocate memory and set the member variables 메모리 할당. 변수 설정.  
	mvPtr = (movInfo_t*) malloc(sizeof(movInfo_t));

	strcpy(mvPtr->name ,name);
	mvPtr->score = score;
	mvPtr->runTime = runTime;
	strcpy(mvPtr->madeIn,country);
	
	return (void*) mvPtr;
}


	

void mv_print(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %d, score : %f\n", mvPtr->runTime, mvPtr->score);
	
	return;
}

/*
//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	int count =0;
	char insrt[100];
	
	printf("평점을 입력하세요: ");
	gets(instr);
	fp=fopen("movie.dat", "r");
	
	while(1){
		
		if(strcmp(instr," ")==0){
			
			break;
			
		}while(mvPtr != NULL){
			if(strstr(mvPtr->score, instr) != NULL)
			{
				printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
				printf("running time : %i, score : %f\n", mvPtr->runTime, mvPtr->score);
			}
		}
	
	 
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
*/

