#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"
struct node * newlist(int a){
  struct node *new = malloc(sizeof(struct node));
  new->i=a;
  new->next=NULL;
  return new;
}
 void print_list(struct node * list){
   printf("{");
 while (list->next!=NULL){
 printf("%i",list->i);
 }
 printf("}\n");
 }
 struct node * insert_front(struct node * old, int a ){
   struct node *new = malloc(sizeof(struct node));
   new->i=a;
   new->next=old;
   return new;
 }
 struct node * free_list(struct node * list){
   struct node * old=list;
   while (list->next!=NULL){
     free(list);
     list++;
   }
   return old;
 }
 struct node * remove_node(struct node *front, int data){
   struct node *beginning=front;
   while(front->next->i!=data && front->next!=NULL){
     front++;
   }
   if (front->next->i==data) front->next=front->next->next;
   return beginning;
 }
/*Remove the node containing data from the list pointed to by front.
If data is not in the list, nothing is changed.
Returns a pointer to the beginning of the list.*/
