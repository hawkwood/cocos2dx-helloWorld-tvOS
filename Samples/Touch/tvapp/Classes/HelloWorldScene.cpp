#include "HelloWorldScene.h"

USING_NS_CC;

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
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    EventListenerTouchOneByOne *listener = EventListenerTouchOneByOne::create( );
    listener->setSwallowTouches( true );
    
    listener->onTouchBegan = CC_CALLBACK_2( HelloWorld::onTouchBegan, this );
    listener->onTouchMoved = CC_CALLBACK_2( HelloWorld::onTouchMoved, this );
    listener->onTouchEnded = CC_CALLBACK_2( HelloWorld::onTouchEnded, this );
    listener->onTouchCancelled = CC_CALLBACK_2( HelloWorld::onTouchCancelled, this );
    
    Director::getInstance( )->getEventDispatcher( )->addEventListenerWithSceneGraphPriority( listener, this );
    
    return true;
}

// called when the touch first begins
bool HelloWorld::onTouchBegan( cocos2d::Touch *touch, cocos2d::Event *event )
{
    log( "onTouchBegan x = %f, y = %f", touch->getLocation( ).x, touch->getLocation( ).y );
    
    return true; // true if the function wants to swallow the touch
}

// called when the user moves their finger
void HelloWorld::onTouchMoved( cocos2d::Touch *touch, cocos2d::Event *event )
{
    log( "onTouchMoved x = %f, y = %f", touch->getLocation( ).x, touch->getLocation( ).y );
}

// called when the user lifts their finger
void HelloWorld::onTouchEnded( cocos2d::Touch *touch, cocos2d::Event *event )
{
    log( "onTouchEnded x = %f, y = %f", touch->getLocation( ).x, touch->getLocation( ).y );
}

// called when the device goes to another application such as a phone call
void HelloWorld::onTouchCancelled( cocos2d::Touch *touch, cocos2d::Event *event )
{
    log( "onTouchCancelled x = %f, y = %f", touch->getLocation( ).x, touch->getLocation( ).y );
}