#include <iostream>
#include<iomanip>
using namespace std;

void EmojiWin() {
	cout << "        ";  //red 1 na emojito
	for (int i = 0; i < 14; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "      ";  //red 2 na emojito
	for (int i = 0; i < 15; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 14) {
			cout << "*";
		}
	}
	for (int i = 0; i < 1; i++) {  //red 4,5,6 i 7 na emojito 
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
	cout << "      ";  //red 2 na emojito
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
	cout << "        **************" << endl;
}

void EmojiLose(){
	cout << endl;
	cout << "        ";  //red 1 na emojito
	for (int i = 0; i < 14; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "      ";  //red 2 na emojito
	for (int i = 0; i < 15; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 14) {
			cout << "*";
		}
	}
	for (int i = 0; i < 2; i++) {  //red 4,5,6 i 7 na emojito 
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
	cout << "      *  Planet loser  *";
	for (int i = 0; i < 3; i++) {  //red 4,5,6 i 7 na emojito 
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
}

void SunSizeS() {
	cout << "        ";  //red 1 na emojito
	for (int i = 0; i < 20; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "      ";  //red 2 na emojito
	for (int i = 0; i < 21; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 20) {
			cout << "*";
		}
	}
	cout << endl;
	cout << "     ";  //red 3 na emojito
	for (int i = 0; i < 23; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 22) {
			cout << "*";
		}
	}
	
	cout << "     ";
	for (int i = 0; i < 7; i++) {  //red 4,5,6 i 7 na slunceto
		cout << endl;
		cout << "     ";
		for (int i = 0; i <23; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 22) {
				cout << "*";
			}
		}
	}
	cout << endl;
	cout << "      ";//red 8 na slunceto
	for (int i = 0; i <23; i++) {
		cout << " ";
		if (i == 0) {
			cout << "*";
		}
		else if (i == 20) {
			cout << "*";
		}
	}
	cout << endl;
	cout << "        ";//red 9 na slunceto
	for (int i = 0; i < 20; i++) {
		cout << "*";
	}
}

void SmallPlanet(int a) {
	if (a == 2) {
		cout << "        ";  //red 1 na emojito
		for (int i = 0; i < 11; i++) {
			cout << "*";
		}
		cout << endl;
		cout << "      ";  //red 2 na emojito
		for (int i = 0; i < 12; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 11) {
				cout << "*";
			}
		}
		cout << endl;
		cout << "     ";  //red 3 na emojito
		for (int i = 0; i < 14; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 13) {
				cout << "*";
			}
		}

		cout << "     ";
		for (int i = 0; i < 3; i++) {  //red 4,5,6 i 7 na slunceto
			cout << endl;
			cout << "     ";
			for (int i = 0; i < 14; i++) {
				cout << " ";
				if (i == 0) {
					cout << "*";
				}
				else if (i == 13) {
					cout << "*";
				}
			}
		}
		cout << endl;
		cout << "      ";//red 8 na slunceto
		for (int i = 0; i < 12; i++) {
			cout << " ";
			if (i == 0) {
				cout << "*";
			}
			else if (i == 11) {
				cout << "*";
			}
		}
		cout << endl;
		cout << "        ";//red 9 na slunceto
		for (int i = 0; i < 11; i++) {
			cout << "*";
		}
	}
}

bool AnswerLVL1(int a, int b, int c, int d, int e, int f, int g, int h) {
	if (a != 2 || b != 5 || c != 8 || d != 1 || e != 6 || f != 7 || g != 4 || h != 3) {
		return false;
	}
	else {
		return true;
	}
}

void Sistema1(int n) {
	if (n == 1) {

		cout << "Put the planets in the correct order to gain access to the next level!" << endl;
		cout << "Level 1: Our solar system!" << endl;
		cout << "List of Planets:" << endl;
		cout << "1.Mars " << endl << "2.Mercury" << endl << "3.Neptune" << endl << "4.Uranus" << endl << "5.Venerus" << endl;
		cout << "6.Jupiter" << endl << "7.Saturn" << endl<<"8.Earth"<<endl;
		cout << endl;
		
		SunSizeS();
		cout << endl << endl;
		int a,b,c,d,e,f,g,h;
		cin >> a >> b >> c >> d >> e >> f >> g >>h;
		SunSizeS();
		cout << endl << endl<<endl << endl << endl << endl << endl;
		SmallPlanet(a);
		
		if (AnswerLVL1(a,b,c,d,e,f,g,h)==0) {
			cout << endl;
			cout << "Wrong answer! Try again!";
			EmojiLose();
			return;
		}
		else {
			cout << endl;
			cout << "Congrats! You may go to the next level!" << endl << endl;
			EmojiWin(); 
		}
	}
	else {
		return;
	}
}
void Sistema2(int n) {
	if (n == 2) {
		cout << "Put the planets in the correct order to gain access to the next level!" << endl;
		cout << "Level 2: Our solar system!" << endl;
		cout << "List of Planets:" << endl;
		cout << "1.Mars" << endl << "2.Mercury" << endl << "3.Neptune" << endl << "4.Uranus" << endl << "5.Venerus" << endl;
		cout << "6.Jupiter" << endl << "7.Saturn";
	}
	else {
		return;
	}
}

int main()
{
	int userChoice;
	int level;
	bool isChosenSuccessfullyMainMenu = false;
	bool isChosenSuccessfullyPlay = false;
	cout << "PLANET MASTER" << endl;
	cout << "_____________" << endl;
	cout << endl;
	cout << "_____________" << endl;
	cout << "|  1. Play  |" << endl;
	cout << "_____________" << endl;
	cout << "_____________" << endl;
	cout << "|2. Settings|" << endl;
	cout << "_____________" << endl;
	cout << "_____________" << endl;
	cout << "| 3. Credits|" << endl;
	cout << "_____________" << endl;
	cout << "Choose what would you like to do by typing the corresponding number!" << endl;
	cin >> userChoice;
	while (isChosenSuccessfullyMainMenu == false)
	{
		if (userChoice == 1)
		{
			isChosenSuccessfullyMainMenu = true;
			while (isChosenSuccessfullyPlay == false)
			{
				cout << "Enter the number of the desired level!" << endl;
				cin >> level;
				switch (level)
				{
				case 1:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 2:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 3:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 4:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 5:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 6:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 7:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 8:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 9:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				case 10:
					Sistema1(level);
					isChosenSuccessfullyPlay = true;
					break;
				default:
					cout << "Please enter a valid level!" << endl;
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
		}
	}
}