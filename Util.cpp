#include <iostream>  
#include <string>  

using namespace std;

void rand_init(int** matrix, int sizeA, int sizeB) {
	for (int i = 0; i < sizeA; i++)
	{
		for (int j = 0; j < sizeB; j++)
		{
			matrix[i][j] = rand() % 10;

		}
	}
}

string show(int** matrix, int sizeA, int sizeB) {
	string msg = "";
	for (int i = 0; i < sizeA; i++)
	{
		for (int j = 0; j < sizeB; j++)
		{
			msg += to_string(matrix[i][j]) + " ";

		}
		msg += "\n";
	}
	return msg;
}