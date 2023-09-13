#include<iostream>
using namespace std;


void solve(int arr[], int n, int k){

    int temp[n];
    int d=0;
     for(int i=k;i<n;i++){
        temp[d]=arr[i];
        d++;
     }

     for(int i=0;i<k;i++){  
         temp[d]=arr[i];
        d++;
     }
     for(int i=0;i<n;i++){
        arr[i]=temp[i];
     }

     for(int i=0;i<n;i++){
        cout<<temp[i];
     }
        


}


int main(){
  int n;
  int k;
  cin>>n;
  cin>>k;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  solve(arr,n,k);


  return 0;


}