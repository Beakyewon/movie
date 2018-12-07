
//list or node creating
void* list_genList(void); //generating a Linked List : This must be called once for using a Linked List 리스트를 만드는 것 얘만 부르시면 되요 
int list_addTail(void* obj, void* list); //add a node at the end of the list    obj 는 영화정보 데이터를 가진 구조체 포인터 함수역할- 메모리를 잡아서 꼬리에 포인트 붙이는 것 
int list_addNext(void* obj, void* nd); //add a node at the next of the input node

//check the property of the list/node
int list_isEndNode(void* nd); //tell if the node is the end node (0 : it is NOT the end node, 1 : it is the end node) 노드가 끛인지 아닌지 확인해주는 함수. 
int list_len(void* list); //returns the number of nodes in the list 노드가 몇개냐.  

//get the node pointer
void* list_getNextNd(void* nd); //get the next node of the input node 다음노드로 넘어갈때 잘 호출해서 다음노드 포인터 얻기.  
void* list_getIndexNd(int index, void* list); //get the node with the specific index
void* list_getNdObj(void* nd); //returns the object of the node  구조체 안에 있는데이터 뽑아내는데 이용.  

//processing the list
void* list_srchNd(int (*matchFunc)(void* obj, void* cond), void* cond, void* list); //search the node which makes matchFunc ==1
int list_repeatFunc(void (*func)(void* obj), void* list); //repeat processing func for each node objects 

