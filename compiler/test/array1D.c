//#include<stdio.h>


int main(){
  int b[4];
  b[2] = 6;
  b[1] = 2;
  int a[2][3];
  a[0][1] = 2;
  a[1][2] = 3;
  int c;
  c =  b[2];
  int d = b[1];
  c = c+d;
  printf("%d\n", c);
  c = a[0][1] + a[1][2];
  printf("%d\n", c);
  return 0;
}
  
