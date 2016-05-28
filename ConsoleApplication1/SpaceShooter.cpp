#include <iostream>
using namespace std;

const int ALIEN_POINTS = 150;
int aliensKilled;
int score;
int average;
int alienWaves;
int choise;
bool picked = false;
int totalScore = 0;
int tries = 0;
char playAgain;

int main()
{
	do
	{
		tries = 0;
		totalScore = 0;
		playAgain = 0;
		
		do
		{	
			cout << "Please set Difficulty using:" << endl;
			cout << "1 - Easy" << endl;
			cout << "2 - Medium" << endl;
			cout << "3 - Hard" << endl;
			cout << "Choise:";
			cin >> choise;

			switch (choise)
			{
			case 1:
				cout << "You Picked Easy" << endl;
				cout << endl;
				picked = true;
				alienWaves = 3;
				break;
			case 2:
				cout << "You Picked Medium" << endl;
				cout << endl;
				picked = true;
				alienWaves = 5;
				break;
			case 3:
				cout << "You Picked Hard" << endl;
				cout << endl;
				picked = true;
				alienWaves = 10;
				break;
			default:
				cout << endl;
				cout << "You made a non-existent choise,try again..." << endl;
				break;		
			}
		} while (picked != true);

		for (int i = 0; i != alienWaves; ++i)
		{
			cout << "Number of aliens destroyed this wave:";
			cin >> aliensKilled;
			score = (aliensKilled * ALIEN_POINTS);
			cout << "Score:" << score << endl;
			cout << endl;
			totalScore += score;
			tries++;
		}
		
		cout << "Total Score:" << totalScore << endl;
		cout << "Average Score per Wave:" << totalScore / tries << endl;
		cout << endl;
		
		while (playAgain != 'n' && playAgain != 'y')
		{
			cout << "Do you want to play again? (y / n) :" << endl;
			cin >> playAgain;
			cout << endl;
		
			if (playAgain == 'n')
			{
				cout << "Game Over" << endl;
				cout << endl;
				break;
			}
			else if (playAgain != 'n' && playAgain != 'y')
			{
				cout << "Wrong answer" << endl;
				cout << endl;
			}
			else 
			{
				continue;
			}
		}

	} while (playAgain == 'y');
	
	system("pause");
}
