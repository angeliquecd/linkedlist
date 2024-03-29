#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"
struct node * newlist(){
  struct node *new = malloc(sizeof(struct node));
  new->next=NULL;
  return new;
}
 void print_list(struct node * list){
   printf("{");
 while (list->next!=NULL){
   if (list->next->next!=NULL) printf("%i, ",list->i);
   else printf("%i",list->i);
 list=list->next;
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
     struct node * tofree=list;
     free(tofree);
     printf("Freed %i\n",list->i);
     list=list->next;
}
/* list=NULL;
   printf("new pointer: %p\n",list);
   printf("new pointer: %i\n",list->i);
    printf("new pointer: %p\n",list->next);*/
   return list;
 }
 /*Should take a pointer to a list as a parameter and then go through the
 entire list freeing each node and return a pointer to the beginning of the
 list (which should be NULL by then).  */
 struct node * remove_node(struct node *front, int data){
   struct node *beginning=front;
   if (front->i==data){
     beginning=front->next;
     free(front);
     return beginning;
   }
   while(front->next->next!=NULL && front->next->i!=data){
     front=front->next;
   }
   if (front->next->i==data) {
     if (front->next->next==NULL) {
       struct node * tofreeend= front->next;
       front->next=NULL;
       free(tofreeend);
     }
     else {
       struct node * tofree= front->next;
       front->next=front->next->next;
       free(tofree);
}
}
   return beginning;
 }
/*Remove the node containing data from the list pointed to by front.
If data is not in the list, nothing is changed.
Returns a pointer to the beginning of the list.*/
