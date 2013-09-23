/*
	Name: Pham Van Tung
	MSSV: 10020420 
	Author: 
	Date: 21/09/13 20:31
	Description: FastFind.cpp
*/
#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Nhap kich truoc ma tran: ";
	cin>>n;
	
	int a[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	cout <<endl<<"Ma tran: "<<endl<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	int hang=0,cot=0,hangnhieu1nhat=0;
	if (n==1) hangnhieu1nhat=0;
	else{
		while (hang<=n && cot<=n){
			if (a[hang][cot]==1 && a[hang][cot+1]==1){
				cot++;
				hangnhieu1nhat=hang;
			}
			if(a[hang][cot+1]==0) hang ++;
		}
	}
	cout<<endl<<"Hang co nhieu mot nhat: "<<hangnhieu1nhat+1;
	return 0;
}

