#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
struct node
{ int i;
 struct node *next;
 };

 void print_list(struct node * list){
   printf("{");
 while (list->next!=NULL){
 printf("%i",list->i);
 }
 printf("}");
 }
 struct node * insert_front(struct node * old, int a ){
   struct node new;
   new.i=int a;
   new.next=old->next;
   old--=new;
   return &new;
 }
 struct node * free_list(struct node * list){
   struct node * old=list;
   while (list->next!=NULL){
     free(list);
     list++;
   }
   return old;
 }
