/**
 * This class describes MyScene behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include <fstream>
#include <sstream>

#include "level.h"

MyScene::MyScene() : PlatformLevel()
{
	// start the timer.
	t.start();
	this->addSprite("assets/BackGround.tga");
	this->position = Point2(512, 256);
	this->createTile("assets/CornerNormalLeft.tga", Point2(-460, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-332, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-214, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(-96, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(28, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(156, 400), Point2(1, 1));
	this->createTile("assets/MiddleNormal.tga", Point2(284, 400), Point2(1, 1));
	this->createTile("assets/CornerNormalRight.tga", Point2(302, 400), Point2(1, 1));
	// create a single instance of MyEntity in the middle of the screen.
	// the Sprite is added in Constructor of MyEntity.
	myplayer = new MyPlayer();
	myplayer->position = Point2(200, 305);
	myenemy = new MyEnemy();
	myenemy->position = Point2(SWIDTH/2, 313);
	
	// create the scene 'tree'
	// add myentity to this Scene as a child.
	this->addChild(myenemy);
	this->addChild(myplayer);


}


MyScene::~MyScene()
{
	// deconstruct and delete the Tree
	this->removeChild(myplayer);

	// delete myentity from the heap (there was a 'new' in the constructor)
	delete myplayer;

}

void MyScene::update(float deltaTime)
{
	// ###############################################################
	// Escape key stops the Scene
	// ###############################################################
	if (input()->getKeyUp(KeyCode::Escape)) {
		this->stop();
	}

	//camera()->position.x = myplayer->position.x + 100;
}
