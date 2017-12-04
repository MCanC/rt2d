/**
 * This class describes MyEntity behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "player.h"

MyPlayer::MyPlayer() : Entity()
{
	this->addSprite("assets/Player.tga");

	jumpheight = 1;
	speed = 1;
	health = 3;
	gravity = 5;

}

MyPlayer::~MyPlayer()
{

}

void MyPlayer::update(float deltaTime)

{
	if (input()->getKey(KeyCode::A))
	{
		this->position.x -= speed;
		this->rotation.y = 180 * DEG_TO_RAD;
	
	} 

	if (input()->getKeyDown(KeyCode::LeftShift)) {
		speed += 2;
	}

	if (input()->getKey(KeyCode::D))
	{
		this->position.x += speed;
		this->rotation.y = 0;
	}
	if (input()->getKey(KeyCode::Space))
	{
		this->position.z += jumpheight;
	}
}
