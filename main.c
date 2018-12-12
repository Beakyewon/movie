#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"
#include "linkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp; //FILE pointer for reading movie data 
	char name[200]; //movie name
	char country[10]; //movie country
	int runTime; //movie runtime
	float score; //movie score
	
	int exit_flag = 0; //flag variable for while loop
	int option; //user input option
	void *list, *mvInfo; //pointers for linked list and a specific structure instance for a movie data
	void *ndPtr; //void pointer for linked list node
	
	/*struct movInfo *headPtr=NULL, *endPtr=NULL;*/
	
	//1. reading the movie.dat-----------------------------
	//1.1 FILE open
	fp = fopen("movie.dat","r");
	
		if (fp == 0){
        printf("Error while opening");
        exit(1);
 }	
	
	//1.2 list generation (use function list_genList() )
	list = list_genList();
	
	//1.3 read each movie data from the file and add it to the linked list //영화 정보 한줄씩 읽어와서 링크드 리스트에 저장 
	
	//generate a movie info instance(mvInfo) with function mv_genMvInfo()
	
	while(fscanf(fp, "%s %s %i %f", name, country, &runTime, &score) != EOF)
	{
		
		mvInfo = mv_genMvInfo(name, score, runTime, country);
		
		list_addTail(mvInfo, list);
		
	}
		

	//1.4 FILE close
	fclose(fp);
	
	printf("\nReading the data files....\n");
	printf("Read Done! %i items are read!\n", list_len(list));
	
	//2. program start
	while(exit_flag == 0) 
	{
		//2.1 print menu message and get input option
		printf("\n\n\n--------------------Menu-------------------\n 1. print all the movies\n 2. search for specific country movies\n 3. search for specific runtime movies\n 4. search for specific score movies\n 5. exit\n -------------------Menu-------------------\n\n");                
	
		printf("--Select the option: ");
		
		scanf("%d", &option);
		
		switch(option)
		{
			case 1: //print all the movies
				printf("printing all the movies in the list.....\n\n\n");
				
				ndPtr = list; 
				
				while ( list_isEndNode(ndPtr) == 0 )/* repeat until the ndPtr points to the end node */
				{
					//2.2 print a movie data : use functions of movie.c and linkedList.c
					//ndPtr = the next node of the ndPtr;
					ndPtr = list_getNextNd(ndPtr); //get the next node of the input node
					
					
					//get object of ndPtr to mvInfo void pointer   ndPtr의 데이터를 mvInfo의 포인터로 가져옴.  
					mvInfo = list_getNdObj(ndPtr);
				
					
					//print the contents of the mvInfo
					mv_print(mvInfo);
					
					}
				printf("totally %d movies are listed!", list_len(list));
				
				break;
				
		/*
			
			case 2: //print movies of specific country
				
				printf("--Select a country :");
				
				scanf("%c\n", &country);
				
				//2.3.1 get country name to search for
				
				ndPtr = list;
					while (/* repeat until the ndPtr points to the end node )
				{
					//2.3.2 print a movie data : use functions of movie.c and linkedList.c
					//ndPtr = the next node of the ndPtr;
					//get object of ndPtr to mvInfo void pointer
					//if the input country matches to the country of the movie,
					//then print the contents of the mvInfo
				}
				
				break;
				
			case 3:
				//2.4.1 get minimal runtime value to search for
				
				printf("--lowest runtime : ");
				
				scanf("%d\n", &runtime);
				
				ndPtr = list;
					while (/* repeat until the ndPtr points to the end node )
				{
					//2.4.2 print a movie data : use functions of movie.c and linkedList.c
					//ndPtr = the next node of the ndPtr;
					//get object of ndPtr to mvInfo void pointer
					//if the input runtime is lower than the runtime of the movie,
					//then print the contents of the mvInfo
				}
				
				break;
				
			case 4:
				//2.5.1 get minimal score value to search for
				printf("--lowest score : ");
				
				scanf("%f\n", &score);
				
				ndPtr = list;
					while (/* repeat until the ndPtr points to the end node )
				{
					//2.5.2 print a movie data : use functions of movie.c and linkedList.c
					//ndPtr = the next node of the ndPtr;
					//get object of ndPtr to mvInfo void pointer
					//if the input score is lower than the score of the movie,
					//then print the contents of the mvInfo
				}
				break; */
				
			case 2 :
				printf("Bye!\n\n");
				exit_flag = 1;
				break;
				
			default:
				printf("wrong command! input again\n");
				break;
		}
	}
	
	return 0;
}
