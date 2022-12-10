#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row,col,M[10][10];
  //input size of matrix
  cout<<"R = ";
  cin>>row;
  cout<<"C = ";
  cin>>col;
  //entering elements into matrix
  cout<<"M["<<row<<"]["<<col<<"] = ";
  for (int i=0;i<row;i++)
    for (int j=0;j<col;j++)
     cin>>M[i][j];
  int n=(row*col);
  int median[n],pos=0;
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
      median[pos]=M[i][j];
      pos++;
    }
  //sorting elements of matrix in array
  sort(median,median+n);
  cout<<median[n/2]<<endl;
  return 0;
}


