//#include <iostream> 
//#include <string>   
//
//using namespace std;
//
//int min(int** matrix, int sizeA, int sizeB) {
//	int min = matrix[sizeB][sizeA];
//	for (int i = 0; i < sizeA; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (min > matrix[i][j]) {
//				min = matrix[i][j];
//			}
//		}
//	}
//	return min;
//}
//
//void rand_init(int**, int, int);
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
//	cout << "The minimum value among elements that are below main diagonal: " << min(matrix, sizeA, sizeB) << endl;
//	delete[] matrix;
//	return 0;
//}