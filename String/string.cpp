#include<cstring>
#include"string1.h"
using std::cin;
using std::cout;

int String::num_stirngs = 0;

int String::HowMany() {
	return num_stirngs;
}

//class methods(�෽��)
String::String(const char* s) {  //��C�ַ��������ַ���(construct String from C string)
	len = std::strlen(s); //���㴫����ַ����ĳ���
	str = new char[len + 1];  //��C++������str����ռ�
	std::strcpy(str, s); //��s����ַ������Ƶ�str�
	num_stirngs++; //�ַ�������+1
}

String::String() { //Ĭ�Ϲ��캯��(defalut constructor)
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_stirngs;
}


String::String(const String& st) {
	num_stirngs++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}//copy constructor

String::~String() {
	--num_stirngs;
	delete[] str;
}


//overloaded operator methods(�������������)
String& String::operator=(const String& st) {
	//������ö���ͱ����ö���ĵ�ַһ�����򷵻ص��ö���
	if (this == &st) {
		return *this;
	}
	delete[]str; //����������ö����str�ڴ�
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}//��st��Ԫ�ظ�ֵ�����ö���

String& String::operator=(const char* s) {
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i) {
	return str[i];
}
const char& String::operator[](int i)const {
	return str[i];
}


//overloaded operator friends

bool operator<(const String& st1, const String& st2) {
	//strcmp(����1,����2),������1λ�ڵڶ�������ǰ,�÷�������һ����ֵ,�������1<����2
	return (std::strcmp(st1.str, st2.str) < 0);  
}

bool operator>(const String& st1, const String& st2) {
	return st2 < st1; //��st2<st1,����ֵΪ�棬�����st1����st2
}

bool operator==(const String& st1, const String& st2){
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st) {
	os << st.str;
	return os;
}

istream& operator>>(istream& is,String& st) {
	char temp[80]; //����һ��������СΪ80���ַ���
	is.get(temp,80); //�Ӽ����ϻ�ȡһ�����Ϊ80���ַ���
	if (is)
		st= temp;
	while (is && is.get() != '\n') {
		continue;
	}

	return is;
}