#include<bits/stdc++.h>
using namespace std;

int ganjil_positif(int n){
	if(n%2==1 && n>0)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	cin>>n;
	if(ganjil_positif(n)==0) {
		cout<<"input harus bilangan ganjil dan positif"
		<<endl;
		main();
	}
	else {
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j==i)
				{
					cout<<"*";
				}
				
			else	if(j==(n-1)-i){
					cout<<"*";
				}	
			else if(j==(n-1)/2)
			{
					cout<<"*";
				}
				
			else if(i==n/2)
			{
				cout<<"*";
			}
			
			else 
			{
				cout<<" ";
			}
				
			}
			cout<<endl;
		}	
	}
	
	return 0;
}
