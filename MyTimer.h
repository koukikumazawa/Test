#pragma once
#include "cocos2d.h"

class MyTimer
{
private:
	//	����
	float time_;
public:
	MyTimer(float time = 5.0f);
	~MyTimer();

	//	�J�E���g�_�E��
	 void  countDown();
	//	�\��
	const void show();
	//	�Q�b�^�[
	float getTime() { return time_; };
};

