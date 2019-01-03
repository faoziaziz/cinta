#include "kamu.h"
#include "linked.h"

int var;
void process_var(int x){
  x = 5;
}

void process_var_point(int* xp){
  *xp=5;
}

void fun(){
  int x = 5;
  process_var(x);
  printf("%d\n", x);
}

void process_var(int*xp)

int main()
{
  var = 10;
  ya_kamu();
  printf("ngaco \n" );
  fun();
  funp();
  return 0;
}
