#pragma once

#include<iostream>
#include<vector>

struct EXP {
	int level = 0;
	int Exp = 0;
	int attack = 0;

	void display() {
		std::cout << "LevelPlayer:" << level<<std::endl;
		std::cout << "ExpPlayer:" << Exp<<std::endl;
		std::cout << "AttackPlayer" << attack << std::endl;
	}
};

///////////////////////////////////////////////////////////

class Exp {
public:
	EXP level;

	virtual void levelUp() = 0;
	virtual void Display() = 0;
};

class Ork : public Exp {
public:
	void levelUp() {
		std::cout << "level up" << std::endl;
		level.level += 1;
		level.Exp += 1000;
		level.attack += 50;
	}

	void Display() {
		std::cout << "Ork - ";
	}
};

class People : public Exp {
public:
	void levelUp() {
		std::cout << "level up" << std::endl;
		level.level += 1;
		level.Exp += 1000;
		level.attack += 20;
	}

	void Display() {
		std::cout << "Peole - ";
	}
};

///////////////////////////////////////////////////////////
class Perk {
public:
	Exp* s;
	virtual void display() = 0;
};

class Watch : public Perk {
public:
	Watch(Exp*l) { s = l; };
	void display() {
		std::cout << "WatchPErk" << std::endl;
		s->level.attack -= -50;
	}
};

class Strong : public Perk {
public:
	Strong(Exp* l) { s = l; };
	void display() {
		std::cout << "Strong" << std::endl;
		s->level.attack += 50;
	}
};

///////////////////////////////////////////////////////////

class Player {
private:
	std::vector<Perk*> perk;
	int count = 0;
public:
	Exp* level;

	Player(Exp* l) {
		level = l;
	}
	void levelUp() {
		level->levelUp();
	}

	void AddPerk(Perk* l) {
		perk.push_back(l);
		count++;
	}

	void DisplayPerk() {
		for (int i = 0; i < count; ++i) {
			perk[i]->display();
		}
	}

	void Display() {
		level->Display();
	}

	~Player() {
		delete level;
	}
};

///////////////////////////////////////////////////////

class Decor : public Exp {
public:
	Exp* type;
	virtual void levelUp() = 0;
	virtual void Display() = 0;
};

class OrkArcher : public Decor {
public:
	OrkArcher(Exp* l) {
		type = l;
	}

	void levelUp() {
		std::cout << "OrkArcher - ";
		type->levelUp();
	}

	void Display() {
		type->Display();
		type->level.Exp += 20000;
		type->level.level += 5;
		std::cout << "OrkArcher" << std::endl;
		type->level.display();
	}

	~OrkArcher() {
		delete type;
	}
};

class PeopleArcher : public Decor {
public:
	PeopleArcher(Exp* l) {
		type = l;
	}

	void levelUp() {
		std::cout << "PeopleArcher - ";
		type->levelUp();
	}

	void Display() {
		type->Display();
		type->level.Exp += 2000;
		type->level.level += 12;
		type->level.attack -= 5;
		std::cout << "PepleArcher" << std::endl;
		type->level.display();
	}

	~PeopleArcher() {
		delete type;
	}
};

class PeoplePaladin : public Decor {
public:
	PeoplePaladin(Exp* l) {
		type = l;
	}

	void levelUp() {
		std::cout << "PeoplePaladin - ";
		type->levelUp();
	}

	void Display() {
		type->Display();
		type->level.Exp += 2000;
		type->level.level += 12;
		std::cout << "PeoplePaladin" << std::endl;
		type->level.display();
	}

	~PeoplePaladin() {
		delete type;
	}
};
////////////////////////////////////////////////////////////////////