#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
private:
    // called when the touch first begins
    bool onTouchBegan( cocos2d::Touch *touch, cocos2d::Event *event );
    // called when the user moves their finger
    void onTouchMoved( cocos2d::Touch *touch, cocos2d::Event *event );
    // called when the user lifts their finger
    void onTouchEnded( cocos2d::Touch *touch, cocos2d::Event *event );
    // called when the device goes to another application such as a phone call
    void onTouchCancelled( cocos2d::Touch *touch, cocos2d::Event *event );
};

#endif // __HELLOWORLD_SCENE_H__
