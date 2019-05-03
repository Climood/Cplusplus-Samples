#pragma once
#include<iostream>
#include<vector>
using namespace std;
struct STATS {
	int strenght=0, stamina=0, aguility=0;
};
//////////////////////////////////////////////////////////////////////////////////
class defCharacter {
public:
	STATS stats_player;
	virtual void lvl_up() = 0;
	virtual void info() = 0;
};
class Ork :public defCharacter {
public:
	Ork() {
		stats_player.aguility = 1;
		stats_player.stamina = 2;
		stats_player.strenght = 3;
	}
	void lvl_up() {
		cout << "def lvlup.\n";
		stats_player.strenght +=1;
	}
	void info() {
		cout << "def Orkinfo.\n";
		cout<<"str="<<stats_player.strenght<<endl;
	}
};
class Human :public defCharacter {
public:
	Human() {
		stats_player.aguility = 3;
		stats_player.stamina = 2;
		stats_player.strenght = 1;
	}
	void lvl_up() {
		cout << "def lvlup.\n";
		stats_player.aguility += 1;
	}
	void info() {
		cout << "def Humaninfo.\n";
		cout<<"agl="<<stats_player.aguility<<endl;
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Player {
public:
	defCharacter* ptr_char;
	Player(defCharacter* p){
		ptr_char = p;
	}
	void lvl_up() {
		ptr_char->lvl_up();
	}
	void info() {
		ptr_char->info();
	}
	~Player() {
		delete ptr_char;
	}
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
class defClass:public defCharacter {
public:
	defCharacter* def_player;
	virtual void lvl_up() = 0;
	virtual void info() = 0;
};
class Warrior :public defClass {
public:
	Warrior(defCharacter* p) {
		def_player = p;
		def_player->stats_player.aguility = 1;
		def_player->stats_player.stamina = 3;
		def_player->stats_player.strenght = 4;
	}
	void lvl_up() {
		cout << "War lvlup.\n";
		def_player->stats_player.strenght += 2;
	}
	void info() {
		cout << "def warinfo.\n";
		cout << "str=" << def_player->stats_player.strenght << endl;
	}
};