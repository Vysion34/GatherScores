// GatherScores.cpp : Defines the entry point for the console application.
// Dean Hartfield
// 7-16-2015
// Module 02 Application Assignment - Gathering Scores
// This program will ask for scores from 3 different players, and then it will display the highest score out of the three.


#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <array>


static void NewLine()
{
	std::cout << std::endl;
}


int main(int argc, _TCHAR* argv[])
{
	std::array<int, 3> scores{};

	std::cout << "Player 1, please enter your score: ";
	std::cin >> scores[0];
	NewLine();

	std::cout << "Player 2, please enter your score: ";
	std::cin >> scores[1];
	NewLine();
	
	std::cout << "Player 3, please enter your score: ";
	std::cin >> scores[2];
	NewLine();

	int topScore = 0;

	for (unsigned int i = 0; i < scores.size(); i++)
	{
		topScore = std::max(scores[i], topScore);
	}
	
	//system("cls");

	std::cout << "The highest score is " << topScore << std::endl;

	NewLine();
	system("pause");
	return 0;
}
