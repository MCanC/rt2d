
#ifndef LEVEL_H
#define LEVEL_H

#include <rt2d/scene.h>

#include "player.h"
#include "enemy.h"
#include "platformlevel.h"

class Level : public PlatformLevel 
{
public:

	Level();

	virtual ~Level();

	virtual void update(float deltaTime);

	bool collideCheck(Entity* a, Entity*b);

private:

	MyPlayer* myplayer;
	MyEnemy* myenemy;

	Timer t;
};

#endif /* LEVEL_H */
