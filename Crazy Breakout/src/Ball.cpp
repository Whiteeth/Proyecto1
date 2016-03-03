/*
 * Ball.cpp
 *
 *  Created on: 29 de feb. de 2016
 *      Author: dilan
 */

#include "Ball.h"

//Constructor of class Ball
Ball::Ball(int x,int y,int size,int speed,int deap)
	:PosX(x), PosY(y), Size(size), Speed(speed), Deap(deap)
{
}

Ball::~Ball() {

}
// Gets' of the class Ball
int Ball::get_PosX()
{
	return PosX;
}

int Ball::get_PosY()
{
	return PosY;
}

int Ball::get_Deap()
{
	return Deap;
}

int Ball::get_Size()
{
	return Size;
}

int Ball::get_Speed()
{
	return Speed;
}

//Set's of the class Ball
void Ball::set_PosX(int posX){
	PosX=posX;
}
void Ball::set_PosY(int posY){
	PosY=posY;
}
void Ball::set_Deap(int deap){
	Deap=deap;
}
void Ball::set_Speed(int speed){
	Speed=speed;
}

