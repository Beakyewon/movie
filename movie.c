#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

typedef struct movInfo{ //����ü 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
	
} movInfo_t;


void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	//����ü ������  
	
	struct movInfo_t[10];
	int i;
	movInfo_t[i] *mvPtr[i]; 
	
	
	
	//allocate memory and set the member variables �޸� �Ҵ�. ���� ����.  
	
	mvPtr = (movInfo_t*) malloc(sizeof(movInfo_t));
	
	mvPtr->name = name; 
	mvPtr->score = score;
	mvPtr->runTime = runTime;
	mvPtr->madeIn = country;
	
	for(i=0; i<10; i++){
	 
 	fscanf(fp, "%s %s %i %f", mvPtr[i]->name, mvPtr[i]->country, mvPtr[i]->runTime, mvPtr[i]->score);
 	
	 }
	
	free(mvPtr);
/*
	
	char *p=NULL, *cut"\t", str[500];
	
		p = strstr(str, cut); //srt�� ���ڿ����� cut ���ڿ��� ã�´�. ã���� str���� ã�� ���ڿ��� �����ּҰ� ��ȯ�ȴ�. 
		strcpy(mvPtr->name, p);
		
		while((p = strtok(NULL, cut)) != NULL); //strtok ���ڿ� �и� �Լ� 
		{
			i++;
			switch(i){
				case 1 :
					strcpy(mvPtr->madeIn,p); //strcpy(to, from) from�� ���ڿ��� to�� ����ȴ�. �迭�� ��踦 �˻����� �ʴ´�. 
					break;
				case 2 :
					mvPtr->runTime = atoi(p);
					break;
				case 3 :
					mvPtr->score = atoi(p);
					break;	
				default :
					break;
			}
			if(i<3) break;
		}
	

	return (void*)mvPtr;  //main �Լ����� ���ϼ� ���ڿ� �о mv_genMvInfo�̿��� ����ü�� ����.  
}	
	
	char *p= NULL, *cut="\t", str[500];
	int i=0, n=0;
	
	
	headPtr = malloc(sizeof(movInfo));
	memset(headPtr, 0, sizeof(movInfo));
	prePtr= mvPtr= endPtr= headPtr;
	
	while(1){
		i=0;
		fgets(str, 500, fp);
		if(feof(fp) !=0){
			if(n==0){
				free(headPtr);
				headPtr = endPtr =NULL;
			}
			else{
				prePtr->next =NULL;
				endPtr = prePtr;
				free( mvPtr);
				mv_print();
			}
			return n;
		}
		
		p = strstr(str, cut); srt�� ���ڿ����� cut ���ڿ��� ã�´�. ã���� str���� ã�� ���ڿ��� �����ּҰ� ��ȯ�ȴ�. 
		strcpy(mvPtr->name, p);
		
		while((p = strtok(NULL, cut)) != NULL);
		{
			i++;
			switch(i){
				case 1 :
					strcpy(mvPtr->madeIn,p);
					break;
				case 2 :
					mvPtr->runTime = atoi(p);
					break;
				case 3 :
					mvPtr->score = atoi(p);
					break;	
				default :
					break;
			}
			if(i<3) break;
		}
	}*/



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


