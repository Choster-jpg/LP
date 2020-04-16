#include "pch.h"
#include "framework.h"
#include "Dictionary.h"

namespace Dictionary
{
	Instance create(const char name[DICTNAMEMAXSIZE], int size)
	{
		if (size > DICTMAXSIZE)
			throw THROW02;
		Instance dct;
		int i = 0;
		while (i < strlen(name))
		{
			dct.name[i] = name[i];
			i++;
		}
		if (i > DICTNAMEMAXSIZE)
			throw THROW01;
		dct.maxsize = size;
		dct.size = 0;
		return dct;
	}


	void AddEntry(Instance& inst, Entry ed)
	{
		inst.size++;
		if (inst.size > inst.maxsize)
			throw THROW03;
		int i = 0;
		for (int i = 0; i < inst.size; i++)
			if (inst.dictionary[i].id == ed.id)
				throw THROW04;
		inst.dictionary[inst.size - 1] = ed;
	}

	void DelEntry(Instance& inst, int id)
	{
		int i = 0;
		while (inst.dictionary[i].id != id)
		{
			i++;
			if (i > inst.size)
				throw THROW06;
		}
		for (i; i < inst.size; i++)
			inst.dictionary[i] = inst.dictionary[i + 1];
		inst.size--;
	}

	void UpdEntry(Instance& inst, int id, Entry new_ed)
	{
		for (int i = 0; i < inst.size; i++)
			if (inst.dictionary[i].id == new_ed.id)
				throw THROW08;
		int i = 0;
		while (inst.dictionary[i].id != id)
		{
			i++;
			if (i > inst.size)
				throw THROW07;
		}
		inst.dictionary[i] = new_ed;
	}

	Entry GetEntry(Instance inst, int id)
	{
		int i = 0;
		while (inst.dictionary[i].id != id)
		{
			i++;
			if (i > inst.size)
				throw THROW05;
		}
		return inst.dictionary[i];
	}

	void print(Instance inst)
	{
		if (inst.maxsize == 0)
		{
			cout << "Словарь не найден";
			return;
		}
		cout << "======= ";
		int i = 0;
		while (i < strlen(inst.name))
		{
			cout << inst.name[i];
			i++;
		}
		cout << " =======" << endl;
		for (int i = 0; i < inst.size; i++)
			cout << inst.dictionary[i].id << ' ' << inst.dictionary[i].name << endl;
	}

	void Delete(Instance& d)
	{
		d.maxsize = 0;
		d.size = 0;
	}
}

