
/*  text-adventure.c
*
*  Author:   Richard A. Forth
*  Date:     2020-12-18
*  Does:     A basic text adventure game  || work in progress
*  Compiler: CodeBlocks
*  OS:       Windows 10
*
*
*  Map:
*
*
*                               +-----+
*                               |END  |
*                               +--+--+
* start                            ^
*                                  |                                     N
*   +       +---+       +--+       |                                     ^
*   |       |BM |  +--> |L1| +-----+                                     |
*   |       +-+-+       +--+                                        W <--+--> E
*   v         ^                                                          |
*             |            +-----------+                                 v
*  +-+        |            |  Five     |   +--+                          S
*  | | +------------------>+  small    +-->+K1|
*  +-+        |            |  goblins  |   +--+
*             |            +----+------+
*             v                 |
*           +-+-+               v
*           |SWD|            +--+-------+
*           +---+            |Armoury   |
*                            |Gun + Ammo|
*                            +----+-----+
*
*  Perfect runthrough:
*   1. Leave start room - East
*   2. In corridor, turn South, explore room, take sword.
*   3. Leave sword room - North, to the west is the start room, to the east is another corridor.
*   4. Turn East head towards room with five goblins
*   5. Using chance and hit points to deal damage, with sword giving bonus hit points, take out the five goblins
*   6. once defeated, there are two rooms, go straight ahead (EAST) and find a Key, K1
*   7. Return to the goblin chamber WEST, then take a SOUTH  turn into the armoury, grab armour, gun and bullets
*   8. return to the goblin chamber once more (NORTH), hang a WEST, and then a NORTH to face the Big Monster BM
*   9. BM delivers massive damage but this is offset by your armour and the gun delivers more damage than the sword
*  10. Through chance and hit points (you can still die) defeat BM, hang a left, unlock the door L1 with key K1, head to the exit.
*
*  Game ideas:
*   1. Though it is a small, closed world, the progress is not linear due to a sense of free will
*   2. Game mechanics must track location and direction of travel on map, probably with N,S,E,W  options menu systems for each location.
*   3. Initial health points to be decided, probably 10
*   4. Initial hit points for fist only to be decided, probably 1, with chance for miss and chance for block
*   5. Hit points for sword to be decided, probably 2, with chance for miss only with critical hit chance of +50% (3)
*   6. Hit points for gun to be decided, probably 6, with chance for miss only  with critical hit chance of +50% (9)
*   7. Health points for goblins to be decided, probably 3, one sucessful sword strike with critical hit kills a goblin
*   8. Hit points for how many damage a goblin does on a successful strike, again with chance to miss or block, probably 1
*   9. Health points for Big Monster to be decided, probably 18, three gunshots kills BM. or 2 with critical hit.
*  10. Hit points for BM to be decided, how much damage is dealt, with chance for miss only, probably 8, with critical hit chance (12)
*/

// includes
#include <stdio.h>

/* The closest thing we have in C to an object
*  (that I know of, as of this writing anyway)
*  is a struct, only structs dont have methods
*  or constructors etc, so this could get clunky.
*/

// List of Structs we need
// One for each room
// One for each of the 5 goblins
// One for the Big Monster
// One for each Chest in the game
