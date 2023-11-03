#pragma once
#include<SDL2/SDL.h>
#include<game-engine/main.h>
class GameObject{
    public:
        GameObject();
        GameObject(int x, int y);
        GameObject(int x, int y, SDL_Texture* texture,bool physicsEnabled);
        GameObject(int x, int y,int w,int h);
        // GameObject(int[2] coords, SDL_Texture* texure);
        // int[2] coords;
        int x;
        int y;
        int w;
        int h;
        SDL_Rect rect;

};