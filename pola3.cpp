#include <iostream>
using namespace std;

int positif(int n){
	if(n>=0)
		return 1;
	else
		return 0;
}

int main(){
	int n, angka=1, spasi=0;
	cin>>n;
	if(positif(n)==0){
		cout<<"input dimulai dari 1";
		main();
	}
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<i+1;j++){
				if(j==0){
					for(int x=0;x<i;x++)
						spasi++;}
				for(int l=0;l<spasi;l++){		
					cout<<" ";
				}
				
				for(int k=0;k<i+1;k++){		
					cout<<angka;
				}
				
			cout<<endl;
			}
		angka+=2;
		}
	}
	return 0;
}
