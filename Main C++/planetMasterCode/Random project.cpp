#include <iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

int level;
int userChoiceGameModes;

void mainMenu();

void chooseLevel(int level);

void gameModeMenuLine()
{
	for (int i = 1; i < 30; i++)
	{
		cout << "-";
	}
	cout << endl;
}
void gameModesMenu()
{
	bool isChosenSuccessfullyGameMode = false;
	bool isChosenSuccessfullyLevel = false;

	gameModeMenuLine();
	cout << "PLANET MASTER" << endl;
	gameModeMenuLine();
	cout << endl;
	cout << "1.Planet ordering" << endl;
	gameModeMenuLine();
	cout << " _______ " << setw(5) << " _______ " << setw(5) << " _______   |" << endl;
	cout << "| LEVEL |" << setw(5) << "| LEVEL |" << setw(5) << "| LEVEL |  |" << endl;
	cout << "|   1   |" << setw(5) << "|   2   |" << setw(5) << "|   3   |  |" << endl;
	cout << "|       |" << setw(5) << "|       |" << setw(5) << "|       |  |" << endl;
	cout << " ******* " << setw(5) << " ******* " << setw(5) << " *******   |" << endl;
	gameModeMenuLine();
	cout << endl;
	cout << "2.Habitat finder" << endl;
	gameModeMenuLine();
	cout << " _______ " << setw(5) << " _______ " << setw(5) << " _______   |" << endl;
	cout << "| LEVEL |" << setw(5) << "| LEVEL |" << setw(5) << "| LEVEL |  |" << endl;
	cout << "|   1   |" << setw(5) << "|   2   |" << setw(5) << "|   3   |  |" << endl;
	cout << "|       |" << setw(5) << "|       |" << setw(5) << "|       |  |" << endl;
	cout << " ******* " << setw(5) << " ******* " << setw(5) << " *******   |" << endl;
	gameModeMenuLine();
	cout << endl;
	cout << "3.Planet expert" << endl;
	gameModeMenuLine();
	cout << " _______ " << setw(5) << " _______ " << setw(5) << " _______   |" << endl;
	cout << "| LEVEL |" << setw(5) << "| LEVEL |" << setw(5) << "| LEVEL |  |" << endl;
	cout << "|   1   |" << setw(5) << "|   2   |" << setw(5) << "|   3   |  |" << endl;
	cout << "|       |" << setw(5) << "|       |" << setw(5) << "|       |  |" << endl;
	cout << " ******* " << setw(5) << " ******* " << setw(5) << " *******   |" << endl;
	gameModeMenuLine();
	cout << "4.Back" << endl;
	gameModeMenuLine();

	cout << "Choose the game mode you would like to play by typing the corresponding number!" << endl;
	cin >> userChoiceGameModes;
	cout << endl;

	while (isChosenSuccessfullyGameMode == false)
	{
		if (userChoiceGameModes == 1)
		{
			isChosenSuccessfullyGameMode = true;
			while (isChosenSuccessfullyLevel == false)
			{
				cout << endl;
				cout << "Enter the number of the desired level!" << endl;
				cin >> level;
				chooseLevel(level);
				if (level < 1 || level>10) {
					cout << "Enter a number between 1 and 10!" << endl;
				}
			}
		}
		else if (userChoiceGameModes == 2)
		{
			isChosenSuccessfullyGameMode = true;
			while (isChosenSuccessfullyLevel == false)
			{
				cout << endl;
				cout << "Enter the number of the desired level!" << endl;
				cin >> level;
				chooseLevel(level);
				if (level < 1 || level>10) {
					cout << "Enter a number between 1 and 10!" << endl;
				}
			}
		}
		else if (userChoiceGameModes == 3)
		{
			isChosenSuccessfullyGameMode = true;
			while (isChosenSuccessfullyLevel == false)
			{
				cout << endl;
				cout << "Enter the number of the desired level!" << endl;
				cin >> level;
				chooseLevel(level);
				if (level < 1 || level>10) {
					cout << "Enter a number between 1 and 10!" << endl;
				}
			}
		}
		else if (userChoiceGameModes == 4)
		{
			isChosenSuccessfullyGameMode = true;
			mainMenu();

		}
		else
		{
			cout << "Please enter a valid action!" << endl;
			cin >> userChoiceGameModes;
			cout << endl;
		}
	}
}

