#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int arr[n],dep[n];
 
 for(int i=0;i<n;i++)
 cin>>arr[i];
 
 for(int i=0;i<n;i++)
 cin>>dep[i];
 // Sorting arrival and departure arrays
 sort(arr,arr+n);
 sort(dep,dep+n);
 // pn indicates number of platforms needed
 int pn=1,res=1,i=1,j=0;
 //logic
 while (i<n&&j<n){
  //count of platforms needed
  if(arr[i]<=dep[j]){
   pn++;
   i++;
  }
  else if(arr[i]>dep[j]){
   pn--;
   j++;
  }
  // Updating result
  if(pn>res)
   res=pn;
 }
 cout<<res;
 return 0;
}
