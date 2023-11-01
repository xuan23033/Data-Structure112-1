#include <iostream>
#include <string>

using namespace std;

void Frequency (string A) {
	
	char type[A.length()];  //定義一陣列存取字串種類 
	int fre[A.length()];    //定義一這列存取字元出現次數 
	int flag = 0;          //定義一整數紀錄比較原字串與 type[] 字元的異同 
	int n = 0;             //定義一整數表示存取到第幾個位置	 
	
	for(int i = 0; i < A.length(); i++) {   //陣列初始化 
		fre[i] = 1;
	}
	
	for(int i = 0; i<A.length(); i++) {
		flag = 0;
		for(int j = 0; j<A.length(); j++) {
			if(A[i] != type[j]) {
				flag++;                     //字元不同 flag++ 
			} else {
				fre[j] = fre[j] + 1;        //字元相同次數加 1 
			}
			if(flag == A.length()){         //表示此字元第一次出現 
				
				type[n] = A[i];
				n++;
			}
		}
	}
	
	cout << "The result : " << endl; 
	
	for(int i = 0; i<n; i++) {
		
			cout << " " << type[i] << " : " << fre[i] << "times" << endl; 
		
	}
}

int main() {
	
	string s;
	
	cout << "Please enter a string:";
	getline(cin, s);
	Frequency(s);
	
	return 0;
}
