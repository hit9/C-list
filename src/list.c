#ifndef LIST_H

#include "list.h"
#define LIST_H 1

#endif 

#include <stdlib.h>

void list_init(list_t *list)
{
	list->head = NULL; 
}

int list_len(list_t *list)
{
	int i = 0; 
	node_t *head = list->head; 
	
	for (; head; head = head->next, i++); 
	return i; 
}


static node_t *new_node(void *data)
{
	node_t *node = (node_t *)malloc(sizeof(node_t)); 
	node->data = data; 
	node->next = NULL; 
	return node; 
}

void list_append(list_t *list, void *data)
{
	node_t *head = list->head, *node = new_node(data); 
	
	if (head){
		for (; head->next; head = head->next); //goto the last node
		head->next = node; 
	}else list->head = node; 
}

int list_pop_tail(list_t *list)
{
	node_t *head = list->head; 
	
	if (!head) return 0; //only 0 eles, pop fail
	
	if (!(head->next)){ //only 1 node , pop it.
		free(head); 
		list->head = NULL; 
		return 1; 
	}
	
	for (; head->next->next; head = head->next); //goto the last second node
	free(head->next); 
	head->next = NULL; 
}

int list_pop(list_t *list, int pos)
{
	int i = 0; 
	node_t *head = list->head, *temp = head; 
	
	if (!head) return 0; //no nodes at all
	
	for (; temp && i != pos; temp = temp->next, i++);  //get the node on position pos
	
	if (!temp) return 0; //unavaliable pos input:go through the list but no position equal pos.temp == NULL means we cycle the list
	
	if (temp == head){ //if pop node is the head node
		list->head = head->next; 
		free(head); 
		return 1; 
	}
	
	for (; head->next != temp; head = head->next); //else goto the pop node's pre node
	
	head->next = temp->next; 
	free(temp); 
	return 1; 
}

int list_iter(list_t *list, void **data_ptr)
{
	static node_t *p = NULL; 
	static int flag = 0; 
	
	if (!flag){ //p init to head node when the first time
		p = list->head; 
		flag = 1; 
	}
	
	if (!p) return 0; 
	
	*data_ptr = p->data; 
	p = p->next; 
	return 1; 
}
