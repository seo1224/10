#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{
	int data;
	void *next;
	// struct linknd next;
}linknd_t;

static linknd_t *list; // linked list ��ü

linknd_t* create_node(int value){
	linknd_t *ndPtr;
	
	// ���� �޸� �Ҵ�
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	//������ ����
    ndPtr->data = value; 
	ndPtr->next = NULL;
	
	return ndPtr; 	
}

void addtail(int value){
	linknd_t *ndPtr, *newPtr;
	
	if(list == NULL)
	{
		return;
	}
	else 
	{
		ndPtr = list;
		while (ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
	
}

void genlist(void){ // ��� ��尡 ������� 
	
	list = create_node(0);
	
	return; 
}

void print_list(void){
	linknd_t *ndPtr;
	
	ndPtr = (linknd_t*)list->next;
	while(ndPtr != NULL){
		printf("%i ", ndPtr->data);
		ndPtr = ndPtr->next;
	}
	
}

void print_node(int n){
	linknd_t *ndPtr;
	int i=0;
	
	ndPtr = (linknd_t*)list->next;
	while(ndPtr != NULL){
		i++;
		if (i == n)
		{
			printf("%i-th value : %i\n", i, ndPtr->data);
			break;
		}
		ndPtr = ndPtr->next;
	}
}
