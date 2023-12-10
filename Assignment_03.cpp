#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// '��ų'����ü�� �����Ѵ�.
// ���� ��ҷδ� �̸�, Ÿ��, ������, Ƚ���� �ִ�.
struct Skill
{
	string Name;
	string Type;
	int Damage;
	int Count;
};

// '���ϸ�'����ü�� �����Ѵ�.
// ���� ��ҷδ� �̸�, Ÿ��, HP, ��ų���� �ִ�.
// ��ų�� 4���� ����ü�� skills �迭�� ��Ҵ�.
struct Pokemon
{
	string Name;
	string Type;
	int HP;
	Skill skills[4];
};


// ù��° ���ϸ��� ���� ���� �� ǥ��â
// setw �Լ��� ���� ���� �����ϰ�, left�� ���� ����Ϸ��� ������ �������� �����ߴ�.
void frame1(Pokemon& Pokemon_1st, Pokemon& Pokemon_2nd, int count1[], int count2[])
{
	// ù��° �� ���
	cout << "+";
	for (int i = 0; i < 61; i++) {
		cout << "-";
	}
	cout << "+" << endl;
	// �̸�, �й�, ���� ���
	cout << "| " << left << setw(60) << "2023149002 RyuSeungMin Dept of A.I" << "|" << endl;
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;

	// ���ϸ� ����â
	// �̸�, Ÿ��, HP
	cout << "| " << left << setw(28) << Pokemon_1st.Name + " (*)" << " | " << left << setw(28) << Pokemon_2nd.Name << " |" << endl;
	cout << "| " << left << setw(28) << "Type: " + Pokemon_1st.Type << " | " << left << setw(28) << "Type: "+ Pokemon_2nd.Type << " |" << endl;
	cout << "| HP: " << left << setw(25) << int(Pokemon_1st.HP) << "| HP: " << left << setw(25) << int(Pokemon_2nd.HP) << "|" << endl;
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;

	// ��ų ����â
	// 0��° ��ų
	cout << "| " << left << setw(28) << "(0) " + Pokemon_1st.skills[0].Name << " | " << left << setw(28) << "(0) " + Pokemon_2nd.skills[0].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[0].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[0].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[0].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[0].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[0].Count)+"("+to_string(count1[0]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[0].Count) + "(" + to_string(count2[0]) + ")" << " |" << endl;

	// 1��° ��ų
	cout << "| " << left << setw(28) << "(1) " + Pokemon_1st.skills[1].Name << " | " << left << setw(28) << "(1) " + Pokemon_2nd.skills[1].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[1].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[1].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[1].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[1].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[1].Count) + "(" + to_string(count1[1]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[1].Count) + "(" + to_string(count2[1]) + ")" << " |" << endl;

	// 2��° ��ų
	cout << "| " << left << setw(28) << "(2) " + Pokemon_1st.skills[2].Name << " | " << left << setw(28) << "(2) " + Pokemon_2nd.skills[2].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[2].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[2].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[2].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[2].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[2].Count) + "(" + to_string(count1[2]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[2].Count) + "(" + to_string(count2[2]) + ")" << " |" << endl;

	// 3��° ��ų
	cout << "| " << left << setw(28) << "(3) " + Pokemon_1st.skills[3].Name << " | " << left << setw(28) << "(3) " + Pokemon_2nd.skills[3].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[3].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[3].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[3].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[3].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[3].Count) + "(" + to_string(count1[3]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[3].Count) + "(" + to_string(count2[3]) + ")" << " |" << endl;

	// ������ �� ���
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;
}

