//Write a program of to display a matrix using class
#include<iostream>
#include<conio.h>

using namespace std;

class matrix{
 int a;
 int b;
 int A[3][3];
 public:
  void readmatrix();
  void displaymatrix();
};

void matrix::readmatrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"] : ";
   cin>>A[i][j];
  }
 }
}

void matrix::displaymatrix()
{
 for(int i=1;i<=3;i++)
 {
  for(int j=1;j<=3;j++)
  {
   cout<<" "<<A[i][j];
  }
  cout<<endl;
 }
}

int main()
{
 matrix m;
 m.readmatrix();
 m.displaymatrix();
 getch();
 return(0);
}