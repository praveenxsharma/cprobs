#include <stdio.h>
int main()
{
  int nums[] = {2,4,6,8,10,12,14};
  
  // printing array
  for(int i=0;i<5;i++){
    printf("%d \n",nums[i]);
  }
  
  //printing in reverse
  for(int i=4;i>=0;i--){
    printf("%d \n",nums[i]);
  }
return 0;
  }
