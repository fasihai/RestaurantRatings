#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



int main() {
	string filename;
	string input, restaurants, ratings;
	float accum, counter, counter2, average, dice1, dice2, roll1, roll2, total, per,
	 	 columns, rows, width, height;
	ifstream infile;


	filename="/Users/fasihatiq/Desktop/Fasiha41data.txt";

	infile.open(filename,ios::in);

	if (!infile.is_open())
		{
			cout << "open failure" << "\n";

			return 4;

		}

	infile >> input;
	cout << "Rater: " << input << "\n";
	infile >> restaurants;
	counter = 0;
	accum = 0;
	while (!infile.eof())
		{
			cout << "Restaurant: " << restaurants << "\n";
			infile >> ratings;
			cout << "Rating: " << ratings << "\n";
			counter = counter + 1;
			accum = accum + counter;
			infile >> restaurants;

		}

	average = accum / counter;
	cout << "Average: " << average << "\n";
	infile.close();


	const int lowValue = 1;
	const int highValue = 6;
	unsigned seed = time(0);
	srand(seed);


	for (roll1=0; roll1 <= 10; roll1++)
	{
		counter2 = 0;

		for (roll2=0; roll2 <= 100; roll2++)
		{
			dice1 = (rand() % (highValue - lowValue + 1)) + lowValue;
			dice2 = (rand() % (highValue - lowValue + 1)) + lowValue;

			total = dice1 + dice2;
			cout << "Dice 1: " << dice1 << "\n";
			cout << "Dice 2: " << dice2 << "\n";
			cout << "Total Roll: " << total << "\n";

			if (total == 7)
			{
				counter2 = counter2 + 1;

			}

		}

		per = counter2 / 100;
		cout << "Total 7's rolled: " << per << "%" << "\n";

	}

	cout << "Please enter two integer dimensions for height, and width. In this exact order. \n";
	cin >> height >> width;
	for (rows = 1; rows <= height; rows++)
	{

		for (columns = 1; columns <= width; columns++)
		{
			cout << "X";
		}

		cout << endl;

	}


	return 0;

}
