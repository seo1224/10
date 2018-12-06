#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	genlist();
	
	addtail(10);
	addtail(10);
	addtail(100);
	addtail(10);
	addtail(10);
	
	print_node(3);
	
	return 0;
}
