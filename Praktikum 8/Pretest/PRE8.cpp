#include <iostream>
using namespace std;

int main(){
	int a[3][3], b[3][3],c[18];
	int i, j, k=0, n=18;
	cout <<"masukkan data array 1 : "<<endl;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "masukkan data ke- "<<i+1<<", "<<j+1<<" = ";
			cin >> a[i][j];
		}
	}
	cout <<"masukkan data array 2 : "<<endl;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "masukkan data ke- "<<i+1<<", "<<j+1<<" = ";
			cin >> b[i][j];
		}
	}
	cout <<endl;
	cout <<"Array 1:"<<endl;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout <<a[i][j]<<" ";
		}
		cout << endl;
	}
	cout <<"Array 2:"<<endl;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout <<b[i][j]<<" ";
		}
		cout << endl;
	}			
	cout<< endl;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[k]=a[i][j];
			k++;
		}
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[k]=b[i][j];
			k++;
		}
	}
	cout << "array yang telah digabungkan "<<endl;
	for(i=0;i<n;i++){
		cout << c[i]<<" , ";
	}
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (c[j]<c[j-1]){
				
				int t;
    			t=c[j-1];
    			c[j-1]=c[j];
    			c[j]=t;
			}
		}
	}
	cout<<endl;
	cout <<"Array setelah di sorting"<<endl;
	for(i=0;i<n;i++){
		cout << c[i]<<" , ";
	}
}
