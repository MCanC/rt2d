
#include "enemy.h"

MyEnemy::MyEnemy() : Entity() {

	this->addSprite("assets/Enemy.tga");
	this->scale = Point2(1.5f,1.5f);
	speed = Vector2(1.0f, 0.0f);
	gravity = 1.0f;

}

MyEnemy::~MyEnemy() {

}

void MyEnemy::update(float deltaTime) {

	this->rotation.y = 180.0f * DEG_TO_RAD;
	this->position -= speed;
	
}
