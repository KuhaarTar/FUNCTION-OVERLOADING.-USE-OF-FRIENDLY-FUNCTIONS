#include <iostream>
#include <string>
#include <random>
#include "Header.h"
using namespace std;


int main()
{	
	string n;
	Fight fight;
	Fighters fighter;
	
	fighter.setDamagePerAttack(" random: 20-40 ");
	fighter.setHealth(200);
	fighter.setName("Guts");

	fighter.setDamagePerAttack1( " random: 20-40 ");
	fighter.setHealth1(200);
	fighter.setName1("Griffith");
	

	cout << "Name:" << fighter.getName() << endl;
	cout << "Health:" << fighter.getHealth() << endl;
	cout << "DamagePerAttack:" << fighter.getDamagePerAttack() << endl;
	cout << "-------" << endl ;
	cout << "Name:" << fighter.getName1() << endl;
	cout << "Health:" << fighter.getHealth1() << endl;
	cout << "DamagePerAttack:" << fighter.getDamagePerAttack1() << endl;

	n=fight.battle(fighter);
	cout <<  n;
} 
