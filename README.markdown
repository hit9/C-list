####API

```c

/**
 * return value: if the API function has return value.return 0 for fail.return 1 for success.
**/

void list_init(list_t *list); 

int list_len(list_t *list); 

void list_append(list_t *list, void *data); 

int list_get(list_t *list, int position, void **data_ptr); 

int list_set(list_t *list, int pos, void *data); 

int list_pop_tail(list_t *list); 

int list_pop(list_t *list, int position); 

int list_iter(list_t *list, void **data_ptr, int *pos_ptr); //iterator for list, get value and index in loop

void list_extend(list_t *list_a, list_t *list_b); 

int list_swap(list_t *list, int pos_a, int pos_b); 

void list_reverse(list_t *list); 

int list_index(list_t *list, void *data); //lookup data in list.if found success, return its first found position, else return -1; 

void list_cycle(list_t *list, void **data_ptr, int *pos_ptr); //cycle iter for list.infinite iterator

int list_from_array(list_t *list, void *ptr, int size, int len); //make a list from array.

```

### data type

```
list_t
```

### Structure

```c
typedef struct node {
	void *data;
	struct node *next;
} node_t; 

typedef struct list {
	node_t *head; 
} list_t; 
```

### wiki

中文wiki见:[http://hit9.org/wiki/C-list/](http://hit9.org/wiki/C-list/)
