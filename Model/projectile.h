/**
 * Project Untitled
 */


#ifndef _PROJECTILE_H
#define _PROJECTILE_H

class projectile {
public: 
    int damage;
    int range;
    float cool_down;
    float proj_speed;
    int Shooter;
    int col;
    int row;
    
void Location_Check();
    
/**
 * @param &character target
 */
void Pain(void &character target);
    
/**
 * @param dmg
 * @param range
 * @param cool_down
 * @param proj_speed
 * @param Shooter
 */
void projectile(int dmg, int range, float cool_down, float proj_speed, int Shooter);
};

#endif //_PROJECTILE_H