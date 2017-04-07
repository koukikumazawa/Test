#include "MyTimer.h"



MyTimer::MyTimer(float time)
{
	time_ = time;
}

MyTimer::~MyTimer()
{
}

void MyTimer::countDown()
{
	time_ -= 1.0 / 60.0;
}

const void MyTimer::show()
{
	//	cocos以外の物を使うときに使用
}