#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

struct movInfo{ //����ü 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
	
};

void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	//����ü ������  
	struct movInfo movInfo_t[10];
	
	int i;
	
	struct movInfo *mvPtr;

	//allocate memory and set the member variables �޸� �Ҵ�. ���� ����.  
	mvPtr = (struct movInfo*) malloc(sizeof(struct movInfo));

	mvPtr->name = name; 
	mvPtr->score = score;
	mvPtr->runTime = runTime;
	mvPtr->madeIn = country;
	

	for(i=0; i<10; i++){
	 
 		fscanf(fp, "%s %s %i %f", (mvPtr+i)->name, (mvPtr+i)->madeIn, &(mvPtr+i)->runTime, &(mvPtr+i)->score);
 	
	 	printf("%s %s %i %f \n", (mvPtr+i)->name, (mvPtr+i)->madeIn, (mvPtr+i)->runTime, (mvPtr+i)->score); 
	 }
	 
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


//return the score value from the input instance of movInfo_t structure
float mv_getScore(void* obj)
{
	int count =0;
	char insrt[100];
	
	printf("������ �Է��ϼ���: ");
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