void winScreen();

void loseScreen();

void sunSizeS() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,14);
	cout << "       ";  
	for (int i = 0; i < 22; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "      "; 
	for (int i = 0; i < 24; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "     "; 
	for (int i = 0; i < 26; i++) {
		cout << "*";
	}

	cout << "     ";
	for (int i = 0; i < 7; i++) { 
		cout << endl;
		cout << "     ";
		for (int i = 0; i < 27; i++) {
			cout << "*";
		}
	}
	cout << endl;
	cout << "      ";
	for (int i = 0; i < 25; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "       ";
	for (int i = 0; i < 23; i++) {
		cout << "*";
	}
}


bool answerPlanetOrderingLevel1(int answer1, int answer2, int answer3, int answer4, int answer5, int answer6, int answer7, int answer8) {
	if (answer1 != 2 || answer2 != 5 || answer3 != 8 || answer4 != 1 || answer5 != 6 || answer6 != 7 || answer7 != 4 || answer8 != 3) {
		return false;
	}
	else {
		return true;
	}
}

bool answerHabitatFinderLevel1(int answer) {
	if (answer != 1) {
		return false;
	}
	else {
		return true;
	}
}

void planetOrderingLevel1(int level) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	if (level == 1) {


		cout << "Put the planets in the correct order to gain access to the next level!" << endl;
		cout << "Level 1: Our solar system!" << endl;
		cout << "List of Planets:" << endl;
		cout << "1.Mars " << endl << "2.Mercury" << endl << "3.Neptune" << endl << "4.Uranus" << endl << "5.Venerus" << endl;
		cout << "6.Jupiter" << endl << "7.Saturn" << endl << "8.Earth" << endl;
		cout << endl;

		sunSizeS();
		cout << endl << endl;
		int a, b, c, d, e, f, g, h;
		cin >> a >> b >> c >> d >> e >> f >> g >> h;
		cout << endl << endl << endl << endl << endl << endl << endl;
		

		if (answerPlanetOrderingLevel1(a, b, c, d, e, f, g, h) == 0) {
			cout << endl;
			cout << "Wrong answer! Try again!";
			loseScreen();
			return;
		}
		else {
			cout << endl;
			cout << "Congrats! You may go to the next level!" << endl << endl;
			winScreen();
		}
	}
	else {
		return;
	}
}
void planetOrderingLevel2(int level) {
	if (level == 2) {
		cout << "Put the planets in the correct order to gain access to the next level!" << endl;
		cout << "Level 2: Chronos!" << endl;
		cout << "List of Planets:" << endl;
		cout << "1.Elysium" << endl << "2.Celestia" << endl << "3.Nyx" << endl << "4.Verdantia" << endl << "5.Aetherius" << endl;
		cout << "6.Aether" << endl << "7.Chronos Secundus" << endl << "8.Aurora" << endl;
	}
	else {
		return;
	}

}
	
void habitatFinderLevel1(int level)
{
	if (level == 1) {
		int answer;

		cout << "By analysing the following information choose the planet which is most likely to be habitabal!" << endl;
		cout << "Level 1: Our solar system!" << endl;
		cout << "List of Planets:" << endl;
		cout << setw(30) << "1.MARS" << setw(100) << "2.VENUS" << setw(75) << "3.JUPITER" << endl;
		cout << "INFORMATION: Mars is the fourth planet from the Sun " << setw(85) << "INFORMATION: Venus is the second planet from the Sun. Venus has" << setw(95) << "INFORMATION: Jupiter is a gas giant. It is the fifth planet from the Sun" << endl; 
		cout << "in our solar system. It has a thin atmosphere composed " << setw(100) << " a thick atmosphere primarily composed of carbon dioxide with clouds of sulfuric acid." << setw(70) << " and has a predominantly hydrogen and helium atmosphere." << endl;
		cout << "mostly of carbon dioxide. Mars is cold and dry, with " << setw(100) << "Its surface is extremely hot, with temperatures reaching up to 475 degrees Celsius." << setw(50) << "It has immense gravity" << endl;
		cout << "temperatures averaging around -62 degrees Celsius. " << endl;
		cout << endl;
		cin >> answer;

	if (answerHabitatFinderLevel1(answer) == 0) {
		cout << endl;
		cout << "Wrong answer! Try again!";
		loseScreen();
		return;
	}
	else {
		cout << endl;
		cout << "Congrats! You may go to the next level!" << endl << endl;
		winScreen();
	}
}
	else {
		return;
	}
}

void chooseLevel(int level)
{
	if (userChoiceGameModes == 1)
	{
		planetOrderingLevel1(level);
		planetOrderingLevel2(level);
	}
	else if(userChoiceGameModes == 2)
	{
		habitatFinderLevel1(level);
	}
	else if (userChoiceGameModes == 3)
	{

	}
}

void drawPlanetMaster() {

	cout << endl << endl << endl << endl << endl;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 3);
	
		cout << "             ********************************************************************************************************************************************************************************************************" << endl;
		cout << "             **        ******    ****************** ***********    ******   ******        ******            *****    *****    ************ ***********         ****            ******        *******          *******" << endl;
		cout << "             **   **    *****    *****************   **********     *****   ******   ***************    *********     ***     ***********   **********    *************    **********   ************   *****   ******" << endl;
		cout << "             **   **    *****    ****************  *  *********   *  ****   ******   ***************    *********   *     *   **********  *  *********    *************    **********   ************   *****   ******" << endl;
		cout << "             **       *******    ***************       ********   **  ***   ******        **********    *********   **   **   *********       ********         ********    **********        *******        *********" << endl;
		cout << "             **   ***********    **************   ***   *******   ***  **   ******   ***************    *********   *******   ********   ***   ************    ********    **********   ************   *****  *******" << endl;
		cout << "             **   ***********         ********   *   *   ******   ****  *   ******   ***************    *********   *******   *******   *   *   ***********    ********    **********   ************   ******  ******" << endl;
		cout << "             **   ***********         *******   *     *   *****   *****     ******        **********    *********   *******   ******   *     *   *****         ********    **********         ******   ******  ******" << endl;
		cout << "             ********************************************************************************************************************************************************************************************************" << endl;
		cout << "             ********************************************************************************************************************************************************************************************************" << endl;
		cout << "             **********  ***********       *********      ********          *********************             *************            *************    **** ********       *********             **********    *****" << endl;
		cout << "              ********    *********         *******  ***   ******            *******************               ***********     ******   ***********      **   ******         *******     ******    ********      *** " << endl;
		cout << "               ******      *******           *****   ***    ****              *****************                 *********     *      *   *********             ****           *****      *    *     ******        *  " << endl;
		cout << "               *****        *****             * *            **     ******     ***************                   *******      *      *    *******               **             ***       *    *      ****            " << endl;
		cout << "                ***          * *               *                   *      *     *************        ******       *****        ******      *****                                *        ******       **             " << endl;
		cout << "                              *                                    *      *      ***********        *      *       ***                      * *                                                                      " << endl;
		cout << "                                                                   *      *       *********         *      *        *                        *                                                                       " << endl;
		cout << "                                                                    ******         * * * *           ******                                                                                                          " << endl;
		cout << endl << endl << endl << endl << endl;
	
}

