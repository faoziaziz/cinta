/*
  this should be linked list to be reality

*/

#ifndef linked_H
#define linked_H
struct node{
  int val;
  struct node* next;
};

typedef struct node nodel;

nodel* make_node(int val);
nodel* insert_val(int val, nodel* cur_head);
nodel* delete_val(int val, nodel* cur_head, int* succeeded);
void delete_list(nodel* head);
void print_ssl(nodel* head);

#endif
