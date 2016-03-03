/*
 * Paddle.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: dilan
 */

#ifndef PADDLE_H_
#define PADDLE_H_

class Paddle {
public:
	Paddle(int posX, int posY, int length, int width, int speed);
	virtual ~Paddle();
private:
	int PosX, PosY, Length, Width, Speed;
public:
	int get_PosX();
	int get_PosY();
	int get_Length();
	int get_Width();
	int get_Speed();

	void set_Speed(int);
	void set_PosX(int);
	void set_PosY(int);

};

#endif /* PADDLE_H_ */
