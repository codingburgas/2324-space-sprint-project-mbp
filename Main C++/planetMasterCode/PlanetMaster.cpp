#include <iostream>
#include<iomanip>
#include<string>
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
	cout << "| LEVEL |" << setw(5) << "| LEVEL |" << setw(5) << "| CUSTOM|  |" << endl;
	cout << "|   1   |" << setw(5) << "|   2   |" << setw(5) << "| LEVEL |  |" << endl;
	cout << "|       |" << setw(5) << "|       |" << setw(5) << "|   3   |  |" << endl;
	cout << " ******* " << setw(5) << " ******* " << setw(5) << " *******   |" << endl;
	gameModeMenuLine();
	cout << endl;
	cout << "2.Habitat finder" << endl;
	gameModeMenuLine();
	cout << " _______ " << setw(5) << " _______ " << setw(5) << " _______   |" << endl;
	cout << "| LEVEL |" << setw(5) << "| LEVEL |" << setw(5) << "| CUSTOM|  |" << endl;
	cout << "|   1   |" << setw(5) << "|   2   |" << setw(5) << "| LEVEL |  |" << endl;
	cout << "|       |" << setw(5) << "|       |" << setw(5) << "|   3   |  |" << endl;
	cout << " ******* " << setw(5) << " ******* " << setw(5) << " *******   |" << endl;
	gameModeMenuLine();
	cout << endl;
	cout << "3.Planet expert" << endl;
	gameModeMenuLine();
	cout << " ____________________________" << endl;
	cout << "|            LEVEL           |" << endl;
	cout << "|              1             |" << endl;
	cout << "|                            |" << endl;
	cout << " ****************************" << endl;
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

void winScreenFinal();

void loseScreenFinal();

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