void mainMenu()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	drawPlanetMaster();
	int userChoice;
	bool isChosenSuccessfullyMainMenu = false;
	bool isChosenSuccessfullyPlay = false;
	cout << "PLANET MASTER" << endl;
	cout << "_____________" << endl;
	cout << endl;
	cout << "_____________" << endl;
	cout << "|  1. Play  |" << endl;
	cout << "*************" << endl;
	cout << "_____________" << endl;
	cout << "|2. Settings|" << endl;
	cout << "*************" << endl;
	cout << "_____________" << endl;
	cout << "| 3. Credits|" << endl;
	cout << "*************" << endl;
	cout << "Choose what would you like to do by typing the corresponding number!" << endl;
	cin >> userChoice;
	cout << endl;

	while (isChosenSuccessfullyMainMenu == false)
	{
		if (userChoice == 1)
		{
			isChosenSuccessfullyMainMenu = true;
			while (isChosenSuccessfullyPlay == false)
			{
				gameModesMenu();
				cout << endl;
				cout << "Enter the number of the desired level!" << endl;
				cin >> level;
				chooseLevel(level);
				if (level < 1 || level>10) {
					cout << "Enter a number between 1 and 10!" << endl;
				}
			}
		}
		else if (userChoice == 2)
		{
			isChosenSuccessfullyMainMenu = true;
		}
		else if (userChoice == 3)
		{
			isChosenSuccessfullyMainMenu = true;
		}
		else
		{
			cout << "Please enter a valid action!" << endl;
			cin >> userChoice;
			cout << endl;
		}
	}
}



