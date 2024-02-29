#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;
int main()
{
	cout << "---------------------------\nWelcome to the program!!!\n---------------------------" << endl << endl;
	while (true) {
		int selection;
		cout << "1.Output the word backwards.\n2.Write the word without vowels.\n3.Derive the word without consonants.\n4.Randomly scatter the letters of a given word.\n5.End programm" << endl << "action: ";
		string inputStr;
		cin >> selection;
		if (selection == 1) {
			cout << "\nenter the word you want to reverse: ";
			cin >> inputStr;
			std::reverse(inputStr.begin(), inputStr.end());
			cout << "an inverted word: ";
			cout << inputStr << endl;
		}
		else if (selection == 2) {
			cout << "\nEnter a line from which all vowel letters will be removed: ";
			cin >> inputStr;
			string output;
			for (char c : inputStr) {
				if (!(c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o' || c == 'a' ||
					c == 'E' || c == 'Y' || c == 'U' || c == 'I' || c == 'O' || c == 'A')) {
					output += c;
				}
			}
			if (output.empty()) {
				cout << "There are no vowel letters in the string." << endl << endl;
			}
			else {
				cout << "A string with no vowel letters: " << output << endl << endl;
			}
		}
		else if (selection == 3) {
			cout << "\nEnter a line from which all consonant letters will be removed: ";
			cin >> inputStr;
			string output;
			for (char c : inputStr) {
				if (!(c == 'q' || c == 'w' || c == 'r' || c == 't' || c == 'p' || c == 's' || c == 'd' || c == 'f' || c == 'g' || c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'z' || c == 'x' || c == 'c' || c == 'b' || c == 'n' || c == 'm' || c == 'v'
					|| c == 'Q' || c == 'W' || c == 'R' || c == 'T' || c == 'P' || c == 'S' || c == 'D' || c == 'F' || c == 'G' || c == 'H' || c == 'J' || c == 'K' || c == 'L' || c == 'Z' || c == 'X' || c == 'C' || c == 'B' || c == 'N' || c == 'M' || c == 'V')) {
					output += c;
				}
			}
			if (output.empty()) {
				cout << "There are no consonant letters in the string." << endl << endl;
			}
			else {
				cout << "A string with no consonant letters: " << output << endl << endl;
			}
		}
		else if (selection == 4) {
			cout << "\nenter the line in which the letters will be mixed: ";
			cin >> inputStr;
			random_device rd;
			mt19937 g(rd());
			shuffle(inputStr.begin(), inputStr.end(), g);
			cout << "a line of jumbled letters: " << inputStr << endl << endl;
		}
		else if (selection == 5) {
			cout << "The program is complete. Goodbye " << inputStr << endl << endl;
			break; 
		}

	}
}
