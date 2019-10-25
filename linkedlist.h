struct node
{ int i; struct node *next;};
struct node * newlist();
void print_list(struct node * list);
struct node * insert_front(struct node * old, int a );
struct node * free_list(struct node * list);
struct node * remove_node(struct node *front, int data);
