#pragma once
#ifndef MONEXAMINE_H
#define MONEXAMINE_H

class monster;

namespace monexamine
{
bool pet_menu( monster &z );
bool mech_hack( monster &z );
bool pay_bot( monster &z );
void remove_battery( monster &z );
void insert_battery( monster &z );
void swap( monster &z );
void push( monster &z );
void rename_pet( monster &z );
void attach_bag_to( monster &z );
void dump_items( monster &z );
bool give_items_to( monster &z );
int pet_armor_pos( monster &z );
bool add_armor( monster &z );
void remove_armor( monster &z );
void remove_harness( monster &z );
void play_with( monster &z );
void kill_zslave( monster &z );
void tie_or_untie( monster &z );
void mount_pet( monster &z );
void attach_or_remove_saddle( monster &z );
void maid_stay_or_follow( monster &z );
/*
*Manages the milking and milking cool down of monsters.
*Milked item uses starting_ammo, where ammo type is the milked item
*and amount the times per day you can milk the monster.
*/
void milk_source( monster &source_mon );
} // namespace monexamine
#endif
