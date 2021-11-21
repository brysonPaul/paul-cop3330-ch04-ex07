#include <iostream>
#include <string>
#include "std_lib_facilities.h"

int decipher(string s){
	if(s == "nine" || s == "Nine"){
		return 9;
	}
	if(s == "eight" || s == "Eight"){
		return 8;
	}
	if(s == "seven" || s == "Seven"){
		return 7;
	}
	if(s == "six" || s == "Six"){
		return 6;
	}
	if(s == "five" || s == "Five"){
		return 5;
	}
	if(s == "four" || s == "Four"){
		return 4;
	}
	if(s == "three" || s == "Three"){
		return 3;
	}
	if(s == "two" || s == "Two"){
		return 2;
	}
	if(s == "one" || s == "One"){
		return 1;
	}
	if(s == "zero" || s == "Zero"){
		return 0;
	}
	return -1;
}

double arithmetic(char op, double op1, double op2){

	if(op == '-'){//subtraction
		 return op1 - op2;
	}
	else if(op == '*'){//multiplication
		 return op1 * op2;
	}
	else if(op == '+'){//addition
		 return op1 + op2;
	}
	else if(op == '/'){//division
		 return op1 / op2;
	}
	else
	{
		return -1;//because program states it cant be another thing here, this is here just so program does not yell at me 
	}
}

string findOperationWord(char op){
	
	if(op == '-'){//subtraction
		 return "difference";
	}
	else if(op == '*'){//multiplication
		 return "product";
	}
	else if(op == '+'){//addition
		 return "sum";
	}
	else if(op == '/'){//division
		 return "quotient";
	}
	return "this is wrong"; //should never reach here;
}

int main() {

		cout << "Please enter two numbers (or words of numbers 0-9) with an operation in the middle of the two operands\n";

		string op1 = " ";
		cin >> op1;

		char operation;
		cin >> operation;

		string op2 = " ";
		cin >> op2;

		double numberOpOne = decipher(op1);
		if(numberOpOne == -1){
			numberOpOne = atof(op1.c_str());
		}

		double numberOpTwo = decipher(op2);
		if(numberOpTwo == -1){
			numberOpTwo = atof(op2.c_str());
		}
		double result = arithmetic(operation, numberOpOne, numberOpTwo);
		string opWord = findOperationWord(operation);

		cout << "The " << opWord << " of " << numberOpOne << " and " << numberOpTwo << " is " << result;
} 