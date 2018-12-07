typedef struct movInfo{ //±¸Á¶Ã¼ 
	char name[200];
	float score;
	int runTime;
	char madeIn[10];
} movInfo_t;

void* mv_genMvInfo(char* name, float score, int runTime, char* country);
void mv_print(void* obj);
float mv_getScore(void* obj);
int mv_getRunTime(void* obj);
char* mv_getName(void* obj);
char* mv_getCountry(void* obj);
