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

int list_set(list_t *, int, void *); 

int list_index(list_t *, void *); 

int list_iter(list_t *, void **); 

void list_extend(list_t *, list_t *); 

int list_swap(list_t *, int, int); 

void list_reverse(list_t *); 
#endif 
