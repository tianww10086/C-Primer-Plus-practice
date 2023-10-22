#pragma once
#ifndef STRING1_H_
#define STRING1_H_
#include<iostream>
using std::ostream;
using std::istream;
class String {
	char* str; //���ڱ����ַ���
	int len;//�����ַ����ĳ���
	static int num_stirngs; //���ڱ����ַ����ĸ���
	static const int CINLIM = 80;
public:
	String(const char* s); //���캯��
	String();//default constructor
	String(const String&);  //copy constructor
	~String(); //destructor
	int length() const { return len; } 

	//�������������(:overloaded operator methods)
	String& operator=(const String&); //��ֵstring��ĳ�Ա
	String& operator=(const char*); //��ֵstring����ַ���
	char& operator[](int i); //����[]�����
	const char& operator[](int i)const; //ʹ��������޷��޸ĵ�����

	//�����������Ԫ(overloaded operator friends)
	friend bool operator<(const String& st, const String& st2); //����С�ں�
	friend bool operator>(const String& st, const String& st2); //���ش��ں�
	friend bool operator==(const String& st, const String& st2); //���ص��ں�
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, const String& st);

	//��̬����(static function)
	static int HowMany();
};
#endif
