#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <mcheck.h>

int main(int argc, const char *argv[])
{
	mtrace(); 
	list_t *list = (list_t *)malloc(sizeof(list_t)); 
	char *s = NULL; 
	list_init(list); 
	list_append(list, "hello1"); 
	list_append(list, "hello2"); 
	list_append(list, "hello3"); 
	list_append(list, "hello4"); 
	list_get(list, 0, (void **)&s); 
	printf("%s\n", s);
	list_get(list, 3, (void **)&s); 
	printf("%s\n", s);
	list_get(list, 6, (void **)&s); 
	printf("%s\n", s);
	free(list); 
	return 0;
}
