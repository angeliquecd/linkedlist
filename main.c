#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "linkedlist.c"

int main(){
printf("Creating empty list:");
struct node *listy=newlist();
print_list(listy);
int i;
for (i=0;i<10;i++){
  listy=insert_front(listy,i);
}
printf("Filling list with numbers 0 to 9:");
print_list(listy);
}
