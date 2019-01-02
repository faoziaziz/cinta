/*
  lagi berusaha mengikuti mit, ini hasil minggu pertama
*/
#include<stdio.h>

struct node {
  int val;
};
struct node2{
  int val2;
};

typedef struct node kamu;
typedef struct node2 aku;

kamu kamui;
aku akui;
int main(){
  akui.val2=2;
  kamui.val=1;
  printf("val : %d\n", kamui.val);
  printf("val 2 :%d\n", akui.val2);
  return 0;
}
