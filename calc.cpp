#include <iostream>

using namespace std;

int add(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x - y;
}

int mul(int x, int y){
	return x * y;
}

int divv(int x, int y){
	return x / y;
}

int main()
{
	int x,y;
	char op;
	cout << " Enter op: ";
	cin>>op;
	cout << "Enter the First number: ";
	cin>>x;
	cout << "Enter the sec number: ";
	cin>>y;
	
	if (op == '+'){
		cout << x << " + " << y<< " = " <<add(x,y);
	}
	return (0);
}
