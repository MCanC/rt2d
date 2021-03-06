
#include "player.h"

MyPlayer::MyPlayer() : Entity() {

	this->addSprite("assets/Player.tga");
	velocity = Vector2(0, 0);
	acceleration = Vector2(0, 0);
	gravity = Vector2(0, 1);
	health = 3.0f;
	speed = 1.0f;
	jumpheight = 1.0f;
	onGround = true;

	myinventory = new MyInventory();
}

MyPlayer::~MyPlayer() {

}

void MyPlayer::jump(float deltaTime) {
	if (input()->getKeyDown(KeyCode::Space)) {
		this->acceleration.y -= jumpheight;
	}
}

void MyPlayer::pull(float deltaTime) {
	if (this->position.y + this->gravity.y * deltaTime < 305) {

		this->acceleration.y += this->gravity.y * deltaTime;

		std::cout << "Yo, gravity is pulling you" << std::endl;
	}

}

void MyPlayer::update(float deltaTime) {

	pull(deltaTime);
	velocity = Vector2(0, 0);
	if (input()->getKey(KeyCode::A)){
		this->position.x -= speed;
		this->rotation.y = 180 * DEG_TO_RAD;
	} 
	if (input()->getKey(KeyCode::D)){
		this->position.x += speed;
		this->rotation.y = 0;
	}
	if (onGround == true) {
		jump(deltaTime);
		velocity.y = 0;
	}
	else {

	}

	this->velocity += acceleration;
	this->velocity.limit(1);
	this->position += this->velocity;

	std::cout << this->position << std::endl;
	
}