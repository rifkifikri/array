#include <iostream>
using namespace std;

int main(){
	int brs,clm;
	
	cout<<"Masukkan Jumlah Baris	:";
	cin>>brs;
	cout<<"Masukkan Jumlah Coloumn :";
	cin>>clm;
	
	int arr[brs][clm];
	
	
	for(int x=0;x<brs;x++){
		for(int y=0;y<clm;y++){
			cout<<"Masukkan Angka baris ke- "<<x+1<<" Baris ke- "<<y+1<<" : ";
			cin>>arr[x][y];
			
		}
	}
	cout<<"original\n";
	for(int x=0;x<brs;x++){
		for(int y=0;y<clm;y++){
			cout<<arr[x][y];
		}
		cout<<endl;
	}
	cout<<"row transform	:";
	for(int x=0;x<brs;x++){
		for(int y=0;y<clm;y++){
			cout<<arr[x][y];
		}
	}
	cout<<"\nColoumn transform	:";
	for(int x=0;x<brs;x++){
		for(int y=0;y<clm;y++){
			cout<<arr[x][y];
			 cout<<arr[x+1][y];
		}
		break;
	}
}
