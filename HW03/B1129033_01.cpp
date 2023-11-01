#include <iostream>
#include <string>

using namespace std;

class Complex {
	private:
		int real;  //定義一整數表複數中的實部 
		int imag;  //定義一整數表示複數中的虛部 
	
	public:
		
		Complex(int x = 0 , int y = 0) {      // 建構子 
			real = x;
			imag = y;
		}
		
		Complex operator+(Complex& Add) {     //加法運算子 
			Complex Addans(real + Add.real, imag + Add.imag);
			return Addans;
		}
		
		Complex operator*(Complex& Mul) {     //乘法運算子 
			Complex Mulans((real * Mul.real) - (imag * Mul.imag), (real * Mul.imag) + (imag * Mul.real));
			return Mulans;
		} 
		
		friend istream& operator>>(istream& ip, Complex& A) {      //輸入運算子 
			ip >> A.real >> A.imag;
			return ip;
		}
		friend ostream& operator<<(ostream& op, Complex& A) {      //輸出運算子 
			op << A.real << "+" << A.imag << "i";
			return op;
		}                                                          //friend 允許重載函數使用 private 裡的變數 
};

int main() {
	
	Complex A1(3, 2);
	Complex A2(0, 0);
	
	Complex B1;
	Complex B2;
	cout << "Enter a complex number : " << endl;
	cin >> B1;
	cout << "Enter another complex number : " << endl;
	cin >> B2;
	cout << endl;

	Complex sum = A1 + A2 + B1 + B2;
	Complex product = A1 * A2 * B1 * B2;
	cout << "The result of addition: " << sum << endl;
	cout << "The result of multiplication: " << product << endl;
	
	return 0; 
	
	
}
