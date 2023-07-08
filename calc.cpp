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

int main(void)
{		
	while(true)
	{
		int x, y;
		char op, input;

<<<<<<< HEAD
		cout << " Enter op(+,-,*,/) ";
		while (true){
=======
		cout << "Enter op(+,-,*,/) ";
>>>>>>> e2d6d4785f62a0b62c14d47ce812a0c841f83ca1
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
<<<<<<< HEAD
		} //else {
		//	cout << "Please use correct op" << endl;
		//}
=======
		} else {
			cout << "Please use correct op" << endl;
		}
>>>>>>> e2d6d4785f62a0b62c14d47ce812a0c841f83ca1
		
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
