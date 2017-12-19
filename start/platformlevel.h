#pragma once

#ifndef PLATFORMLEVEL_H
#define PLATFORMLEVEL_H

#include <vector>
#include <rt2d/scene.h>
#include <rt2d/text.h>
#include "tile.h"

class PlatformLevel : public Scene
{
public:
	PlatformLevel();
	virtual ~PlatformLevel();
	void createTile(std::string texturePath, Point2 position, Point2 scale);
	std::vector<Tile*> tiles;
private:

};



#endif // !PLATFORMLEVEL_H
