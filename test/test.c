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
	list_append(list_a, "hello3"); 
	list_append(list_a, "hello4"); 
	list_extend(list, list_a); 
	list_set(list, 1, "hhh"); 
	list_set(list, 3, "sshhh"); 
	list_set(list, 6, "hhhs"); 
	while(list_iter(list,(void **) &s)){
		printf("%s\n", s);
	}
	free(list); 
	return 0;
}
