#include<bits/stdc++.h>
using namespace std;
int main(){
	string d,c;
	cin>>s0>>s1;
	int n=s0.length();
	int g=s1.length();
    bool val;
    int arr[26]={0};
    if(n==g){
          for(int i=0;i<n;i++){
              arr[s0[i]-97]++;
          }
          for(int j=0;j<g;j++){
              arr[s1[j]-97]--;
          }
          for(int i=0;i<26;i++){
              if(arr[i]==0){
                  val=true;
              }
              else{
                  val=false;
                  break;
              }
          }
        }
    else{
        return false;
    }
	return val;
}

//use function to do...
