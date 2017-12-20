/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file myentity.h
 *
 * @brief description of MyEntity behavior.
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <rt2d/entity.h>
#include <vector>
#include "inventory.h"

class MyPlayer : public Entity
{
public:

	MyPlayer();

	virtual ~MyPlayer();

	void jump(float deltaTime);
	void pull(float deltaTime);

	virtual void update(float deltaTime);

	MyInventory* myinventory;
	Vector2 velocity;
	Vector2 acceleration;
	Vector2 gravity;
	float health;
	float speed;
	float jumpheight;
	bool onGround;

private:

};

#endif /* PLAYER_H */
