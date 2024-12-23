
// #include<game-engine/main.h>
#include<SDL2/SDL.h>
#include<game-engine/GameObject.h>
// #include<game-engine/Animation.h>
#include<vector>
#include <Box2D/b2_fixture.h>
GameObject::GameObject(){};
GameObject::GameObject(float x, float y){
    this->type = 1;
    this->pos = {x,y};
    this->velocity = {0.0f,0.0f}; // Default velocity
    this->rect = {x,y,50,50}; //Default Rectangle
};
GameObject::GameObject(float x, float y, Sprite t, bool physicsEnabled){
    this->pos = {x,y};
    this->velocity = {0.0f,0.0f}; // Default velocity
    this->rect = {this->pos[0],this->pos[1],w,h};
    this->sprite = t;
};
GameObject::GameObject(b2Body* body){
    this->type = 1;
    this->velocity = {0.0f,0.0f}; // Default velocity
    this->body = body;
    this->rect = {body->GetPosition().x,body->GetPosition().y,100,100};
};
GameObject::GameObject(float x, float y,float w,float h, std::vector<int> c){
    this->color = c;
    this->type = 1;
    this->w = w;
    this->h = h;
    this->pos = {x,y};
    this->velocity = {0.0f,0.0f}; // Default velocity
    this->rect = {this->pos[0],this->pos[1],w,h};
};
void GameObject::changeX(float x){
    this->rect.x = x;
}
void GameObject::changeY(float y){
    this->rect.y = y;
}
void GameObject::setVel(std::vector<float> vel){
    this->velocity = vel;
}
void GameObject::setPos(std::vector<float> pos){
    this->pos = pos;
    updateRect();
}
void GameObject::move(std::vector<float> vec){
    this->pos[0] += vec[0];
    this->pos[1] += vec[1];
    updateRect();
}

void GameObject::updateRect(){
    this->rect = {this->body->GetPosition().x,this->body->GetPosition().y,100,100};
}