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

/// @brief The MyEntity class is the Entity implementation.
class MyPlayer : public Entity
{
public:
	/// @brief Constructor
	MyPlayer();
	/// @brief Destructor
	virtual ~MyPlayer();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/* add your private declarations */

	Vector2 velocity;
	Vector2 acceleration;
	Vector2 gravity;
	float health;
	float speed;
	bool onGround;
};

#endif /* PLAY_H */
