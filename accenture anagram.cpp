#include<bits/stdc++.h>
using namespace std;
int main(){
	string d,c;
	int val;
	cin>>d>>c;
	set<char>s;
	int f=d.length();
	int g=c.length();
	if(f==g){
	for(int i=0;i<f;i++){
		if(s.find(d[i])==s.end()){
			s.insert(d[i]); //build
		}
	}
	for(int j=0;j<g;j++){
		if(s.find(c[j])==s.end()){
			 val=1;
		}
	}
	if(val==1){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
	}
}
else{
	cout<<"no"<<endl;
}
}
