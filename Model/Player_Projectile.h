/**
 * Project Untitled
 */


#ifndef _PLAYER_PROJECTILE_H
#define _PLAYER_PROJECTILE_H

#include "projectile.h"


class Player_Projectile: public projectile {
public: 
    
static int Get_Shot_Count();
    
/**
 * @param dmg
 * @param range
 * @param cool_down
 * @param proj_speed
 * @param Shooter
 */
void projectile(int dmg, int range, float cool_down, float proj_speed, int Shooter);
    
void Operation1();
private: 
    static int Shot_count;
};

#endif //_PLAYER_PROJECTILE_H