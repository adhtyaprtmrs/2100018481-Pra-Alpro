#include<iostream>
using namespace std;

int main(){
	int matriksA[2][3]={{1,2,3},{4,5,6}};
	
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
		cout<<"Nilai array pada baris ke-"<<i<<" kolom ke-"<<j<<": ";
		cout<<matriksA[i][j]<<endl;
		}
	}
	cout<<"\nMatriks A"<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<matriksA[i][j]<<" ";
		}
		cout<<endl;
	}
}
