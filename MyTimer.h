#pragma once
#include "cocos2d.h"

class MyTimer
{
private:
	//	時間
	float time_;
public:
	MyTimer(float time = 5.0f);
	~MyTimer();

	//	カウントダウン
	 void  countDown();
	//	表示
	const void show();
	//	ゲッター
	float getTime() { return time_; };
};

