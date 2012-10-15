#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <mcheck.h>

int main(int argc, const char *argv[])
{
	mtrace(); 
	list_t *list = (list_t *)malloc(sizeof(list_t)); 
	list_t *list_a = (list_t *)malloc(sizeof(list_t)); 
	char *s = NULL; 
	list_init(list); 
	list_append(list, "hello1"); 
	list_append(list, "hello2"); 
	list_append(list, "hello3"); 
	list_append(list, "hello4"); 
	int d = list_swap(list, 1, 2); 
	printf("%d\n", d);
	while(list_iter(list,(void **) &s)){
		printf("%s\n", s);
	}
	free(list); 
	return 0;
}
