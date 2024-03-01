#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "Enter: ";

	cin >> num;

	if (num % 2 == 0) {

		cout << num << " between." << endl;

	}
	else {

		cout << num << " don`t beetwen." << endl;

	}

	return 0;

}

#include <iostream>

using namespace std;

int main() {

	int num1, num2;

	cout << "1 number: ";

	cin >> num1;

	cout << "2 number: ";

	cin >> num2;

	if (num1 < num2) {

		cout << "There is a smaller number: " << num1 << endl;

	}
	else {

		cout << "There is a smaller number: " << num2 << endl;

	}

	return 0;

	﻿
}

#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "enter: ";

	cin >> num;

	if (num > 0) {

		cout << num << " positive." << endl;

	}

	else if (num < 0) {

		cout << num << " negativer." << endl;

	}

	else {

		cout << num << " =0." << endl;

	}

	return 0

		﻿
}

#include <iostream>

int main() {

	int a, b;

	std::cout << "enter 2 number: ";

	std::cin >> a >> b;

	if (a == b) {

		std::cout << "The numbers are equal." << std::endl;

	}
	else {

		std::cout << "The numbers are in ascending order: ";

		if (a < b) {

			std::cout << a << " " << b << std::endl;

		}
		else {

			std::cout << b << " " << a << std::endl;

		}

	}

	return 0;

	﻿
}


#include <iostream>

using namespace std;

void main()

{

   int number = 0;

   cout << "Введите число ->";

   cin >> number;

   if (number % 2 == 0)

   {

       number *= 3;

   }

   else

   {

       number /= 2;

   }

   cout << number << endl;

}







#include <iostream>

int main() {
	int number;

	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number % 2 == 0) {
	
		number *= 3;
	}
	else {
		
		number /= 2;
	}

	std::cout << "Result: " << number << std::endl;

	return 0;
}





#include <iostream>

using namespace std;

int main() {

	float num1, num2, result;

	char op;

	cout << "first : ";

	cin >> num1;

	cout << "second: ";

	cin >> num2;

	cout << "choose (+, -, *, /): ";

	cin >> op;

	switch (op) {

	case '+':

		result = num1 + num2;

		break;

	case '-':

		result = num1 - num2;

		break;

	case '*':

		result = num1 * num2;

		break;

	case '/':

		if (num2 != 0)

			result = num1 / num2;

		else {

			cout << "Error!" << endl;

			return 1;

		}

		break;

	default:

		cout << "Error!" << endl;

		return 1;

	}

	cout << "bingo: " << result << endl;

	return 0;

}