/**
 * Project Untitled
 */


#include "projectile.h"

/**
 * projectile implementation
 */


/**
 * @return void
 */
void projectile::Location_Check() {
    if (presence[row][col] == true)
    {
        //need a getter for a character object, so I created yet another array (this time an array of character addresses)
        character* temp;
        target = characterLoc[row][col];
        Pain(target);
    }
    return;
}

/**
 * @param &character target
 * @return void
 */
void projectile::Pain(void &character target) {
    if (Shooter == 1 && target.player == false) //shooter being 1 means player shot it and it checks if it hit an enemy
    {
        target.health -= damage; //a canned damage value
    }
    else if (Shooter == 2 && target.player == true) //shooter being 2 means enemy shot it and it checks if it hit the player
    {
        target.health -= damage; //a canned damage value
    }
    if (target.health <= 0)
    {
        delete target;
    }
    return;
}

/**
 * @param dmg
 * @param range
 * @param cool_down
 * @param proj_speed
 * @param Shooter
 */
void projectile::projectile(int dmg, int range, float cool_down, float proj_speed, int Shooter) {
    damage = dmg;
    this->range = range;
    this->cool_down = cool_down;
    this->proj_speed = proj_speed;
    this->Shooter = Shooter;
}