void winScreen() {
	int userChoice;
	bool isChosenSuccessfullyMainMenu = false;
	bool isChosenSuccessfullyPlay = false;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	cout << "        "; 
	for (int i = 0; i < 14; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "      ";  
	for (int i = 0; i < 15; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 14) {
			cout << "*";
		}
	}
	for (int i = 0; i < 1; i++) { 
		cout << endl;
		cout << "     ";
		for (int i = 0; i < 17; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 16) {
				cout << "*";
			}
		}
	}
	cout << endl;
	cout << "      *  Planet master *" << endl;
	cout << "      *  _____________ *" << endl;
	cout << "      *  1. Next Level *" << endl;
	cout << "      *     2. Back    *" << endl;
	cout << "      *     3. Quit    *" << endl;
	for (int i = 0; i < 1; i++) {  
		cout << "     ";
		for (int i = 0; i < 17; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 16) {
				cout << "*";
			}
		}
	}
	cout << endl;
	cout << "      ";  
	for (int i = 0; i < 15; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 14) {
			cout << "*";
		}
	}
	cout << endl;
	cout << "        **************" << endl << endl;

	cout << "Choose what would you like to do by typing the corresponding number!" << endl;
	cin >> userChoice;
	cout << endl;

	while (isChosenSuccessfullyMainMenu == false)
	{
		if (userChoice == 1)
		{
			level++;
			chooseLevel(level);
		}
		else if (userChoice == 2)
		{
			mainMenu();
		}
		else if (userChoice == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Please enter a valid action!" << endl;
			cin >> userChoice;
			cout<<endl;
		}
	}
}

void loseScreen() {
	int userChoice;
	bool isChosenSuccessfullyMainMenu = false;
	bool isChosenSuccessfullyPlay = false;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	cout << endl << endl << endl;
	cout << "       ***************" << endl;
	cout << "      ********      *   " << endl;
	cout << "       *        *    " << endl;
	cout << "           *    *******" << endl;
	cout << "      ***********      *" << endl;
	cout << "      *  Planet loser  *" << endl;
	cout << "      *  ____________  *" << endl;
	cout << "      *  1. Try again  *" << endl;
	cout << "      *     2. Back    *" << endl;
	cout << "      *     3. Quit    *" << endl;
	for (int i = 0; i < 1; i++) {  //red 4,5,6 i 7 na emojito 
		cout << "     ";
		for (int i = 0; i < 17; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 16) {
				cout << "*";
			}
		}
	}
	cout << endl;
	cout << "      ";//red 8 na emojito
	for (int i = 0; i < 15; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 14) {
			cout << "*";
		}
	}
	cout << endl;
	cout << "        ";//red 9 na emojito
	for (int i = 0; i < 14; i++) {
		cout << "*";
	}
	cout << endl << endl;

	cout << "Choose what would you like to do by typing the corresponding number!" << endl;
	cin >> userChoice;
	cout << endl;

	while (isChosenSuccessfullyMainMenu == false)
	{
		if (userChoice == 1)
		{
			chooseLevel(level);
		}
		else if (userChoice == 2)
		{
			mainMenu();
		}
		else if (userChoice == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Please enter a valid action!" << endl;
			cin >> userChoice;
		}
	}
}


int main()
{
	system("color 07");
	mainMenu();		
}