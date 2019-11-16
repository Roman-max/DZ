#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;



struct car
{
	string model;
	string color;
	int num;
	int strong;
	int vaga;
	int data;
};
struct data1
{
	int chislo;
	int mis;
	int rik;
};
void Print(car toyota, data1 data2);
void Replace(car toyota);
void evro(data1 data2);
void stron(car toyota);
void cate(car toyota);

//
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
//void Repalcer(char* str, char symbout, char symbin);