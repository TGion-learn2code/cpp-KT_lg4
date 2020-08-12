//============================================================================
// Name        : cpp-KT_lg4.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LG4 - Objektorientierte Programmierung mit C++
//============================================================================


#include <iostream>
#include <string>

using namespace std;

//============================================================================
// Aufgabe 1
//============================================================================
/*
 * Das Programm gibt "Hello World" auf stdout (Konsole) aus.
 */

//============================================================================
// Aufgabe 2
//============================================================================

/// @brief	prints a string to stdout
///
/// @param	s string text to be printed
///
///
void print(string s) {
	cout << s << endl;
}

/// @brief	prints an integer to stdout
///
/// @param	i int number to be printed
///
///
void printInt(int i) {
	cout << i << endl;
}

//============================================================================
// Aufgabe 3
//============================================================================

/// @brief	returns the sum of two numbers
///
/// @param	a int the first number of the sum
/// @param	b int the second number of the sum
/// @return	int sum of two numbers
///
///
int addieren (int a, int b) {
	return a + b;
}

//============================================================================
// Aufgabe 4
//============================================================================

/// @brief	returns the sum of a number and 5 (call-by-value)
///
/// @param	zahl int number to be added to 5
/// @return	int sum of a number and 5
///
///
int plusFuenfA(int zahl) {
	return zahl += 5;
}

/// @brief	returns the sum of a number and 5 (call-by-reference)
///
/// @param	zahl int number to be added to 5
/// @return	int sum of a number and 5
///
///
int plusFuenfB(int &zahl) {
	return zahl += 5;
}

int main() {

	const string 	strAusgabe = "Hallo \nWelt";
	const int 	intAusgabe = 5;
	int 		i = 2;

	//============================================================================
	// Aufgabe 2
	//============================================================================
	print(strAusgabe);
	printInt(intAusgabe);

	//============================================================================
	// Aufgabe 4
	//============================================================================
	printInt(plusFuenfA(i));
	printInt(plusFuenfB(i));
	printInt(plusFuenfA(i));

	return 0;
}