// �ι�° ���ϸ��� ���� ���� �� ǥ��â
// setw �Լ��� ���� ���� �����ϰ�, left�� ���� ����Ϸ��� ������ �������� �����ߴ�.
void frame2(Pokemon& Pokemon_1st, Pokemon& Pokemon_2nd, int count1[], int count2[])
{
	// ù��° �� ���
	cout << "+";
	for (int i = 0; i < 61; i++) {
		cout << "-";
	}
	cout << "+" << endl;
	// �̸�, �й�, ���� ���
	cout << "| " << left << setw(60) << "2023149002 RyuSeungMin Dept of A.I" << "|" << endl;
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;

	// ���ϸ� ����â
	// �̸�, Ÿ��, HP
	cout << "| " << left << setw(28) << Pokemon_1st.Name << " | " << left << setw(28) << Pokemon_2nd.Name + " (*)" << " |" << endl;
	cout << "| " << left << setw(28) << "Type: " + Pokemon_1st.Type << " | " << left << setw(28) << "Type: " + Pokemon_2nd.Type << " |" << endl;
	cout << "| HP: " << left << setw(25) << int(Pokemon_1st.HP) << "| HP: " << left << setw(25) << int(Pokemon_2nd.HP) << "|" << endl;
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;

	// ��ų ����â
	// 0��° ��ų
	cout << "| " << left << setw(28) << "(0) " + Pokemon_1st.skills[0].Name << " | " << left << setw(28) << "(0) " + Pokemon_2nd.skills[0].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[0].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[0].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[0].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[0].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[0].Count) + "(" + to_string(count1[0]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[0].Count) + "(" + to_string(count2[0]) + ")" << " |" << endl;

	// 1��° ��ų
	cout << "| " << left << setw(28) << "(1) " + Pokemon_1st.skills[1].Name << " | " << left << setw(28) << "(1) " + Pokemon_2nd.skills[1].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[1].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[1].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[1].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[1].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[1].Count) + "(" + to_string(count1[1]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[1].Count) + "(" + to_string(count2[1]) + ")" << " |" << endl;

	// 2��° ��ų
	cout << "| " << left << setw(28) << "(2) " + Pokemon_1st.skills[2].Name << " | " << left << setw(28) << "(2) " + Pokemon_2nd.skills[2].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[2].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[2].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[2].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[2].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[2].Count) + "(" + to_string(count1[2]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[2].Count) + "(" + to_string(count2[2]) + ")" << " |" << endl;

	// 3��° ��ų
	cout << "| " << left << setw(28) << "(3) " + Pokemon_1st.skills[3].Name << " | " << left << setw(28) << "(3) " + Pokemon_2nd.skills[3].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[3].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[3].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[3].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[3].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[3].Count) + "(" + to_string(count1[3]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[3].Count) + "(" + to_string(count2[3]) + ")" << " |" << endl;

	// ������ �� ���
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+";
	for (int i = 0; i < 30; i++) {
		cout << "-";
	}
	cout << "+" << endl;
}

