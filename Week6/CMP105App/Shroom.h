#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include <SFML/Graphics.hpp>

class Shroom : public GameObject
{
public:
	Shroom(sf::RenderWindow* hwnd, Input* in);
	void update(float dt);
	void handleInput(float dt);

protected:
	sf::RenderWindow* window;
	sf::Texture shroomTexture;
	sf::Vector2f gravity;
	float scale;
	float jumpVelocity;
};

