#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include "Header.h"
using namespace std;
#define name 5;


//
//int main()
//{
//	data1 data2{};
//	car toyota{};
//	for (int i = 0; i < 2; i++)
//	{
//		
//		i--;
//		cout << "Enter menu(1-zapovnenya 2-vivid,3 color,4 evro, 5 = +5,6-vid avto,10-exit)" << endl;
//		int j = 0;
//		cin >> j;
//		if (j == 1)
//		{
//			cout<<"Enter model"<<endl;
//			cin >> toyota.model;
//			cout << "Enter color" << endl;
//			cin >> toyota.color;
//			cout << "Enter num" << endl;
//			cin >> toyota.num;
//			cout << "Enter strong" << endl;
//			cin >> toyota.strong;
//			cout << "Enter  vaga" << endl;
//			cin >> toyota.vaga;
//			cout << "Enter data" << endl;
//			cin >> data2.chislo;
//			cin >> data2.mis;			
//			cin >> data2.rik;
//		}
//		if (j == 2)
//		{
//			Print(toyota,data2);
//			
//			
//		}
//		if (j == 3)
//		{
//			Replace( toyota);
//		}
//		if (j == 4)
//		{
//			evro(data2);
//		}
//		if (j == 5)
//		{
//			stron(toyota);
//		}
//		if (j == 6)
//		{
//			cate(toyota);
//		}
//		if (j == 10)
//		{
//			exit(0);
//		}
//	}
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}
//void Print(car toyota, data1 data2)
//{
//	cout << "Model = " << toyota.model << endl;
//	cout << "Color = " << toyota.color << endl;
//	cout << "Num = " << toyota.num << endl;
//	cout << "strong = " << toyota.strong << endl;
//	cout << "Vaga = " << toyota.vaga << endl;
//	cout << "data = " << data2.chislo;
//	cout << ".";
//	cout << data2.mis;
//	cout << ".";
//	cout << data2.rik << endl;;
//}
//
//
//void Replace(car toyota)
//{
//	cout << "Enter color replace" << endl;
//	cin >> toyota.color;
//}
//void evro(data1 data2)
//{
//	if (data2.rik >= 2010)
//	{
//		cout << "car = evro-5" << endl;
//	}
//	else
//	{
//		cout << "Car no evro-5" << endl;
//	}
//}
//void stron(car toyota)
//{
//	toyota.strong = toyota.strong + 5;
//}
//void cate(car toyota)
//{
//	if (toyota.vaga <= 3500)
//	{
//		cout << "You car legka" << endl;
//	}
//	else
//	{
//		cout << "You car vantahna" << endl;
//	}
//}



//struct MyPerson
//{
//	int age;
//	string name;
//	float height;
//	float weidht;
//};
//
//
//void Print(MyPerson roma);
//
//void File(MyPerson roma);
//
//
//int main()
//{
//	MyPerson roma{};
//	
//	for (int i = 0; i < 2; i++)
//	{
//		i--;
//		cout << "Enter menu(1,2,3,0=exit)" << endl;
//		int j = 0;
//		cin >> j;
//		if (j == 1)
//		{
//			cout << "Enter age" << endl;
//			cin >> roma.age;
//			cout << "Enter name" << endl;
//			cin >> roma.name;
//			cout << "Enter height" << endl;
//			cin >> roma.height;
//			cout << "Enter weidht" << endl;
//			cin >> roma.weidht;
//		}
//		else if (j == 2)
//		{
//			Print(roma);
//
//		}
//		else if (j == 3)
//		{
//			File(roma);
//		}
//		else if (j == 0)
//		{
//			exit(0);
//		}
//	}
//	system("pause");
//	return 0;
//}
//void Print(MyPerson roma)
//{
//	
//	cout << "Age =" << roma.age << endl;
//	cout << "Name =" << roma.name << endl;
//	cout << "height =" << roma.height << endl;
//	cout << "widht =" << roma.weidht << endl;
//}
//void File(MyPerson roma)
//{
//	ofstream struc;
//	struc.open("struc.txt", ios_base::binary);
//	struc << "Age =\n" << roma.age << endl;
//	struc << "Name =\n" << roma.name << endl;
//	struc << "height =\n" << roma.height << endl;
//	struc << "widht =\n" << roma.weidht << endl;
//	struc.close();
//	ifstream struc2;
//	struc2.open("struc.txt", ios_base::binary);
//
//	char word[100];
//	while (!struc2.eof())
//	{
//		struc2 >> word;
//
//		cout << word << endl;
//	}
//
//
//	struc2.close();
//}




