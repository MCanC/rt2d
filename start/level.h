/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file myscene.h
 *
 * @brief description of MyScene behavior.
 */

#ifndef LEVEL_H
#define LEVEL_H

#include <rt2d/scene.h>

#include "player.h"
#include "enemy.h"
#include "platformlevel.h"

/// @brief The MyScene class is the Scene implementation.
class MyScene : public PlatformLevel
{
public:
	/// @brief Constructor
	MyScene();
	/// @brief Destructor
	virtual ~MyScene();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/// @brief the rotating square in the middle of the screen
	MyPlayer* myplayer;
	MyEnemy* myenemy;
	/// @brief a Timer to rotate the color every n seconds
	Timer t;
};

#endif /* LEVEL_H */
