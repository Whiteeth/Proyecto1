/*
 * Ball.h
 *
 *  Created on: 29 de feb. de 2016
 *      Author: dilan
 */

#ifndef BALL_H_
#define BALL_H_

class Ball {
public:
	Ball(int x,int y,int size,int speed,int deap);
	virtual ~Ball();
private:
	int PosX;
	int PosY;
	int Size;
	int Speed;
	int Deap;

public:
	int get_PosX();
	int get_PosY();
	int get_Size();
	int get_Speed();
	int get_Deap();

	void set_PosX(int);
	void set_PosY(int);
	void set_Speed(int);
	void set_Deap(int);
};

#endif /* BALL_H_ */
