#include<iostream>
#include<string>
using namespace std;
int main ()
{
	int x, y, a1,a2,a3,a4;
	string name;
	
	cout<<"=============================\n";
	cout<<"         CALCULATOR          \n";
	cout<<"=============================\n";
	cout<<"Please enter your name: \n";
	getline(cin, name);
	
	cout<<"Please enter your first number: ( addend, minuend, factor, dividend)"<<endl;
	cin>>x;
	cout<<"Please enter your second number: ( addend, subtrahend, factor, divisor)"<<endl;
	cin>>y;
	a1 = x+y;
	a2 = x-y;
	a3 = x * y;
	a4 = x / y;
	
	cout<<"Sum: "<<a1<<endl;
	cout<<"Difference: "<<a2<<endl;
	cout<<"Product: "<<a3<<endl;
	cout<<"Quotient: "<<a4<<endl;
	cout<<"Congrats "<<name<<"!!!"<<endl;
}
