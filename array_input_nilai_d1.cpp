#include <iostream>
using namespace std;

int main(){
	int bts;
	
	cout<<"Masukkan Batas	:";
	cin>>bts;
	int arr[bts];
	for(int x=0;x<=bts;x++){
		cout<<"Masukkan Nilai ke-"<<x<<" : ";
		cin>>arr[x];
	}
	
	for(int y=0;y<=bts;y++){
		if(arr[y]%2==0){
			cout<<"\nNilai Ke ["<<y<<"] adalah genap :"<<arr[y];
		}else{
			cout<<"\nNilai Ke ["<<y<<"] adalah ganjil:"<<arr[y];
		}
		
	}
}
