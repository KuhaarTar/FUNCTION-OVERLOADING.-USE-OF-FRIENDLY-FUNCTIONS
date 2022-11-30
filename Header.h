using namespace std;
#include <iostream>
#include <string>
#include <random>
class Fighters {
	friend class Fight;

public:
	string nameFirst;
	string nameSecond;
private:

	int healthFirst;
	string damagePerAttackFirst;


	int healthSecond;
	string  damagePerAttackSecond;
public:

	void setName(string n) {
		nameFirst = n;
	}
	void setHealth(int h) {
		healthFirst = h;
	}
	void setDamagePerAttack(string d) {
		damagePerAttackFirst = d;
	}
	string getName() {
		return nameFirst;
	}
	int getHealth() {
		return healthFirst;
	}
	string getDamagePerAttack() {
		return damagePerAttackFirst;
	}
	/*---------*/
	void setName1(string n) {
		nameSecond = n;
	}
	void setHealth1(int h) {
		healthSecond = h;
	}
	void setDamagePerAttack1(string d) {
		damagePerAttackSecond = d;
	}
	string getName1() {
		return nameSecond;
	}
	int getHealth1() {
		return healthSecond;
	}
	string getDamagePerAttack1() {
		return damagePerAttackSecond;
	}
};
class Fight {
public:
	string battle(Fighters value) {
		random_device random_device;
		mt19937 generator(random_device());
		uniform_int_distribution <> distribution(20, 40);
		int x = distribution(generator);
		int y = distribution(generator);

		while (value.healthFirst > 0 || value.healthSecond > 0) {
			int x = distribution(generator);
			int y = distribution(generator);

			value.healthFirst = value.healthFirst - x;
			value.healthSecond = value.healthSecond - y;
			cout << "\n Round: " << value.healthFirst << " " << value.healthSecond << endl;
			if (value.healthFirst <= 0) {
				cout << "Winner: ";
				return value.nameSecond;
				break;

			}
			if (value.healthSecond <= 0) {
				cout << "Winner: ";
				return value.nameFirst;
				break;
			}
			if (value.healthFirst == 0 && value.healthSecond == 0) {
				return "No one win";
				break;
			}
		}
	}
};
