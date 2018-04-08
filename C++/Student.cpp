#include "Student.h"
using namespace std;

CStudent::CStudent()
	: m_pHead(NULL)
{
}


CStudent::~CStudent()
{
}

//头部添加
void CStudent::AddHead(DATA*data)
{
	SUser*p = new SUser;
	p->pNext = m_pHead;
	m_pHead = p;
	p->data = *data;
}


void CStudent::AddTail(DATA* data)
{
	SUser*p = new SUser;
	SUser*tail = m_pHead;
	if (!m_pHead)
	{
		m_pHead = p;
		p->pNext = NULL;
		return;
	}
	while (tail->pNext)
		tail = tail->pNext;
	tail->pNext = p;
	p->pNext = NULL;
	p->data = *data;
}


int CStudent::DeleteData(SUser* p)
{
	if (!p)
		return 0;
	SUser*p1 = m_pHead;
	SUser*p2 = NULL;
	while (p1)
	{
		if(p1==p)
		{
			if (!p2)
			{
				m_pHead = p1->pNext;
				delete p1;
				return 1;
		    }
			else
			{
				p2->pNext = p1->pNext;
				delete p1;
				return 1;
			}
		}
		p2 = p1;
		p1 = p1->pNext;
	}
	return 0;
}


// 修改数据
int CStudent::ModifyData(DATA* data)
{
	SUser*p = SearchData(data);
	if(!p)
		return 0;
	p->data = *data;
	return 1;
}


// //查找数据
SUser* CStudent::SearchData(DATA* data)
{
	SUser*p = m_pHead;
	if (!p)
		return 0;
	while (p)
	{
		if (!strcmp(p->data.sNumb, data->sNumb))
			return p;
		p = p->pNext;
	}
	return 0;
}


// 打印所有数据
void CStudent::Print()
{
	SUser*p = m_pHead;
	cout << "\t\t\t\t\t\t姓名\t学号\t数学\t语文\t英语" << endl;
	while(p)
	{
		cout << "\t\t\t\t\t\t" << p->data.sNumb << "\t" << p->data.sName << "\t";
		cout << p->data.fMath << "\t" << p->data.fChin << "\t" << p->data.fEngl<< endl;
		p = p->pNext;
	}
	
}
