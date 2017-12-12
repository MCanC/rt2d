/**
 * This class describes MyEntity behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include "player.h"

MyPlayer::MyPlayer() : Entity()
{
	this->addSprite("assets/Player.tga");

	velocity = Vector2(0, 0);
	acceleration = Vector2(0, 0);
	gravity = Vector2(0, 1);
	health = 3.0f;
	speed = 2.0f;
	onGround = true;
}

MyPlayer::~MyPlayer()
{

}

void MyPlayer::update(float deltaTime)

{
	velocity = Vector2(0, 0);
	if (input()->getKey(KeyCode::A)){
		this->position.x -= 1;
		this->rotation.y = 180 * DEG_TO_RAD;
	} 
	if (input()->getKey(KeyCode::D)){
		this->position += 1;
		this->rotation.y = 0;
	}
	if (input()->getKeyDown(KeyCode::LeftShift)) {
		velocity.x += speed;
	}
	if (input()->getKeyUp(KeyCode::LeftShift)) {
		velocity.x -= speed;
	}
	if (this->position.y + this->gravity.y * deltaTime < 305) {
		this->acceleration.y += this->gravity.y * deltaTime;
	}
	if (input()->getKeyDown(KeyCode::Space)) {
		this->acceleration.y -= 1;
	}
	else {
		this->position.y == 305;
	}
	this->velocity += acceleration;
	this->velocity.limit(2);
	this->position += this->velocity;

	std::cout << this->position << std::endl;
}