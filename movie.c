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
	movInfo_t* mvPtr;

	//allocate memory and set the member variables 메모리 할당. 변수 설정.  
	mvPtr = (movInfo_t*) malloc(sizeof(movInfo_t));

	strcpy(mvPtr->name, name); //문자열 복사이므로 strcpy 를 사용했다. 
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
	printf("running time : %d, score : %.2f\n", mvPtr->runTime, mvPtr->score);
	printf("--------------------------------------------\n");
	
	return;
}


//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	float score;
	
	score = mvPtr->score; //구조체 포인터 속 score 데이터를 score 에 저장한다.
	
	return score;
	 
}

//return the runtime value from the input instance of movInfo_t structure
int mv_getRunTime(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	
	int time;
	
	time= mvPtr->runTime; //구조체 포인터 속 runtime 데이터를 time에 저장한다. 
	
	if(time ==NULL) // time에 값이 없으면 ERROR라고 출력한다. 
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
	
	char str[100]; //문자열 저장할 변수 선언. 
	
	strcpy(str, mvPtr-> madeIn ); // 구조체 포인터 속 madeIn 문자열 데이터를 str 에 복사한다. 
	
	if(str==NULL)
	{
		printf("ERROR");
	}
	
	return str;
}

