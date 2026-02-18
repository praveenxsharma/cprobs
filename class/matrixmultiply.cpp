#include <iostream>
using namespace std;

int main(){

   int r1,r2,c1,c2;

   //taking dimensions input
   cout << "Enter rows and columns of first matrix ";
   cin >> r1 >> c1;

   cout << "Enter rows and columns of second matrix";
   cin >> r2 >> c2;

   //check if multiplication is possible
   if(c1!=r2){
     cout << "invalid multiplication" << endl;
     return 0;
   }

   int A[50][50],B[50][50],C[50][50];

   //input first martix
   cout << "\n Enter elements of first matrix: \n";
   for (int i=0;i<r1;i++)
     for (int j=0;j<c1;j++)
       cin>>A[i][j];

   //input second matrix
   cout << "\n Enter elements of second matrix: \n";
   for (int i=0;i<r2;i++)
     for (int j=0;j<c2;j++)
       cin>>B[i][j];

   // initialize result matrix
    for (int i=0;i<r1;i++)
      for (int j=0;j<c2;j++)
        C[i][j]=0;

    //matrix multiplication
    for (int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
        for(int k=0;k<c1;k++){
          C[i][j] += A[i][k]*B[k][j];
        }
      }
    }

    //output
    cout << "\n Result matrix: \n";
    for(int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
        cout<<C[i][j]<<" ";
      }
      cout << endl;
    }
  return 0;
}
