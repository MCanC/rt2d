/**
* This class describes MyEntity behavior.
*
* Copyright 2015 Your Name <you@yourhost.com>
*/

#include "enemy.h"

MyEnemy::MyEnemy() : Entity()
{
	this->addSprite("assets/Enemy.tga");
	this->scale = Point2(1.5f,1.5f);
	speed = Point2(1, 0);
	gravity = 10;


}

MyEnemy::~MyEnemy()
{

}

void MyEnemy::update(float deltaTime)

{
	this->rotation.y = 180 * DEG_TO_RAD;
	this->position -= speed;
	
}
