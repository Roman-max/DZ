#include <iostream>
#include <ctime>


using namespace std;
//zadacha 5
//zadacha 5
//zadacha 5
//zadacha 5
void nozero(int** arr, int rows, int cols, int** arr2, int rows2, int cols2, int** arr3);


void (*pFunc) (int, int);


int main()
{

	pFunc(1, 2);
	srand(unsigned(time(NULL)));
	

		int** arr;
		int rows = 0, cols = 0;
		cout << "Enter rows" << endl;
		cin >> rows;
		cout << "Enter cols" << endl;
		cin >> cols;
		arr = new int*[rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}
		cout<<"Masiv nomer2"<<endl;
		int** arr2;
		int rows2 = 0, cols2 = 0;
		cout << "Enter rows" << endl;
		cin >> rows2;
		cout << "Enter cols" << endl;
		cin >> cols2;
		arr2 = new int* [rows2];
		for (int i = 0; i < rows2; i++)
		{
			arr2[i] = new int[cols2];
		}
	
		int** arr3;
		arr3 = new int* [rows + rows2];
		for (int i = 0; i < rows + rows2; i++)
		{
			arr3[i] = new int[cols + cols2];
		}
	
	    nozero(arr, rows, cols,arr2,rows2,cols2,arr3);
	


		for (int i = 0; i < rows; i++)
		{
			delete[]arr[i];
		}
		delete[]arr;

		for (int i = 0; i < rows2; i++)
		{
			delete[]arr2[i];
		}
		delete[]arr2;
	
		system("pause");
		return 0;
}
	
void nozero(int** arr, int rows, int cols, int** arr2, int rows2, int cols2,int**arr3)
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 9 + 0;
			arr3 = arr[i][j];
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout<<"masiv nomer 2"<<endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			arr2[i][j] = rand() % 9 + 0;

			cout << arr2[i][j] << "\t";
		}
		cout << endl;

	}
}















//zadacha 4
//zadacha 4
//zadacha 4
//zadacha 4

//void nozero(int** arr, int rows, int cols);
//
//int main()
//{
//
//	srand(unsigned(time(NULL)));
//	
//		int** arr;
//		int rows = 0, cols = 0;
//		cout << "Enter rows" << endl;
//		cin >> rows;
//		cout << "Enter cols" << endl;
//		cin >> cols;
//		arr = new int*[rows];
//		for (int i = 0; i < rows; i++)
//		{
//			arr[i] = new int[cols];
//		}
//	
//	
//	
//	    nozero(arr, rows, cols);
//	
//		for (int i = 0; i < rows; i++)
//		{
//			delete[]arr[i];
//		}
//		delete[]arr;
//	
//		system("pause");
//		return 0;
//}
//	
//void nozero(int** arr, int rows, int cols)
//{
//	
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = rand() % 9 + 0;
//			if (arr[i][j] != 0)
//			{
//				cout << arr[i][j] << "\t";
//			}
//			
//
//
//		}
//		cout << endl;
//	}
//}












    //zadacha 2
//zadacha 2
     //zadacha 2
//zadacha 2
    //zadacha 2
   //zadacha 2



/*void adding(int** arr, int rows, int cols);





int main()
{
	srand(unsigned(time(NULL)));

	int** arr;
	int rows = 0, cols = 0;
	cout << "Enter rows" << endl;
	cin >> rows;
	cout << "Enter cols" << endl;
	cin >> cols;
	arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 9 + 1;
			cout << arr[i][j] << "\t";


		}
		cout << endl;

	}

    adding(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

	system("pause");
	return 0;
}

void adding(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows-1; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 9 + 1;
			cout << arr[i][j] << "\t";
			
	
		}
		cout << endl;

	}

}*/



       //Zadanie 1 
                //Zadanie 1 
           //Zadanie 1 
        //Zadanie 1 
 //Zadanie 1 
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int suma = 0, proste = 0;
//	float arif = 0;
//	int** arr;
//	int rows = 0, cols = 0;
//	cout << "Enter rows" << endl;
//	cin >> rows;
//	cout << "Enter cols" << endl;
//	cin >> cols;
//	arr = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = rand() % 9 + 1;
//			cout << arr[i][j] << "\t";
//			suma += arr[i][j];
//			arif++;
//			if (arr[i][j] == 2 || arr[i][j] == 3 || arr[i][j] == 5 || arr[i][j] == 7)
//			{
//				proste++;
//			}
//		}
//		cout << endl;
//
//	}
//	arif = suma / arif;
//	cout << "suma =" << suma << endl;
//	cout << "Arifmetichne = " << arif << endl;
//	cout << "Proste chislo = " << proste << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		delete[]arr[i];
//	}
//	delete[]arr;
//
//	system("pause");
//	return 0;
//}