//int main()
//{
//	srand(unsigned(time(NULL)));
//	ofstream word;
//	word.open("cezar.txt", ios_base::out);
//	string word2;
//		if (word.is_open())
//	    {
//			
//			cout <<"Enter word" <<endl;
//			cin >> word2;
//			
//			cout << "Enter key(1,2)" << endl;
//			int key = 0;
//			cin >> key;
//			if (key == 1)
//			{
//				for (int i = 0; word2[i] != '\0'; i++)
//				{
//				
//					word2[i] = rand() % 3 + 1;
//			if  (word2[i] == 1)
//			{
//			word2[i] = 'a';
//			cout << word2[i];
//			word << word2[i];
//			}
//			else if (word2[i] == 2)
//			{
//				word2[i] = 'b';
//				cout << word2[i];
//				word << word2[i];
//			}
//			else if (word2[i] == 3)
//			{
//				word2[i] = 'c';
//				cout << word2[i];
//				word << word2[i];
//			}
//					 
//
//				}
//			}
//			else if (key == 2)
//			{
//				for (int i = 0; word2[i] != '\0'; i++)
//				{
//
//					word2[i] = rand() % 3 + 1;
//					if (word2[i] == 1)
//					{
//						word2[i] = 'd';
//						cout << word2[i];
//						word << word2[i];
//					}
//					if (word2[i] == 2)
//					{
//						word2[i] = 'e';
//						cout << word2[i];
//						word << word2[i];
//					}
//					if (word2[i] == 3)
//					{
//						word2[i] = 'f';
//						cout << word2[i];
//						word << word2[i];
//					}
//
//
//				}
//			}
//			else
//			{
//				cout << "Error" << endl;
//			}
//	    }
//	else
//	{
//		exit(0);
//	}
//		word.close();
//	ifstream cezar;
//	cezar.open("cezar.txt", ios_base::in);
//			char st[255];
//		while (!cezar.eof())			
//		{
//			cezar.getline(st, 255);
//			cout << st << endl;	
//			
//		}
//		cezar.close();
//
//		
//
//	system("pause");
//	return 0;
//}





//int main()
//{
//	ofstream word;
//	word.open("word.txt", ios_base::out);
//	if (word.is_open())
//	{
//		
//	
//	 char S[25] = { "Hello, how are you?" };
//	 
//		word << S << endl;
//	}
//	else
//	{
//		exit(0);
//	}
//	word.close();
//	ifstream wordR;
//		wordR.open("word.txt", ios_base::in);
//		char st[255];
//		while (!wordR.eof())			
//		{
//			wordR.getline(st, 255);
//			cout << st << endl;	
//			
//		}
//		wordR.close();
//	ofstream wordR2;
//		wordR2.open("wordR.txt", ios_base::out);
//		if (wordR2.is_open())
//		{
//			string str = "Hello, how are you?";
//
//			char mysymvol[255], mysymbin  ;
//
//			cout << "Enter word to replace" << endl;
//			cin >> mysymbin;
//
//			str = mysymbin;
//			cout << str << endl;
//			
//
//			wordR2  << str << endl;
//		}
//		else
//		{
//			exit(0);
//		}
//		wordR2.close();
//	system("pause");
//	return 0;
//}





//zadacha 4
//
//void Repalcer(char* str, char symbout, char symbin);
//
//int main()
//{
//	ofstream file1;
//	file1.open("file1.txt", ios_base::out);
//	if (file1.is_open())
//	{
//		file1 << "Hello, how are you?" << endl;
//	}
//	else
//	{
//		exit(0);
//	}
//	file1.close();
//	ifstream file2;
//	file2.open("file1.txt", ios_base::in);
//	char symvol[255];
//	while (!file2.eof())
//	{
//		file2.getline(symvol,255);
//			
//		cout << symvol << endl;
//	}
//	file2.close();
//	ofstream file3;
//	file3.open("file3.txt", ios_base::out);
//	if (file3.is_open())
//	{
//		
//		 char S[25] =  "Hello, how are you?" ;
//		int i = 0;
//			char mysymbout = ' ', mysymbin = '-';
//
//	Repalcer(S, mysymbout, mysymbin);
//	puts(S);
//		
//			file3 << S << endl;
//	}
//	else
//	{
//		exit(0);
//	}
//	file3.close();
//	
//
//
//
//	system("pause");
//	return 0;
//}
//
//void Repalcer(char* str, char symbout, char symbin)
//{
//	int i;
//	for (i = 0; str[i] != '\0'; i++)
//		if (str[i] == symbout)
//			str[i] = symbin;
//}



//zadacha 3

//int main()
//{
//	
//		ofstream file;
//	file.open("text2.txt",ios_base::out);
//		if (file.is_open())
//	    {
//		cout << "File successfully opened!" << endl;
//		 string S;
//		 int num = 0;
//		 cout<< "Enter word and number "<<endl;
//		 cin >> S;
//		 cin >> num;
//		 for (int i = 0; i < num; i++)
//		 {
//			 file  << S << endl;
//		 }
//
//		
//	    }
//	else
//	{
//		cout << "Error opening file!" << endl;
//		exit(0);
//	}
//	file.close();
//	char buff[50];
//	ifstream file2;
//	file2.open("text2.txt", ios_base::in);
//	file2.getline(buff, 50);
//	file2.close();
//	cout << buff << endl;
//
//
//
//	system("pause");
//	return 0;
//}









//zadacha2
//int main()
//{
//	ofstream file;
//	file.open("text2.txt",ios_base::out);
//		if (file.is_open())
//	{
//		cout << "File successfully opened!" << endl;
//		const char* S = "Number";
//		int i = 0;
//		
//		file <<"  " <<S << endl;
//		while (S[i])i++;
//
//		file << ("%i\n", i);
//		cout << ("%i\n", i);
//	}
//	else
//	{
//		cout << "Error opening file!" << endl;
//		exit(0);
//	}
//	file.close();
//	char buff[50];
//	ifstream file2;
//	file2.open("text2.txt", ios_base::in);
//	file2.getline(buff, 50);
//	file2.close();
//	cout << buff << endl;
//
//	system("pause");
//	return 0;
//}


//zadacha 1
//int main()
//{
//	ofstream roma;
//	roma.open("text.txt",ios_base::out);
//	if (roma.is_open())
//	{
//		cout << "File successfully opened!" << endl;
//	}
//	else
//	{
//		cout << "Error opening file!" << endl;
//		exit(0);
//	}
//	roma.close();
//	system("pause");
//	return 0;
//}