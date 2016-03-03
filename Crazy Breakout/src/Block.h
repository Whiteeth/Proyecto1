/*
 * Block.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: dilan
 */

#ifndef BLOCK_H_
#define BLOCK_H_

class Block {
public:
	Block(int posX,int posY,int length,int width,int points, int endurance, int deap, int color);
	virtual ~Block();
private:
	int PosX;
	int PosY;
	int Length;
	int Width;
	int Points;
	int Endurance;
	int Deap;
	int Color;
public:
	int get_PosX();
	int get_PosY();
	int get_Length();
	int get_Width();
	int get_Points();
	int get_Endurance();
	int get_Deap();
	int get_Color();

	void set_Deap(int);

};

#endif /* BLOCK_H_ */
