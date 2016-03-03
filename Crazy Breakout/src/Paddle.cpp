/*
 * Paddle.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: dilan
 */

#include "Paddle.h"

Paddle::Paddle(int posX, int posY, int length, int width, int speed)
	:PosX(posX), PosY(posY), Length(length), Width(width), Speed(speed)
{
}

Paddle::~Paddle() {
}

//Getters of Paddle
int Paddle::get_PosX(){
	return PosX;
}

int Paddle::get_PosY(){
	return PosY;
}

int Paddle::get_Length(){
	return Length;
}
int Paddle::get_Width(){
	return Width;
}

int Paddle::get_Speed(){
	return Speed;
}

//Setters of Paddle
void Paddle::set_PosX(int posX){
	PosX=posX;
}
void Paddle::set_PosY(int posY){
	PosY=posY;
}
void Paddle::set_Speed(int speed){
	Speed=speed;
}
