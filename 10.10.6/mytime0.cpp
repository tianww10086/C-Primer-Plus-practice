#include<iostream>
#include "head.h"
//�ṩͷ�ļ���ʵ��
/*���캯��*/
Move::Move() {
	x = 0;
	y = 0;
}
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showmove() const {
	std::cout << "x = " << x << ", " << "y = " << y << std::endl;
}

Move Move::add(const Move& m)  {
	x += m.x; //ԭ����Ϊ��m��x��ӵ����ö����x�У����Ǻ�����д��const���������޸�,�����Ұ�constɾ����
	return m;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}