#include<iostream>

using namespace std;
void output(int arr[], int input, int lengh){
	int tampung;
	for(int x=1;x < lengh;x++){
		for(int y=0; y< lengh-x;y++){
			if(arr[y]>arr[y+1]){
				tampung=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=tampung;
			}
			
		}
		for(int c=0;c <lengh; c++){
		cout<<arr[c]<<" | ";
		}
		cout<<endl;
	
	}
	cout<<"Hasil Sorting nya adalah : ";
		for(int x=0;x< lengh;x++){
			cout<<arr[x]<<" ";
		}
}

int main(){
	int input;
	
	cout<<"Masukkan Panjang array :";
	cin >> input;
	int arr[input];
	int lengh=sizeof(arr)/sizeof(*arr);
	
	for(int a=0;a < input;a++){
		cout<<"Masukkan Nilai ke- "<<a<<" :";
		cin>>arr[a];
	}
	

	output(arr,input,lengh);
	
	
}

