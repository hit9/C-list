####API

```c

void list_init(list_t *list); 


int list_len(list_t *list); 

void list_append(list_t *list, void *data); 

int list_pop_tail(list_t *list); 

int list_pop(list_t *, int position); 

int list_iter(list_t *list, void **data_ptr); 
```

####TODO

```
append

insert

replace

swap

get

iter

reverse

```
