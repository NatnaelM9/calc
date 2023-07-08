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
	while(true)
	{
		int x, y;
		char op, input;

		cout << " Enter op(+,-,*,/) ";
		while (true){
		cin >> op;
		if (op != '+'&& op != '-' && op != '*' && op != '/'){
			cout << " please use the correct op! (+,-,*,/) ";
			continue;
		}else {
			break;
		}
	}
		cout << "Enter the First number: ";
		cin >> x;
		cout << "Enter the sec number: ";
		cin >> y;

		if (op == '+') {
			cout << x << " + " << y << " = " << add(x, y) << endl;
		} else if (op == '-'){
			cout << x << " - " << y << " = " << sub(x, y) << endl;
		} else if (op == '*'){
			cout << x << " * " << y << " = " << mul(x, y) << endl;
		} else if (op == '/'){
			cout << x << " / " << y << " = " << divv(x, y) << endl;
		} //else {
		//	cout << "Please use correct op" << endl;
		//}
		
		while (true)
		{
			cout << "Do you want to continue (y/n) ?" << endl;
			cin >> input;
			
			if (input == 'y'){
				break;
			} else if (input == 'n'){
				exit(0);
			} else {
				cout << "please Enter valid input! " << endl;
				continue;
			}
		}
 	}

	return (0);
}
