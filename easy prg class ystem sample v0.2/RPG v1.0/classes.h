#pragma once
#include<iostream>
#include<ctime>
#include<vector>
using namespace std;
//enum cls{�����,�������,������,�������,���,�����,������,������,���������};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////            COMMON STATS              ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
struct STATS {

	int stamina = 0, hp = 0, intellege = 0, strenght = 0,attack=0, lucky = 0, magick = 0, money = 0, lvl = 1, exp = 0;
	void display_stats() {
		cout << "���� ������� ���������:\n";
		cout << "������������:" << stamina << "\n";
		cout << "HP:" << hp << "\n";
		cout << "��:" << intellege << "\n";
		cout << "����:" << strenght << "\n";
		cout << "�����:" << attack << "\n";
		cout << "�����:" << lucky << "\n";
		cout << "����������:" << magick << "\n";
		cout << "����� �����:" << money << "\n";
		cout << "�������:" << lvl << "\n";
		cout << "����: " << exp << "/1000\n\n\n";
	}
	/*
	void add_exp(int num) {
		exp += num;
		if (exp >= 1000) {
			//lvlup(1); ���� ���������?????????????????
			exp -= 1000;
		}
	}
	void add_money(int num) { // ��� ����� ???? � ���� ����� ���� ��� ���� ��������� ���� 
		money += num;
	}
	*/
};


