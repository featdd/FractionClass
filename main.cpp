/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 Daniel Dorndorf <dorndorf@featdd.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <iostream>
#include "Fraction.hpp"

void clear_screen(void) {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void consolePause(void) {
	std::cin.clear();
	std::cin.ignore(256, '\n'); 
	std::cin.get();
}

void convertDoubleToFraction(void) {
	Fraction fraction;
	double number;

	std::cout << "Enter a floating point number: ";
	std::cin >> number;
	fraction.convertDoubleToFraction(number);
	std::cout << fraction;
}

void convertFractionToDouble(void) {
	Fraction fraction;

	std::cout << "Enter a fraction (x/y): ";
	try {
		std::cin >> fraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	std::cout << fraction.convertFractionToDouble();
}

void addFractions(void) {
	Fraction firstFraction;
	Fraction secondFraction;
	Fraction resultFraction;

	std::cout << " Enter the first fraction (x/y): ";

	try {
		std::cin >> firstFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}
	
	std::cout << "Enter the second fraction (x/y): ";
	
	try {
		std::cin >> secondFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}	

	resultFraction = firstFraction + secondFraction;

	std::cout << "\nCalculation: " << firstFraction << " + " << secondFraction << " = " << resultFraction;

	if (true == resultFraction.reduce()) {
		std::cout << " = " << resultFraction;
	}
}

void subtractFractions(void) {
	Fraction firstFraction;
	Fraction secondFraction;
	Fraction resultFraction;

	std::cout << " Enter the first fraction (x/y): ";

	try {
		std::cin >> firstFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	std::cout << "Enter the second fraction (x/y): ";
	
	try {
		std::cin >> secondFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	resultFraction = firstFraction - secondFraction;

	std::cout << "\nCalculation: " << firstFraction << " - " << secondFraction << " = " << resultFraction;

	if (true == resultFraction.reduce()) {
		std::cout << " = " << resultFraction;
	}
}

void multiplyFractions(void) {
	Fraction firstFraction;
	Fraction secondFraction;
	Fraction resultFraction;

	std::cout << " Enter the first fraction (x/y): ";

	try {
		std::cin >> firstFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	std::cout << "Enter the second fraction (x/y): ";

	try {
		std::cin >> secondFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	resultFraction = firstFraction * secondFraction;

	std::cout << "\nCalculation: " << firstFraction << " * " << secondFraction << " = " << resultFraction;

	if (true == resultFraction.reduce()) {
		std::cout << " = " << resultFraction;
	}
}

void divideFractions(void) {
	Fraction firstFraction;
	Fraction secondFraction;
	Fraction resultFraction;

	std::cout << " Enter the first fraction (x/y): ";

	try {
		std::cin >> firstFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	std::cout << "Enter the second fraction (x/y): ";

	try {
		std::cin >> secondFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	resultFraction = firstFraction / secondFraction;

	std::cout << "\nCalculation: " << firstFraction << " / " << secondFraction << " = " << resultFraction;

	if (true == resultFraction.reduce()) {
		std::cout << " = " << resultFraction;
	}
}

void compareFractions(void) {
	Fraction firstFraction;
	Fraction secondFraction;

	std::cout << " Enter the first fraction (x/y): ";

	try {
		std::cin >> firstFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	std::cout << "Enter the second fraction (x/y): ";

	try {
		std::cin >> secondFraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	if (firstFraction < secondFraction) {
		std::cout << "\nComparison: " << firstFraction << "  < " << secondFraction;
	}

	if (firstFraction > secondFraction) {
		std::cout << "\nComparison: " << firstFraction << "  > " << secondFraction;
	}

	if (firstFraction <= secondFraction) {
		std::cout << "\nComparison: " << firstFraction << " <= " << secondFraction;
	}

	if (firstFraction >= secondFraction) {
		std::cout << "\nComparison: " << firstFraction << " >= " << secondFraction;
	}

	if (firstFraction == secondFraction) {
		std::cout << "\nComparison: " << firstFraction << " == " << secondFraction;
	}

	if (firstFraction != secondFraction) {
		std::cout << "\nComparison: " << firstFraction << " != " << secondFraction;
	}
}

void complementOfFraction(void) {
	Fraction fraction;

	std::cout << " Enter the fraction (x/y): ";

	try {
		std::cin >> fraction;
	} catch (std::exception& e) {
		clear_screen();
		std::cout << e.what();
		return;
	}

	fraction = ~fraction;

	std::cout << "\nComplement: " << fraction;
}

int main(void) {

	int choice;
	bool exit = false;

	while(!exit) {
		clear_screen();
		std::cout << "1: Convert double to fraction\n"
				  << "2: Convert fraction to double (x/y)\n" 
				  << "3: Add two fractions\n"
				  << "4: Subtract two fractions\n"
				  << "5: Multiply two fractions\n"
				  << "6: Divide two fractions\n"
				  << "7: Compare two fractions\n"
				  << "8: Complement of a fraction\n"
				  << "9: Exit\n\n"
				  << "> ";
		std::cin >> choice;
		clear_screen();

		switch(choice) {
			case 1: {
				convertDoubleToFraction();
				consolePause();
				break;
			}			
			case 2: {
				convertFractionToDouble();
				consolePause();
				break;
			}
			case 3: {
				addFractions();
				consolePause();
				break;
			}
			case 4: {
				subtractFractions();
				consolePause();
				break;
			}
			case 5: {
				multiplyFractions();
				consolePause();
				break;
			}
			case 6: {
				divideFractions();
				consolePause();
				break;
			}
			case 7: {
				compareFractions();
				consolePause();
				break;
			}
			case 8: {
				complementOfFraction();
				consolePause();
				break;
			}
			case 9: {
				exit = true;
				break;
			}				
			default: {
				std::cout << "Incorrect Input\n";
				consolePause();
			}
		}
	}

	return 0;
}
