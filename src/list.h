#ifndef LIST_H
#define LIST_H 1

typedef struct node {
	void *data;
	struct node *next;
} node_t; 

typedef struct list {
	node_t *head; 
} list_t; 


void list_init(list_t *); 

int list_len(list_t *); 

void list_append(list_t *, void *); 

int list_pop(list_t *, int); 

int list_pop_tail(list_t *); 

int list_get(list_t *, int, void **); 

int list_iter(list_t *, void **); 
#endif 
