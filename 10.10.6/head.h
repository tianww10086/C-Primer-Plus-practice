#include<iostream>
#include<string>
#include <ostream>

#ifndef MYTIME0_H0
#define MYTIME0_H0
class Move {
	double x;
	double y;
public:
	Move();
	Move(double a = 0, double b = 0); /*����x and y ��ֵ*/
	void showmove() const;  /*���Move�Ĳ���*/
	Move add(const Move& m); 
	void reset(double a = 0, double b = 0);
};

#endif