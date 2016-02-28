/*
 * Block.h
 *
 *  Created on: 28 de feb. de 2016
 *      Author: joao
 */

#ifndef BLOCK_H_
#define BLOCK_H_
#include <string>;

using namespace std;

class Block{

private:
	int PosX;
	int PosY;
	int Length;
	int Width;
	int Points;
	int Endurance;
	int Deap;
	string Color;


	Block(int PosX,int PosY,int Length,int Width,int Points,int Endurance,int Deap,string Color);
};





#endif /* BLOCK_H_ */
