//#include <iostream> 
//#include <string> 
//#include <ctime> 
//
//using namespace std;
//
//int sum(int** matrix, int sizeA, int sizeB) {
//	int sum = 0;
//	for (int i = 0; i < sizeA; i++)
//	{
//		for (int j = 0; j < sizeB; j++)
//		{
//			if (i + j <= sizeA - 1) {
//				sum += matrix[i][j];
//			}
//		}
//	}
//	return sum;
//}
//
//void rand_init(int**, int, int);
//
//
//string show(int**, int, int);
//
//int main() {
//	srand(time(NULL));
//	int sizeA = 11;
//	int sizeB = 12;
//	int** matrix = new int* [sizeA];
//	for (int i = 0; i < sizeA; i++)
//	{
//		matrix[i] = new int[sizeB];
//
//	}
//	rand_init(matrix, sizeA, sizeB);
//	cout << show(matrix, sizeA, sizeB) << endl;
//    cout << "sum of elements that are above secondary diagonal: " << sum(matrix, sizeA, sizeB) << endl;
//	delete[] matrix;
//    return 0;
//}