bool answerPlanetOrderingLevel2(int answer1, int answer2, int answer3, int answer4, int answer5, int answer6, int answer7) {
	if (answer1 != 4 || answer2 != 1 || answer3 != 7 || answer4 != 2 || answer5 != 6 || answer6 != 5 || answer7 != 3) {
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

bool answerHabitatFinderLevel2(int answer) {
	if (answer != 3) {
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
		int answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8;
		cin >> answer1 >> answer2 >> answer3 >> answer4 >> answer5 >> answer6 >> answer7 >> answer8;
		cout << endl << endl << endl << endl << endl << endl << endl;
		

		if (answerPlanetOrderingLevel1(answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8) == 0) {
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
		cout << "Level 2: TRAPPIST-1!- Interesting fact: All of the system's planets are Earth-sized which gives scientists hope that some of them may be habitable." << endl;
		cout << "List of Planets:" << endl;
		cout << "1.TRAPPIST-1c" << endl << "2.TRAPPIST-1e" << endl << "3.TRAPPIST-1h" << endl << "4.TRAPPIST-1b" << endl << "5.TRAPPIST-1g" << endl;
		cout << "6.TRAPPIST-1f" << endl << "7.TRAPPIST-1d" << endl;
		cout << "Interesting fact: All of the exoplanets' names in one solar system come from their sun and the letters of the alphabet in alphabetic order." << endl;
			
		int answer1, answer2, answer3, answer4, answer5, answer6, answer7;
		cin >> answer1 >> answer2 >> answer3 >> answer4 >> answer5 >> answer6 >> answer7;
		cout << endl << endl << endl << endl << endl << endl << endl;

		if (answerPlanetOrderingLevel2(answer1, answer2, answer3, answer4, answer5, answer6, answer7) == 0) {
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

void planetOrderingCustomLevel(int level)
{
	if (level == 3) {
		string levelGoal;
		string levelName;
		int numberOfPlanets;
		string planets[50];
		int correctAnswer[50];
		int answer[50];
		cout << "CUSTOM LEVEL" << endl;
		cout << "~~~~~~~~~~~~" << endl;
		cout << endl;
		getline(cin, levelName, '\n');
		cout << "What is the name of your level?" << endl;
		getline(cin, levelName, '\n');
		cout << "What does the player of your level needs to do?" << endl;
		getline(cin, levelGoal, '\n');
		cout << "How many planets would you like your level to have?" << endl;
		cin >> numberOfPlanets;
		cout << "Enter the names of the planets: " << endl;
		for (int i = 0; i < numberOfPlanets; i++)
		{
			cin >> planets[i];
		}
		cout << "Enter correct answer:" << endl;
		for (int i = 0; i < numberOfPlanets; i++)
		{
			cin >> correctAnswer[i];
		}
		cout << endl << endl << endl;

		cout << "Custom level: " << levelName << endl;
		cout << "Goal:" << levelGoal << endl;
		cout << "List of Planets:" << endl;
		for (int i = 0; i < numberOfPlanets; i++)
		{
			cout << i + 1 << "." << planets[i] << endl;
		}

		for (int i = 0; i < numberOfPlanets; i++)
		{
			cin >> answer[i];
		}
		
		for (int i = 0; i < numberOfPlanets; i++)
		{
			if (answer[i] == correctAnswer[i])
			{
			}
			else {
				cout << endl;
				cout << "Wrong answer! Try again!";
				loseScreenFinal();
				return;
			}
			cout << endl;
			cout << "Congrats! You may go to the next level!" << endl << endl;
			winScreenFinal();
		}
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

void habitatFinderLevel2(int level)
{
	if (level == 2) {
		int answer;

		cout << "By analysing the following information choose the planet which is most likely to be habitabal!" << endl;
		cout << "Level 1: Our solar system!" << endl;
		cout << "List of Planets:" << endl;
		cout << setw(30) << "1.Gliese 876 d" << setw(75) << "2.HD 189733b" << setw(100) << "3.Kepler-452b" << endl;
		cout << "INFORMATION: Gliese 876 d has a mass about 6 times that of Earth" << setw(90) << "INFORMATION: HD 189733b is a gas giant, similar in size to Jupiter, " << setw(75) << "INFORMATION: Kepler-452b orbits a star similar to the Sun." << endl;
		cout << "It's located within the habitable zone of its star" << setw(77) << " and orbits very close to its parent star." << setw(87) << " It is about 1.6 times the size of Earth and" << endl;
		cout << "It's in a tidally locked state (The same side is facing its star). " << setw(65) << " It's atmosphere likely has silicate particles." << setw(83) << " orbits within the habitable zone of its star" << endl;
		cout << endl;
		cin >> answer;

		if (answerHabitatFinderLevel2	(answer) == 0) {
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

void habitatFinderCustomLevel(int level)
{
	if (level == 3) {
		string levelGoal;
		string levelName;
		int numberOfPlanets;
		string planets[50];
		string planetsInformation[500];
		int correctAnswer;
		int answer;
		cout << "CUSTOM LEVEL" << endl;
		cout << "~~~~~~~~~~~~" << endl;
		cout << endl;
		getline(cin, levelName, '\n');
		cout << "What is the name of your level?" << endl;
		getline(cin, levelName, '\n');
		cout << "What does the player of your level needs to do?" << endl;
		getline(cin, levelGoal, '\n');
		cout << "How many planets would you like your level to have?" << endl;
		cin >> numberOfPlanets;
		cout << "Enter the names of the planets and information for each one:" << endl;
		for (int i = 0; i < numberOfPlanets; i++)
		{
			cout << "Planet:" << endl;
			cin >> planets[i];
			getline(cin, planetsInformation[i], '\n');
			cout << endl << "Information:";
			getline(cin, planetsInformation[i], '\n');
		}
		cout << "Enter correct answer:" << endl;
			cin >> correctAnswer;
		cout << endl << endl << endl;

		cout << "By analysing the following information choose the planet which is most likely to be habitabal!" << endl;
		cout << "List of Planets:" << endl;
		for (int i = 0; i < numberOfPlanets; i++)
		{
			cout << i + 1 << "." << planets[i] << "- " << planetsInformation[i] << endl;
		}

		cout << "Enter the most habitable planet:" << endl;
		cin >> answer;
		if (answer == correctAnswer)
		{
			cout << endl;
			cout << "Congrats! You may go to the next level!" << endl << endl;
			winScreenFinal();
		}
		else {
			cout << endl;
			cout << "Wrong answer! Try again!";
			loseScreenFinal();
			return;
		}
	}
	else {
		return;
	}
}

void planetExpertMain() {
	int usedPowerPoints;
	int powerPoints = 100;
	int BP = 0;
	int upgradeBuy;
	bool powerMaster= false;

	cout << "Welcome! You are a scientist at CERN and you have been hired to find Higgs Bozons with the particle accelerator:" << endl << endl;
	const int radius = 15;
	for (int y = -radius; y <= radius; ++y) {
		for (int x = -radius; x <= radius; ++x) {
			double distance = sqrt(x * x + y * y);
			if (abs(distance - radius) < 0.5 || abs(distance - radius / 2) < 0.5) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "You have been given 100 power points, you can use them to power the particle accelerator and find 1 Higgs Bozon (1 Bozon Point) for every 5 power points you use! You need 100 BP to win the game and become the planet expert!" << endl;
	cout << "You can buy upgrades with BP in the upgrade store!" << endl;
	cout << endl << endl;
	while (BP < 100)
	{
		cout << "Press '1' to use 5 power points and find 1 Higgs Bozon or use an upgrade if you have any (press'5' to go to the upgrades store):" << endl;
		cin >> usedPowerPoints;
			if (usedPowerPoints == 1) {
				if (powerPoints > 5)
				{
					powerPoints = powerPoints - 5;
					BP += 1;
					cout << "You found 1 Higgs Bozon and your current balance is " << BP << " and " << powerPoints << " power points" << endl;
				}
				else
				{
					cout << "You don't have enough power points to do that!" << endl;
				}
			}
			
			else if (usedPowerPoints == 5) {
				cout << "Welcome to the upgrades store! You can buy the following upgrades (note that you have to buy them in the order they are put in)" << endl << endl;
				cout << "1.Power master - you can now use 10 power points and get 2 BP (you also get 20 power points when you buy the upgrade)-cost:3 BP" << endl;
				cout << "Choose which upgrade you want to buy by entering the corresponding number or enter 10 to go back to the play tab: " << endl;
				cin >> upgradeBuy;
				if (upgradeBuy == 1 && BP >= 3) {
					BP = BP - 3;
					powerMaster = true;
					powerPoints += 20;
					cout << "To use the power enter '10'" << endl;
				}
				else {
					cout << "You don't have enough BP to buy this upgrade!" << endl;
				}
				
			}
			else if (usedPowerPoints == 10) {
				if (powerMaster == true)
				{
					if (powerPoints > 10)
					{
						powerPoints = powerPoints - 10;
						BP += 2;
						cout << "You found 2 Higgs Bozons and your current balance is " << BP << " and " << powerPoints << " power points" << endl;
					}
					else
					{
						cout <<endl<< "You don't have enough power points to do that!" << endl;
					}
				}
				else
				{
					cout << "You don't have this upgrade yet!(press'5' to go to the upgrades store)" << endl;
				}
			}
		}
	cout << "Congratulations you are the planet expert!" << endl;
	loseScreenFinal();
	}

void chooseLevel(int level)
{
	if (userChoiceGameModes == 1)
	{
		planetOrderingLevel1(level);
		planetOrderingLevel2(level);
		planetOrderingCustomLevel(level);
	}
	else if(userChoiceGameModes == 2)
	{
		habitatFinderLevel1(level);
		habitatFinderLevel2(level);
		habitatFinderCustomLevel(level);
	}
	else if (userChoiceGameModes == 3)
	{
		planetExpertMain();
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

void creditsScreen()
{
	int userChoice;
	drawPlanetMaster();
	cout << setw(125) << "GAME DESIGN" << endl;
	cout << setw(125) << "-----------" << endl;
	cout << setw(135) << "Milko Barev- UI and Graphic Design" << endl << endl;
	cout << setw(130) << "GAME DEVELOPMENT" << endl;
	cout << setw(130) << "----------------" << endl;
	cout << setw(135) << "Milko Barev- Gamemode 1 programming" << endl;
	cout << setw(139) << "Stanislav Radev- Gamemode 1 programming" << endl;
	cout << setw(139) << "Stanislav Radev- Gamemode 2 programming" << endl;
	cout << setw(135) << "Milko Barev- Gamemode 3 programming" << endl;
	cout << setw(139) << "Aleks Semerdzhiev- Upgrades development" << endl << endl;
	cout << setw(128) << "UI DEVELOPMENT" << endl;
	cout << setw(128) << "--------------" << endl;
	cout << setw(130) << "Stanislav Radev" << endl << endl;
	cout << setw(136) << "DOCUMENTATION CREATION" << endl;
	cout << setw(136) << "----------------------" << endl;
	cout << setw(160) << "Boris Rusinov- Documentation, presentation and README. creation" << endl << endl << endl;
	cout << setw(110) << "4.Back" << endl;
	cin >> userChoice;
	if (userChoice == 4)
	{
		mainMenu();
	}
}

void mainMenu()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	drawPlanetMaster();
	int userChoice;
	bool isChosenSuccessfullyMainMenu = false;
	bool isChosenSuccessfullyPlay = false;
	cout << "                                                                                                           ______________________" << endl;
	cout << "                                                                                                          |       1. Play       |" << endl;
	cout << "                                                                                                           **********************" << endl;
	cout << "                                                                                                           ______________________" << endl;
	cout << "                                                                                                          |       2. Settings   |" << endl;
	cout << "                                                                                                           **********************" << endl;
	cout << "                                                                                                           ______________________" << endl;
	cout << "                                                                                                          |       3. Credits    |" << endl;
	cout << "                                                                                                           **********************" << endl;
	cout << endl << endl;
	cout << "                                                                                Choose what would you like to do by typing the corresponding number!" << endl;
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
			creditsScreen();
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

void winScreenFinal()
{
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
	cout << "      *  1.Play Again  *" << endl;
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
			cout << endl;
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

void loseScreenFinal() {
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