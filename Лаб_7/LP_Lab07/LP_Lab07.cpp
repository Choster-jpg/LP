#include <iostream>
#include "Header1.h"
#include "stdafx.h"
using namespace std;
using namespace Dictionary;

int main()
{
	setlocale(LC_ALL, "ru");

#ifdef TEST_CREATE_01
	#define over
		try
		{
			Instance d7 = create("Thghghfaaaaaaaytytytyuuiuiuuioooop", 20);
		}
		catch (const char* ex)
		{
			cout << ex;
		}
#endif
#ifdef TEST_CREATE_02
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
		#define over
		try
		{
			Instance d8 = create("Priver", 120);
		}
		catch (const char* ex)
		{
			cout << ex;
		}
	#endif
#endif
#ifdef TEST_ADDENTRY_03
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
		#define over
		try
		{
			Instance d9 = create("Poka", 1);
			Entry t1 = { 1, "Name" }, t2 = { 2, "Surname" };
			AddEntry(d9, t1);
			AddEntry(d9, t2);
		}
		catch (const char* ex)
		{
			cout << ex;
		}
	#endif
#endif
#ifdef TEST_ADDENTRY_04
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		Instance d10 = create("Test4", 3);
		Entry t1 = { 1, "Name" }, t2 = { 1, "Surname" };
		AddEntry(d10, t1);
		AddEntry(d10, t2);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
#ifdef TEST_GETENTRY_05
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		Instance d11 = create("Test2", 5);
		GetEntry(d11, 1);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
#ifdef TEST_GETENTRY_06
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		Instance d12 = create("Test3", 5);
		DelEntry(d12, 1);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
#ifdef TEST_UPDENTRY_07
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		Instance d13 = create("Test5", 5);
		Entry s6 = { 21, "Chert" };
		UpdEntry(d13, 1, s6);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
#ifdef TEST_UPDENTRY_08
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		Instance d14 = create("Test5", 5);
		Entry t5 = { 1, "Name" };
		AddEntry(d14, t5);
		Entry s7 = { 1, "Chert" };
		UpdEntry(d14, 1, s7);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
#ifdef TEST_DICTIONARY
	#if defined over
		#error "собрания больше чем по одному запрещены"
	#else
	#define over
	try
	{
		setlocale(LC_ALL, "ru");

		Instance d1 = create("Teachers", 20);
		Entry e1 = { 1, "Name" }, e2 = { 2, "Surname" }, e3 = { 3, "Sex" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		print(d1);
		Entry ex4 = GetEntry(d1, 1);
		DelEntry(d1, 2);
		Entry e6 = { 8, "Hook" };
		UpdEntry(d1, 3, e6);
		print(d1);

		Instance d2 = create("Students", 30);
		Entry s1 = { 1, "Ivanov" }, s2 = { 2, "Petrov" }, s3 = { 3, "Sidorov" }, s4 = { 4, "Shumskiy" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		AddEntry(d2, s4);
		print(d2);
		DelEntry(d2, 2);
		Entry s6 = { 21, "Chert" };
		UpdEntry(d2, 4, s6);
		print(d2);
		Delete(d2);
		print(d2);
	}
	catch (const char* ex)
	{
		cout << ex;
	}
	#endif
#endif
} 