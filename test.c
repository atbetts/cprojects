#include <stdio.h>
#include <stdlib.h>
#define SIZEARR(x) (sizeof(x)/sizeof(x[0]))
int* selectionSort(int* arr, int size);


int main (){

int test[10] = {1,2,3,4,5,3,3,1,0,2};

selectionSort(test,10);

return 0;

}

int printDisplay(int * arr,int size){

/* 
Prints a graphical display of an array
of ints as lines of asteriks on each new line 
*/

for(int j =0; j<size; j++){
for(int i =0; i<arr[j]; i++)
printf("*");
printf("\n");
}


return 1;
}

int swap (int a, int b, int * arr){

/*Swaps elements a and b in array arr*/

int temp = arr[a];
arr[a]=arr[b];
arr[b]=temp;

return 1;
}

int* selectionSort (int * arr, int size){
/*
Sorts a list of ints in descending order
by swapping the first element in each
increasingly smaller list with the max of
said list
*/


 int max,i,j;
 for(i =0;i<size;i++){
 max = i;
 for(j=i+1;j<size;j++){
	 if(arr[j]>arr[max]){
	 max = j;
	 }
 }
 swap(i,max,arr);

 printDisplay(arr,size);

 printf("Press any key to continue.\n");

 getchar();

 }

return arr;
}

int triangleDot(int row){
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
int lengthOfInt(unsigned i){
int x;
x=i>=1000000000?10:i>=100000000?9:i>=10000000?8:i>=1000000?7:i>=100000?6:i>=10000?5:i>=1000?4:i>=100?3:i>=10?2:1;
return x;
}
