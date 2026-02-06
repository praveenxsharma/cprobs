#include <stdio.h>
int main()
{
  //intialize array 
  int arr[] = {2,4,6,8,10,12} ;

  // get no. of values of array to print 
     int n;
     printf("enter no. of values to print");
     scanf("%d",&n);
     
    
  //printing elements
     for (int i=0; i<n; i++){
     printf("%d \n",arr[i]) ;

  }
  
  return 0;

}

