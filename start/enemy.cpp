/**
* This class describes MyEntity behavior.
*
* Copyright 2015 Your Name <you@yourhost.com>
*/

#include "enemy.h"

MyEnemy::MyEnemy() : Entity()
{
	this->addSprite("assets/Enemy.tga");
	speed = 1;
	gravity = 10;


}

MyEnemy::~MyEnemy()
{

}

void MyEnemy::update(float deltaTime)

{
	
}
