#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
	//	タイマーの生成
	timer_ = new MyTimer();

	//	タイムのラベル	***************************************************
	timeStr_ = String::createWithFormat("%.2", timer_->getTime());

	//	タイムの表示
	timeText_ = Label::createWithSystemFont(timeStr_->getCString(), "HiraKakuProN-W6", 36);
	timeText_->setPosition(Point(100, 500));
	timeText_->setString(timeStr_->getCString());
	addChild(timeText_, 11);

	Label* timeLabel = Label::createWithSystemFont("Time", "HiraKakuProN-W6", 36);
	timeLabel->setPosition(Vec2(timeText_->getPosition().x, timeText_->getPosition().y + 40));
	addChild(timeLabel, 11);
	//********************************************************************

	scheduleUpdate();

    return true;
}

void HelloWorld::update(float dt)
{
	//	カウントダウン
	if(timer_->getTime() > 0) timer_->countDown();

	//	タイム表示	***********************************
	timeStr_ = String::createWithFormat("%.2", timer_->getTime());
	timeText_->setString(timeStr_->getCString());
	//**************************************************


}