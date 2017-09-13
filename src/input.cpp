#include "headers/input.h"

/*
 * keeps track of keyboard state
 */

//this function gets called at beginning of each new fram
// to reset keys that are no longer relevant

void Input::beginNewFrame(){
	this->_pressedKeys.clear();
	this->_releasedKeys.clear();
}

//gets called when a key is pressed
void Input::keyDownEvent(const SDL_Event& event){
	this->_pressedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = true;
}

//This gets called when a key is released
void Input::keyUpEvent(const SDL_Event &event){
	this->_releasedKeys[event.key.keysym.scancode] = true;
	this->_heldKeys[event.key.keysym.scancode] = false;
}

//check if a certain key was pressed during current frame
bool Input::wasKeyPressed(SDL_Scancode key){
	return this->_pressedKeys[key];
}

//check if certain key was released during current frame
bool Input::wasKeyReleased(SDL_Scancode key){
	return this->_releasedKeys[key];
}

//check if certain key is held during frame
bool Input::isKeyHeld(SDL_Scancode key){
	return this->_heldKeys[key];
}
