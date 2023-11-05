#include<game-engine/main.h>
//#include<SDL2/SDL.h>

Animation::Animation(const char* file_path, SDL_Renderer* renderer, int frames, int animation_speed){
	SDL_Rect source;
    this->frame_count = frames;
	this->source.x = (w/frame_count) * this->animation_current_frame; // NEEDS TO BE UPDATED
	this->source.y = 0;
	this->source.w = w/this->frame_count;
	this->source.h = h;

	SDL_Rect dest;
	this->dest.x = 100; // TEMP VALUES, NEED TO BE VARIABLES
	this->dest.y = 100;
	this->dest.w = (w/this->frame_count) * 2;
	this->dest.h = h * 2;

	this->animation_speed = animation_speed; // Default Speed is 150 milliseconds
};

void Animation::setAnimationSpeed(int s){
	// Sets the amount of time each frame of a sprite is displayed for
	// The time is measured in milliseconds
	this->animation_speed  = s;
}