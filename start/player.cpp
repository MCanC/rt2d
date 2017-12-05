/**
 * This class describes MyEntity behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "player.h"

MyPlayer::MyPlayer() : Entity()
{
	this->addSprite("assets/Player.tga");

	jumpheight = Point2(0, -1);
	velocity = Point2(1, 0);
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
		this->position -= velocity;
		this->rotation.y = 180 * DEG_TO_RAD;
	
	} 

	if (input()->getKeyDown(KeyCode::LeftShift)) {
		velocity.x += 2;
	}

	if (input()->getKey(KeyCode::D))
	{
		this->position += velocity;
		this->rotation.y = 0;
	}
	if (input()->getKey(KeyCode::Space))
	{
		this->position += jumpheight;
	}
}
