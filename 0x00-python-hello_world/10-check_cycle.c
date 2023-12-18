#include <stdio.h>
#include <stdlib.h>

struct node{

	int data;
	struct node *link;
};

int main(){

	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node)); //allocating memory for first node

	head->data = 45; // putting 45 in the data part of the link
	head->link = NULL;// link is still Null as this is the first node

	struct node *current = malloc(sizeof(struct node));// creating memory for the second(current node)
	current->data = 98;//putting 98 in the data part of the node
	current->link = NULL;// the link part has no values yet so it will be NULL
	head->link = current; // now we are pointing to the current node



	return 0;


}d
