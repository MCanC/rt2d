/**
* Copyright 2015 Your Name <you@yourhost.com>
*
* @file myentity.h
*
* @brief description of MyEntity behavior.
*/

#ifndef ENEMY_H
#define ENEMY_H

#include <rt2d/entity.h>

/// @brief The MyEntity class is the Entity implementation.
class MyEnemy : public Entity
{
public:
	/// @brief Constructor
	MyEnemy();
	/// @brief Destructor
	virtual ~MyEnemy();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/* add your private declarations */

	Vector2 speed;
	int gravity;
};

#endif /* ENEMY_H */
#pragma once
