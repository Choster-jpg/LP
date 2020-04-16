#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <string.h>
#include <locale>


#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 30
#define THROW01 "Create: превышен размер имени словаря"
#define THROW02 "Create: превышен размер максимальной ёмкости словаря"
#define THROW03 "AddEntry: переполнение словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найден элемент"
#define THROW06 "DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"

using namespace std;

namespace Dictionary
{
	struct Entry  //элемент одного словаря
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};

	struct Instance //новый словарь
	{
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry dictionary[DICTMAXSIZE];

	};

	Instance create(const char name[DICTNAMEMAXSIZE], int size);
	void AddEntry(Instance& inst, Entry ed);
	void DelEntry(Instance& inst, int id);
	void UpdEntry(Instance& inst, int id, Entry new_ed);
	Entry GetEntry(Instance inst, int id);
	void print(Instance inst);
	void Delete(Instance& d);
}