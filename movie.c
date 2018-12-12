#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

typedef struct movInfo{ //����ü 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
	
}movInfo_t;



void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{	
	movInfo_t* mvPtr;

	//allocate memory and set the member variables �޸� �Ҵ�. ���� ����.  
	mvPtr = (movInfo_t*) malloc(sizeof(movInfo_t));

	strcpy(mvPtr->name, name); //���ڿ� �����̹Ƿ� strcpy �� ����ߴ�. 
	mvPtr->score = score;
	mvPtr->runTime = runTime;
	strcpy(mvPtr->madeIn, country);
	
	return (void*) mvPtr;
}


void mv_print(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	printf("--------------------------------------------\n");
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %d, score : %f\n", mvPtr->runTime, mvPtr->score);
	printf("--------------------------------------------\n");
	
	return;
}


//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	float score;
	
	score = mvPtr->score;
	
	return score;
	 
}

//return the runtime value from the input instance of movInfo_t structure
int mv_getRunTime(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	int time;
	
	time= mvPtr->runTime;
	
	if(time ==NULL)
	{
		printf("ERROR");
	}
	
	return time;
}

//return the name string pointer from the input instance of movInfo_t structure
char* mv_getName(void* obj)
{
	
}


//return the country string pointer from the input instance of movInfo_t structure
char* mv_getCountry(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	char str[100];
	
	strcpy( str, mvPtr-> madeIn );
	
	if(str==NULL)
	{
		printf("ERROR");
	}
	
	return str;
}