int main()
{
	// ���ϸ� ����ü�� �����ϴ�.
	Pokemon Pikachu = { "Pikachu","Electric",35 };
	Pokemon Dratini = { "Dratini","Water",41 };
	Pokemon Eevee = { "Eevee","Normal",55 };
	Pokemon Charmander = { "Charmander","Fire",39 };
	Pokemon Palkia = { "Palkia","Water",90 };

	// �� ��ų�� �����Ѵ�.
	// �̸�, Ÿ��, ������, Ƚ���� �� ���� �����ߴ�.
	Skill Tackle = { "Tackle", "Normal",4,5 };
	Skill Glass_Knot = { "Glass knot", "Glass",8,5 };
	Skill Thunderbolt = { "Thunderbolt", "Electric",10,5 };
	Skill Megabolt = { "Megabolt", "Electric",15,3 };
	Pikachu.skills[0] = Tackle;
	Pikachu.skills[1] = Glass_Knot;
	Pikachu.skills[2] = Thunderbolt;
	Pikachu.skills[3] = Megabolt;

	// �̸�, Ÿ��, ������, Ƚ���� �� ���� �����ߴ�.
	Skill Wrap = { "Wrap", "Normal",4,10 };
	Skill Aqua_Tail = { "Aqua Tail", "Water",3,5 };
	Skill Water_Pulse = { "Water Pulse", "Water",13,2 };
	Skill Hyper_Beam = { "Hyper Beam", "Normal",20,1 };
	Dratini.skills[0] = Wrap;
	Dratini.skills[1] = Aqua_Tail;
	Dratini.skills[2] = Water_Pulse;
	Dratini.skills[3] = Hyper_Beam;

	// �̸�, Ÿ��, ������, Ƚ���� �� ���� �����ߴ�.
	Skill Sand_Attack = { "Sand Attack", "Ground",8,3 };
	Skill Bite = { "Bite", "Normal",12,3 };
	Skill Rain_Dance = { "Rain Dance", "Water",15,1 };
	Eevee.skills[0] = Tackle;
	Eevee.skills[1] = Sand_Attack;
	Eevee.skills[2] = Bite;
	Eevee.skills[3] = Rain_Dance;

	// �̸�, Ÿ��, ������, Ƚ���� �� ���� �����ߴ�.
	Skill Flamethrower = { "Flamethrower", "Fire",11,5 };
	Skill Dig = { "Dig", "Ground",7,5 };
	Skill Heat_Wave = { "Heat Wave", "Fire",14,5 };
	Charmander.skills[0] = Tackle;
	Charmander.skills[1] = Flamethrower;
	Charmander.skills[2] = Dig;
	Charmander.skills[3] = Heat_Wave;

	// �̸�, Ÿ��, ������, Ƚ���� �� ���� �����ߴ�.
	Skill Hydro_Pump = { "Hydro Pump", "Water",12,10 };
	Skill Earth_Power = { "Earth Power", "Ground",15,10 };
	Skill Surf = { "Surf", "Water",13,10 };
	Skill Spatial_Rend = { "Spatial Rend", "Normal",30,10 };
	Palkia.skills[0] = Hydro_Pump;
	Palkia.skills[1] = Earth_Power;
	Palkia.skills[2] = Surf;
	Palkia.skills[3] = Spatial_Rend;

	// �� ���ϸ��� ���ڷ� �����ϱ� ���ؼ�
	// 5������ ���ϸ� ����ü�� ����ü �迭�ȿ� �־���.
	Pokemon Pokemons[5] = { Pikachu, Dratini, Eevee, Charmander, Palkia };

	// ��Ʋ�� �� ���ϸ��� ��ȣ
	int a, b;

	// ��Ʋ �� �� ���ϸ��� �����Ѵ�.
	cout << "Choose a Pokemon(0~4): ";
	cin >> a;
	cout << "Choose another Pokemon(0~4): ";
	cin >> b;

	// ���� �� ���ϸ��� ���ٸ� ���� �޼����� ����ϰ�
	// ���α׷��� �����Ѵ�.
	if (a == b)
	{
		cout << "You have to choose Pokemons different from each other.";
		exit(1);
	}

	// ������ �� ���ϸ��� ���ο� �� ���� ����ü�� assign�Ѵ�.
	// �б� ���ϰ� �ϱ� ����
	Pokemon Pokemon_1st = Pokemons[a];
	Pokemon Pokemon_2nd = Pokemons[b];

	// �ʱ� ��ų Ƚ�� ������ ���� �ʱ갪�� ������ ���� ����
	int count1[4] = {}; 
	int count2[4] = {};
	for (int i = 0; i < 4; i++)
	{
		count1[i]= Pokemon_1st.skills[i].Count;
	}

	for (int i = 0; i < 4; i++)
	{
		count2[i] = Pokemon_2nd.skills[i].Count;
	}

	// ��Ʋ ���� â ���
	frame1(Pokemon_1st, Pokemon_2nd,count1, count2);


	// ��Ʋ ����
	// 100000�� �Ѱ�� �����Ͽ� �߰��� ������ �ʰ� �Ͽ���.
	for (int i = 1; i < 100000; i++)
	{
		
		// ����� ��ų ���ϱ�
		int use_skill;
		cout << "Choose a skill (0~3): ";
		cin >> use_skill;

		// �� ���ϸ��� �� �����ϱ�
		// �� ��° ���ϸ� ���� ù��° ���ϸ��� ��ų ���� efficiney_1�� ����
		string effeiciency_1 = "effective";
		if (Pokemon_1st.skills[use_skill].Type == "electric") {
			if (Pokemon_2nd.Type == "Ground" || Pokemon_2nd.Type == "Electric" || Pokemon_2nd.Type == "Glass") {
				effeiciency_1 = "not very effective";
			}
			else if (Pokemon_2nd.Type == "Water") {
				effeiciency_1 = "super effective";
			}
		}
		else if (Pokemon_1st.skills[use_skill].Type == "Water") {
			if (Pokemon_2nd.Type == "Water" || Pokemon_2nd.Type == "Glass") {
				effeiciency_1 = "not very effective";
			}
			else if (Pokemon_2nd.Type == "Ground" || Pokemon_2nd.Type == "Fire") {
				effeiciency_1 = "super effective";
			}
		}
		else if (Pokemon_1st.skills[use_skill].Type == "Fire") {
			if (Pokemon_2nd.Type == "Water" || Pokemon_2nd.Type == "Fire") {
				effeiciency_1 = "not very effective";
			}
			else if (Pokemon_2nd.Type == "Glass") {
				effeiciency_1 = "super effective";
			}
		}
		// ù ��° ���ϸ� ���� �ι�° ���ϸ��� ��ų ���� efficiney_2�� ����
		string effeiciency_2 = "effective";
		if (Pokemon_2nd.skills[use_skill].Type == "Electric") {
			if (Pokemon_1st.Type == "Ground" || Pokemon_1st.Type == "Electric" || Pokemon_1st.Type == "Glass") {
				effeiciency_2 = "not very effective";
			}
			else if (Pokemon_1st.Type == "Water") {
				effeiciency_2 = "super effective";
			}
		}
		else if (Pokemon_2nd.skills[use_skill].Type == "Water") {
			if (Pokemon_1st.Type == "Water" || Pokemon_1st.Type == "Glass") {
				effeiciency_2 = "not very effective";
			}
			else if (Pokemon_1st.Type == "Ground" || Pokemon_1st.Type == "Fire") {
				effeiciency_2 = "super effective";
			}
		}
		else if (Pokemon_2nd.skills[use_skill].Type == "Fire") {
			if (Pokemon_1st.Type == "Water" || Pokemon_1st.Type == "Fire") {
				effeiciency_2 = "not very effective";
			}
			else if (Pokemon_1st.Type == "Glass") {
				effeiciency_2 = "super effective";
			}
		}

		// ���� ���ʰ� ������ ���ϱ�
		// ù��° ���ϸ��� ������ ��
		if (i % 2 == 1)
		{
			// ��ų ��� ���� Ƚ���� ���Ҵ��� �˻��ϱ�
			if (Pokemon_1st.skills[use_skill].Count == 0)
			{
				cout << Pokemon_1st.Name << " failed to perform " << Pokemon_1st.skills[use_skill].Name << "." << endl << endl;
				frame2(Pokemon_1st, Pokemon_2nd, count1, count2);
				continue;
			}
			// ��ų ��� �ȳ� â ���
			else
			{
				cout << Pokemon_1st.Name << " used " << Pokemon_1st.skills[use_skill].Name << "." << endl;
				Pokemon_1st.skills[use_skill].Count--;
				cout << "The attack was " << effeiciency_1 << "." << endl << endl;

				// ���� �Ҹ��ϴٸ� �������� 3 ���ҽ�Ű��
				if (effeiciency_1 == "not very effective")
				{
					int Low_Damage = Pokemon_1st.skills[use_skill].Damage - 3;
					Pokemon_2nd.HP = Pokemon_2nd.HP - Low_Damage;
				}

				// ���� �����ϴٸ� �������� 5 ������Ű��
				else if (effeiciency_1 == "super effective")
				{
					int High_Damage = Pokemon_1st.skills[use_skill].Damage + 5;
					Pokemon_2nd.HP = Pokemon_2nd.HP - High_Damage;
				}

				// ���� ���� ��� ���� ��������ŭ ���ҽ�Ű��
				else
				{
					Pokemon_2nd.HP = Pokemon_2nd.HP - Pokemon_1st.skills[use_skill].Damage;
				}


				// HP�� 0���ϸ� ���� �����ϱ�
				// �ι�° ���ϸ��� �� ���
				if (Pokemon_2nd.HP <= 0)
				{
					cout << "===============================================================" << endl;
					cout << "Match Result: " << Pokemon_1st.Name << " defeats " << Pokemon_2nd.Name << endl;
					exit(1);
				}

				// ����â ���
				frame2(Pokemon_1st, Pokemon_2nd, count1, count2);
			}
			
		}

		// �ι�° ���ϸ��� ������ ��
		else if (i % 2 == 0)
		{
			// ��ų ��� ���� Ƚ���� ���Ҵ��� �˻��ϱ�
			if (Pokemon_2nd.skills[use_skill].Count == 0)
			{
				cout << Pokemon_2nd.Name << " failed to perform " << Pokemon_2nd.skills[use_skill].Name << "." << endl << endl;
				frame1(Pokemon_1st, Pokemon_2nd, count1, count2);
				continue;
			}
			// ��ų ��� �ȳ� â ���
			else
			{
				cout << Pokemon_2nd.Name << " used " << Pokemon_2nd.skills[use_skill].Name << "." << endl;
				Pokemon_2nd.skills[use_skill].Count--;
				cout << "The attack was " << effeiciency_2 << "." << endl << endl;

				// ���� �Ҹ��ϴٸ� �������� 3 ���ҽ�Ű��
				if (effeiciency_2 == "not very effective")
				{
					int Low_Damage = Pokemon_2nd.skills[use_skill].Damage - 3;
					Pokemon_1st.HP = Pokemon_1st.HP - Low_Damage;
				}

				// ���� �����ϴٸ� �������� 5 ������Ű��
				else if (effeiciency_2 == "super effective")
				{
					int High_Damage = Pokemon_2nd.skills[use_skill].Damage + 5;
					Pokemon_1st.HP = Pokemon_1st.HP - High_Damage;
				}

				// ���� ���� ��� ���� ��������ŭ ���ҽ�Ű��
				else
				{
					Pokemon_1st.HP = Pokemon_1st.HP - Pokemon_2nd.skills[use_skill].Damage;
				}

				// HP�� 0 ���ϰ� �Ǹ� ���� �����ϱ�
				// ù��° ���ϸ��� �� ���
				if (Pokemon_1st.HP <= 0)
				{
					cout << "===============================================================" << endl;
					cout << "Match Result: " << Pokemon_2nd.Name << " defeats " << Pokemon_1st.Name << endl;
					exit(1);
				}

				// ����â ���
				frame1(Pokemon_1st, Pokemon_2nd, count1, count2);
			}
			
		}

		
		
	}
	
}