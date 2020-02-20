#include "Shroom.h"
#include "Framework/Vector.h"

Shroom::Shroom(sf::RenderWindow* hwnd, Input* in) {
	window = hwnd;
	input = in;
	shroomTexture.loadFromFile("gfx/MushroomTrans.png");
	setTexture(&shroomTexture);	
	
	scale = 200.0f; 
	gravity = sf::Vector2f(0, 9.8f) * scale;
	jumpVelocity = -100.f;
}

void Shroom::update(float dt) {
	velocity = sf::Vector2f(0, 980.f);
	move(velocity * dt);

	if (this->getPosition().y > window->getSize().y - this->getSize().y) {
		this->setPosition(this->getPosition().x, window->getSize().y - this->getSize().y);
	}
}

void Shroom::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::Space)) {
		velocity = sf::Vector2f(0, -1.f) * scale;
	}
}

