#include "platformlevel.h"

PlatformLevel::PlatformLevel() : Scene()
{

}

PlatformLevel::~PlatformLevel()
{
	for (int i = 0; i < Tiles.size(); i++) {
		Tile* tile = Tiles[i];
		this->removeChild(tile);
		Tiles[i] = NULL;
		delete tile;
	}
}

void PlatformLevel::createTile(std::string texturePath, Point2 position, Point2 scale) {
	Tile* tile = new Tile();
	tile->addSprite(std::string(texturePath));
	tile->position = position;
	tile->scale = scale;

	Tiles.push_back(tile);
	this->addChild(tile);
}