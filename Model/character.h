/**
 * Project Untitled
 */


#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "player.h"


class character: public player {
public: 
    int Health;
    float movement_speed;
    bool Player;
    int Location;
    int Face;
    int Row;
    int Col;
    
/**
 * @param helth
 * @param mvmt_spd
 * @param Playa
 * @param Loc
 * @param Facer
 * @param Rowd
 * @param Cold
 */
void character(int helth, float mvmt_spd, bool Playa, int Loc, int Facer, int Rowd, int Cold);
    
projectile shoot();
    
/**
 * @param & loc
 * @param &Rowd
 * @param &Cold
 * @param & faced
 */
void Move_Up(int & loc, int &Rowd, int &Cold, int & faced);
    
/**
 * @param & loc
 * @param &Rowd
 * @param &Cold
 * @param & faced
 */
void Move_Down(int & loc, int &Rowd, int &Cold, int & faced);
    
/**
 * @param & loc
 * @param &Rowd
 * @param &Cold
 * @param & faced
 */
void Move_Left(int & loc, int &Rowd, int &Cold, int & faced);
    
/**
 * @param & loc
 * @param &Rowd
 * @param &Cold
 * @param & faced
 */
void Move_Right(int & loc, int &Rowd, int &Cold, int & faced);
};

#endif //_CHARACTER_H