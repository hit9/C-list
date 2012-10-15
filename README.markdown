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

int list_iter(list_t *list, void **data_ptr); 

void list_extend(list_t *list_a, list_t *list_b); 

int list_swap(list_t *list, int pos_a, int pos_b); 

void list_reverse(list_t *list); 
```
