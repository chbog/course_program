#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include <cctype>

using namespace std;
#define NumberOfWordsInFile 4
#define Letters 26 //alphabet letters
#define MaxLettersInWord 15
#define NumberOfWhiteSpaces 200


class PoleChudes
{
	string userWord, guessWordByUser;
	char enteredLetters[Letters];
	int wordLenght, numberOfGuessedLetters, numberOfEnteredLetters, minAttemptions;
	COORD CursorPosition;
public:
	void gotoXY(int x, int y);
	void menu();

	void howToPlay();

	void play(bool computerOrPlayer);
		void randomWord();
		void enteringWord();

		void someCalculating();
			int minSteps();

		void letsPlay();
			void showEnteredLetters();
			void fillWord(char letter);
				char enterLetter();
					char getLetterFromUser();	

		void final();
		void clear();
};
