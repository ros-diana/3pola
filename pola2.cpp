#include <iostream>
using namespace std;


int ganjil_positif(int n){
	if(n%2==1 && n>0)
		return 1;
	else
		return 0;
}


int main(){
	int n;
	int i,j;  
	int p,q,x,y=1; 
	
	cin>>n;
	if(ganjil_positif(n)==0){
		cout<<"input harus bilangan ganjil dan positif"
		<<endl;
		main();
	}
	else{
		p=n/2;
		for(int i=1;i<=n;i++){
			x=1;
			if(i>p+1){
				y--;
			}
			if(i<=p+1){
				y=i;
			}
			
			if(y==1||y==n){
				for(int j=1;j<=n;j++){
					cout<<"1";
				}
			}
			else{
				for(j=1;j<=n;j++){
					if(j<y){
						cout<<x;
						x+=2;
					}
					else if(j>=y && j<=n-y)
						cout<<x;
					else if(j>=n-y){
						cout<<x;
						if(x!=1)
							x-=2;
					}
				}
				
			}
			cout<<endl;
		}	
	}
	
	return 0;
}
