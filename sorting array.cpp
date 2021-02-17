#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[10], y=arr[10];
	
	for(int x=0;x<10;x++){
	cout<<"inputkan nilai :";
	cin>> arr[x];	
	}
	cout<<endl;
	for(int x=0;x<10;x++){
		y=arr[x];
	cout<<y<<", ";
	cout<<endl;
	sort(y.begin(), y.end());
	cout<<y<<", ";
	}
	
	
}
