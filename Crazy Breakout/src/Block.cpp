/*
 * Block.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: dilan
 */

#include "Block.h"

//Block's constructor
Block::Block(int posX,int posY,int length,int width,int points, int endurance, int deap, int color)
	:PosX(posX), PosY(posY), Length(length), Width(width), Points(points), Endurance(endurance), Deap(deap), Color(color)
{

}

Block::~Block() {
}

//Getters of Block
int Block::get_PosX(){
	return PosX;
}

int Block::get_PosY(){
	return PosY;
}

int Block::get_Length(){
	return Length;
}

int Block::get_Width(){
	return Width;
}

int Block::get_Deap(){
	return Deap;
}

int Block::get_Endurance(){
	return Endurance;
}

int Block::get_Points(){
	return Points;
}

int Block::get_Color(){
	return Color;
}

//Setters of Block
void Block::set_Deap(int deap){
	Deap=deap;
}