class WorkStats {
public:
	STATS stats;
	virtual void lvlup( int num)=0;
	virtual void display()=0;
};
class Ork :public WorkStats {
public:
	/*Ork() {
		setclas();
	}*/
	//void add_lvl(int num);
	void lvlup(int num){
		cout << "��������� ������� ��������� ������ �����.\n";
	}
	void display() {
		cout << " ���� = ��� \n";
	}
};
class Human :public WorkStats {
public:
	/*Human() {
		setclas();
	}*/
	//void add_lvl(int num);
	void lvlup(int num) {
		cout << "��������� ������� ��������� ������ �����.\n";
	}
	void display() {
		cout << " ���� = ������� \n";
	}
};
class Elf :public WorkStats {
public:
	/*Elf() {
		setclas();
	}*/
	//void add_lvl(int num);
	void lvlup(int num) {
		cout << "��������� ������� ��������� ������ ������.\n";
	}
	void display() {
		cout << " ���� = ���� \n";
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////           PERKS SYSTEM(����� ����)(<vector>)           ///////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Perks {
public:
	bool activated = false;
	WorkStats* Perk; // ��� ���������� ������ ������  �� ��� ��� ������� ???
	virtual void display() = 0;
	virtual void enable() = 0;
};
class Perk1 :public Perks {
public:
	Perk1(WorkStats* p) {
		Perk = p;
	}
	void display() {
		cout << "��� �������� �����1\n";
	}
	void enable() {
		if (!activated) {
		cout << "����������� ������ �����(������� +1 � ����)\n";
		Perk->stats.strenght += 1;
		activated = true;
	}
	}
};
class Perk2 :public Perks {
public:
	Perk2(WorkStats* p) {
		Perk = p;
	}
	void display() {
		cout << "��� �������� �����2\n";
	}
	void enable() {
		if (!activated) {
		cout << "����������� ������ �����(������� +2 � ����)\n";
		Perk->stats.strenght += 2;
		activated = true;
		}
	}
};
class Perk3 :public Perks {
public:
	Perk3(WorkStats* p) {
		Perk = p;
	}
	void display() {
		cout << "��� �������� �����3\n";
	}
	void enable() {
		if (!activated) {
			cout << "����������� ������ �����(������� +3 � ����)\n";
			Perk->stats.strenght += 3;
			activated = true;
		}
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////           ITEMS SYSTEM(����� ����)(<vector>)           ///////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Items {
public:
	bool equipped = false;
	WorkStats* item;
	virtual void info() = 0;
	virtual void equip() = 0;
};
class Item1 :public Items {
public:
	Item1(WorkStats* i) {
		item = i;
	}
	void info() {
		cout << "��� �������� ����1,��������� 1 � �������.\n";
	}
	void equip() {
		if (!equipped) {
			cout << "��������� 1 � �������.\n";
			item->stats.stamina += 1;
			equipped = true;
		}
	}
};
class Item2 :public Items {
public:
	Item2(WorkStats* i) {
		item = i;
	}
	void info() {
		cout << "��� �������� ����2,��������� 2 � �������.\n";
	}
	void equip() {
		if (!equipped) {
			cout << "��������� 2 � �������.\n";
			item->stats.stamina += 2;
			equipped = true;
		}
	}
};
class Item3 :public Items {
public:
	Item3(WorkStats* i) {
		item = i;
	}
	void info() {
		cout << "��� �������� ����3,��������� 3 � �������.\n";
	}
	void equip() {
		if (!equipped) {
		cout << "��������� 3 � �������.\n";
		item->stats.stamina += 3;
		equipped = true;
		}
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////           PLAYER CREATION            ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Player {
	vector<Perks*> perk;
	vector<Items*> item;
public:
	WorkStats* stats;
	Player(WorkStats* l) {
		stats = l;
	}
	void lvlup(int num) {
		stats->lvlup(num);
	}
	void addperk(Perks* p) {
		perk.push_back(p);
	}
	void display_perks() {
			for (int i = 0; i < perk.size(); i++) {
			cout << "���� " << i << " : ";
			perk[i]->display();
		}
	}
	void enable_perk(int i) {
		perk[i]->enable();
	}
	void enable_perk(char a) {
		if (a = 'A') {
			for (int i = 0; i < perk.size(); i++) {
				perk[i]->enable();
		} }
	}
	void additem(Items* i) {
		item.push_back(i);
	}
	void display_items() {
		for (int i = 0; i < item.size(); i++) {
			cout << "���� " << i << " : ";
			item[i]->info();
		}
	}
	void equip_item(int i) {
		item[i]->equip();
	}
	void Display() {
		stats->display();
	}
	/*
	void add_exp(int num) {
		stats->stats.add_exp(num);
	}
	void add_money(int num) {
		stats->stats.add_money(num);
	}*/
	void add_exp(int num) {
		stats->stats.exp += num;
		if (stats->stats.exp >= 1000) {
			//lvlup(1); ���� ���������?????????????????
			stats->stats.exp -= 1000;
		}
	}
	void add_money(int num) {  
		stats->stats.money += num;
	}
	~Player() {
		delete stats;
	}

/*	void add_exp(int num);
	virtual void add_lvl(int num) = 0;
	void add_money(int num);
	virtual void setclas()  = 0;
	void showclas();
	void showparametrs();
	*/
	};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////           CLASSES SYSTEM             ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Classes:public WorkStats {
public:
	WorkStats* classes;
	virtual void lvlup(int num) = 0;
	virtual void display() = 0;
};
class OrkShaman:public Classes {
public:
	OrkShaman(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 10; classes->stats.intellege = 10; classes->stats.strenght = 12; classes->stats.lucky = 8; classes->stats.magick = 16;
	}
	void lvlup(int num) {
		cout << "��������� ������ � ����������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 1 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 2 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 2 * num;
	}
	void display() {
		cout << "��� ��������.\n";
		classes->stats.display_stats();
	}
};
class OrkBerserk :public Classes {
public:
	OrkBerserk(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 16; classes->stats.intellege = 6; classes->stats.strenght = 20; classes->stats.lucky = 8; classes->stats.magick = 6;
	}
	void lvlup(int num ) {
		cout << "��������� ������ � ������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 2 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 2 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� ����������.\n";
		classes->stats.display_stats();
	}
};
class OrkRasist :public Classes {
public:
	OrkRasist(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 10; classes->stats.intellege = 20; classes->stats.strenght = 12; classes->stats.lucky = 8; classes->stats.magick = 6;
	}
	void lvlup(int num ) {
		cout << "��������� ������ � �����������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 1 * num; classes->stats.intellege += 2 * num; classes->stats.strenght += 2 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� ���������.\n";
		classes->stats.display_stats();
	}
};
class HumanPaladin :public Classes {
public:
	HumanPaladin(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 12; classes->stats.intellege = 12; classes->stats.strenght = 14; classes->stats.lucky = 10; classes->stats.magick = 8;
	}
	void lvlup(int num) {
		cout << "��������� ������ � ����������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 1 * num; classes->stats.intellege += 2 * num; classes->stats.strenght += 2 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� ��������������.\n";
		classes->stats.display_stats();
	}
};
class HumanMage :public Classes {
public:
	HumanMage(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 6; classes->stats.intellege = 16; classes->stats.strenght = 6; classes->stats.lucky = 10; classes->stats.magick = 18;
	}
	void lvlup(int num ) {
		cout << "��������� ������ � ������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 1 * num; classes->stats.intellege += 2 * num; classes->stats.strenght += 1 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 2 * num;
	}
	void display() {
		cout << "��� ����������.\n";
		classes->stats.display_stats();
	}
};
class HumanEvrei :public Classes {
public:
	HumanEvrei(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 8; classes->stats.intellege = 8; classes->stats.strenght = 8; classes->stats.lucky = 26; classes->stats.magick = 6;

	}
	void lvlup(int num ) {
		cout << "��������� ������ � �������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 1 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 1 * num; classes->stats.lucky += 3 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� ������������.\n";
		classes->stats.display_stats();
	}
};
class ElfArcher :public Classes {
public:
	ElfArcher(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 20; classes->stats.intellege = 10; classes->stats.strenght = 8; classes->stats.lucky = 12; classes->stats.magick = 6;
	}
	void lvlup(int num ) {
		cout << "��������� ������ � ������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 2 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 1 * num; classes->stats.lucky += 2 * num; classes->stats.magick += 2 * num;
	}
	void display() {
		cout << "��� ����������.\n";
		classes->stats.display_stats();
	}
};
class ElfKiller :public Classes {
public:
	ElfKiller(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 16; classes->stats.intellege = 12; classes->stats.strenght = 14; classes->stats.lucky = 8; classes->stats.magick = 6;
	}
	void lvlup(int num ) {
		cout << "��������� ������ � �����������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 2 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 1 * num; classes->stats.lucky += 2 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� ����������.\n";
		classes->stats.display_stats();
	}
};
class ElfOstroyhi :public Classes {
public:
	ElfOstroyhi(WorkStats* c) {
		classes = c;
		classes->stats.stamina = 12; classes->stats.intellege = 8; classes->stats.strenght = 20; classes->stats.lucky = 10; classes->stats.magick = 6;

	}
	void lvlup(int num ) {
		cout << "��������� ������ � ���������������\n";
		classes->stats.lvl += num;
		classes->stats.stamina += 2 * num; classes->stats.intellege += 1 * num; classes->stats.strenght += 2 * num; classes->stats.lucky += 1 * num; classes->stats.magick += 1 * num;
	}
	void display() {
		cout << "��� �������������.\n";
		classes->stats.display_stats();
	}
};
