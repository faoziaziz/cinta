#include <stdlib.h>
#include <stdio.h>
#include "linked.h"

nodel* make_node(int val){
  nodel* new_node=malloc(sizeof(nodel));
  new_node->val=val;
  new_node->next=NULL;
  return new_node;
}

nodel* insert_val(int val, nodel* cur_head){
  nodel* new_node = make_node(val);
  new_node->next=cur_head;
  return new_node;
}

nodel* delete_val(int val, nodel* cur_head, int* succeeded){
  *succeeded=0;
  if (cur_head==NULL){
    return NULL;
  }
  else if(cur_head->val==val){
    nodel* new_head = cur_head->next;
    free(cur_head);
    *succeeded=1;
    return new_head;
  }
}

int main(){
  
  return 0;
}
