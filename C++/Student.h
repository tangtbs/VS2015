#pragma once
#include<iostream>
struct DATA
{
	char sNumb[15];
	char sName[20];
	float fMath;
	float fChin;
	float fEngl;
};
struct SUser
{
	DATA data;
	SUser* pNext;
};
class CStudent
{
public:
	CStudent();
	~CStudent();
	// //头部添加
private:
	void AddHead(DATA*);
private:
	// //头指针
	SUser* m_pHead;
	void AddTail(DATA* data);
	int DeleteData(SUser*);
	// 修改数据
	int ModifyData(DATA* data);
	// //查找数据
	SUser* SearchData(DATA* data);
	// 打印所有数据
	void Print();
};

