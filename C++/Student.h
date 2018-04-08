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
	// //ͷ�����
private:
	void AddHead(DATA*);
private:
	// //ͷָ��
	SUser* m_pHead;
	void AddTail(DATA* data);
	int DeleteData(SUser*);
	// �޸�����
	int ModifyData(DATA* data);
	// //��������
	SUser* SearchData(DATA* data);
	// ��ӡ��������
	void Print();
};

