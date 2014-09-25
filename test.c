#include <stdio.h>
#include <stdlib.h>
int main (){
 /*Triangle Dots*/
 int x;
 int y;
 scanf("%d%d",&y,&x);
 int c = x+1;
 for(;x>0;--x){
  int i;
  for(i=0;i<x-1;++i){
  printf("\t");
  }  
  for(i=0;i<c-x;++i){
  printf("*\t");
  }
 ++c; 
 printf("\n");
 }
  
 return EXIT_SUCCESS;
} 


int triangleDot(int row){
return (row*(row+1))/2;
}

int numreverse(int u){
 if (u<10) return u;
 


return 5;
}

int lengthOfInt(unsigned i){
int x;
x=i>=1000000000?10:i>=100000000?9:i>=10000000?8:i>=1000000?7:i>=100000?6:i>=10000?5:i>=1000?4:i>=100?3:i>=10?2:1;
return x;
}
