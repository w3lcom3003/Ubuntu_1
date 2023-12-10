#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// '스킬'구조체를 정의한다.
// 구성 요소로는 이름, 타입, 데미지, 횟수가 있다.
struct Skill
{
	string Name;
	string Type;
	int Damage;
	int Count;
};

// '포켓몬'구조체를 정의한다.
// 구성 요소로는 이름, 타입, HP, 스킬들이 있다.
// 스킬은 4개의 구조체를 skills 배열에 담았다.
struct Pokemon
{
	string Name;
	string Type;
	int HP;
	Skill skills[4];
};


// 첫번째 포켓몬의 공격 차례 때 표시창
// setw 함수를 통해 폭을 고정하고, left를 통해 출력하려는 정보를 왼쪽으로 정렬했다.
void frame1(Pokemon& Pokemon_1st, Pokemon& Pokemon_2nd, int count1[], int count2[])
{
	// 첫번째 줄 출력
	cout << "+";
	for (int i = 0; i < 61; i++) {
		cout << "-";
	}
	cout << "+" << endl;
	// 이름, 학번, 전공 출력
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

	// 포켓몬 설명창
	// 이름, 타입, HP
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

	// 스킬 설명창
	// 0번째 스킬
	cout << "| " << left << setw(28) << "(0) " + Pokemon_1st.skills[0].Name << " | " << left << setw(28) << "(0) " + Pokemon_2nd.skills[0].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[0].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[0].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[0].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[0].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[0].Count)+"("+to_string(count1[0]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[0].Count) + "(" + to_string(count2[0]) + ")" << " |" << endl;

	// 1번째 스킬
	cout << "| " << left << setw(28) << "(1) " + Pokemon_1st.skills[1].Name << " | " << left << setw(28) << "(1) " + Pokemon_2nd.skills[1].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[1].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[1].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[1].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[1].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[1].Count) + "(" + to_string(count1[1]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[1].Count) + "(" + to_string(count2[1]) + ")" << " |" << endl;

	// 2번째 스킬
	cout << "| " << left << setw(28) << "(2) " + Pokemon_1st.skills[2].Name << " | " << left << setw(28) << "(2) " + Pokemon_2nd.skills[2].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[2].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[2].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[2].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[2].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[2].Count) + "(" + to_string(count1[2]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[2].Count) + "(" + to_string(count2[2]) + ")" << " |" << endl;

	// 3번째 스킬
	cout << "| " << left << setw(28) << "(3) " + Pokemon_1st.skills[3].Name << " | " << left << setw(28) << "(3) " + Pokemon_2nd.skills[3].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[3].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[3].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[3].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[3].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[3].Count) + "(" + to_string(count1[3]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[3].Count) + "(" + to_string(count2[3]) + ")" << " |" << endl;

	// 마지막 줄 출력
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

// 두번째 포켓몬의 공격 차례 때 표시창
// setw 함수를 통해 폭을 고정하고, left를 통해 출력하려는 정보를 왼쪽으로 정렬했다.
void frame2(Pokemon& Pokemon_1st, Pokemon& Pokemon_2nd, int count1[], int count2[])
{
	// 첫번째 줄 출력
	cout << "+";
	for (int i = 0; i < 61; i++) {
		cout << "-";
	}
	cout << "+" << endl;
	// 이름, 학번, 전공 출력
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

	// 포켓몬 설명창
	// 이름, 타입, HP
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

	// 스킬 설명창
	// 0번째 스킬
	cout << "| " << left << setw(28) << "(0) " + Pokemon_1st.skills[0].Name << " | " << left << setw(28) << "(0) " + Pokemon_2nd.skills[0].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[0].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[0].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[0].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[0].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[0].Count) + "(" + to_string(count1[0]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[0].Count) + "(" + to_string(count2[0]) + ")" << " |" << endl;

	// 1번째 스킬
	cout << "| " << left << setw(28) << "(1) " + Pokemon_1st.skills[1].Name << " | " << left << setw(28) << "(1) " + Pokemon_2nd.skills[1].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[1].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[1].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[1].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[1].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[1].Count) + "(" + to_string(count1[1]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[1].Count) + "(" + to_string(count2[1]) + ")" << " |" << endl;

	// 2번째 스킬
	cout << "| " << left << setw(28) << "(2) " + Pokemon_1st.skills[2].Name << " | " << left << setw(28) << "(2) " + Pokemon_2nd.skills[2].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[2].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[2].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[2].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[2].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[2].Count) + "(" + to_string(count1[2]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[2].Count) + "(" + to_string(count2[2]) + ")" << " |" << endl;

	// 3번째 스킬
	cout << "| " << left << setw(28) << "(3) " + Pokemon_1st.skills[3].Name << " | " << left << setw(28) << "(3) " + Pokemon_2nd.skills[3].Name << " |" << endl;
	cout << "| " << left << setw(28) << "    - Type: " + Pokemon_1st.skills[3].Type << " | " << left << setw(28) << "    - Type: " + Pokemon_2nd.skills[3].Type << " |" << endl;
	cout << "| " << left << setw(28) << "    - Damage: " + to_string(Pokemon_1st.skills[3].Damage) << " | " << left << setw(28) << "    - Damage: " + to_string(Pokemon_2nd.skills[3].Damage) << " |" << endl;
	cout << "| " << left << setw(28) << "    - Count: " + to_string(Pokemon_1st.skills[3].Count) + "(" + to_string(count1[3]) + ")" << " | " << left << setw(28) << "    - Count: " + to_string(Pokemon_2nd.skills[3].Count) + "(" + to_string(count2[3]) + ")" << " |" << endl;

	// 마지막 줄 출력
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
	// 포켓몬 구조체를 선언하다.
	Pokemon Pikachu = { "Pikachu","Electric",35 };
	Pokemon Dratini = { "Dratini","Water",41 };
	Pokemon Eevee = { "Eevee","Normal",55 };
	Pokemon Charmander = { "Charmander","Fire",39 };
	Pokemon Palkia = { "Palkia","Water",90 };

	// 각 스킬을 선언한다.
	// 이름, 타입, 데미지, 횟수를 한 번에 선언했다.
	Skill Tackle = { "Tackle", "Normal",4,5 };
	Skill Glass_Knot = { "Glass knot", "Glass",8,5 };
	Skill Thunderbolt = { "Thunderbolt", "Electric",10,5 };
	Skill Megabolt = { "Megabolt", "Electric",15,3 };
	Pikachu.skills[0] = Tackle;
	Pikachu.skills[1] = Glass_Knot;
	Pikachu.skills[2] = Thunderbolt;
	Pikachu.skills[3] = Megabolt;

	// 이름, 타입, 데미지, 횟수를 한 번에 선언했다.
	Skill Wrap = { "Wrap", "Normal",4,10 };
	Skill Aqua_Tail = { "Aqua Tail", "Water",3,5 };
	Skill Water_Pulse = { "Water Pulse", "Water",13,2 };
	Skill Hyper_Beam = { "Hyper Beam", "Normal",20,1 };
	Dratini.skills[0] = Wrap;
	Dratini.skills[1] = Aqua_Tail;
	Dratini.skills[2] = Water_Pulse;
	Dratini.skills[3] = Hyper_Beam;

	// 이름, 타입, 데미지, 횟수를 한 번에 선언했다.
	Skill Sand_Attack = { "Sand Attack", "Ground",8,3 };
	Skill Bite = { "Bite", "Normal",12,3 };
	Skill Rain_Dance = { "Rain Dance", "Water",15,1 };
	Eevee.skills[0] = Tackle;
	Eevee.skills[1] = Sand_Attack;
	Eevee.skills[2] = Bite;
	Eevee.skills[3] = Rain_Dance;

	// 이름, 타입, 데미지, 횟수를 한 번에 선언했다.
	Skill Flamethrower = { "Flamethrower", "Fire",11,5 };
	Skill Dig = { "Dig", "Ground",7,5 };
	Skill Heat_Wave = { "Heat Wave", "Fire",14,5 };
	Charmander.skills[0] = Tackle;
	Charmander.skills[1] = Flamethrower;
	Charmander.skills[2] = Dig;
	Charmander.skills[3] = Heat_Wave;

	// 이름, 타입, 데미지, 횟수를 한 번에 선언했다.
	Skill Hydro_Pump = { "Hydro Pump", "Water",12,10 };
	Skill Earth_Power = { "Earth Power", "Ground",15,10 };
	Skill Surf = { "Surf", "Water",13,10 };
	Skill Spatial_Rend = { "Spatial Rend", "Normal",30,10 };
	Palkia.skills[0] = Hydro_Pump;
	Palkia.skills[1] = Earth_Power;
	Palkia.skills[2] = Surf;
	Palkia.skills[3] = Spatial_Rend;

	// 각 포켓몬을 숫자로 구분하기 위해서
	// 5마리의 포켓몬 구조체를 구조체 배열안에 넣었다.
	Pokemon Pokemons[5] = { Pikachu, Dratini, Eevee, Charmander, Palkia };

	// 배틀할 두 포켓몬의 번호
	int a, b;

	// 배틀 할 두 포켓몬을 선택한다.
	cout << "Choose a Pokemon(0~4): ";
	cin >> a;
	cout << "Choose another Pokemon(0~4): ";
	cin >> b;

	// 만약 두 포켓몬이 같다면 오류 메세지를 출력하고
	// 프로그램을 종료한다.
	if (a == b)
	{
		cout << "You have to choose Pokemons different from each other.";
		exit(1);
	}

	// 선택한 두 포켓몬을 새로운 두 개의 구조체에 assign한다.
	// 읽기 편하게 하기 위함
	Pokemon Pokemon_1st = Pokemons[a];
	Pokemon Pokemon_2nd = Pokemons[b];

	// 초기 스킬 횟수 저장을 위해 초깃값을 저장할 변수 생성
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

	// 배틀 시작 창 출력
	frame1(Pokemon_1st, Pokemon_2nd,count1, count2);


	// 배틀 시작
	// 100000을 한계로 설정하여 중간에 끊기지 않게 하였다.
	for (int i = 1; i < 100000; i++)
	{
		
		// 사용할 스킬 정하기
		int use_skill;
		cout << "Choose a skill (0~3): ";
		cin >> use_skill;

		// 두 포켓몬의 상성 결정하기
		// 두 번째 포켓몬에 대한 첫번째 포켓몬의 스킬 상성을 efficiney_1에 저장
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
		// 첫 번째 포켓몬에 대한 두번째 포켓몬의 스킬 상성을 efficiney_2에 저장
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

		// 공격 차례가 누군지 정하기
		// 첫번째 포켓몬이 공격할 때
		if (i % 2 == 1)
		{
			// 스킬 사용 가능 횟수가 남았는지 검사하기
			if (Pokemon_1st.skills[use_skill].Count == 0)
			{
				cout << Pokemon_1st.Name << " failed to perform " << Pokemon_1st.skills[use_skill].Name << "." << endl << endl;
				frame2(Pokemon_1st, Pokemon_2nd, count1, count2);
				continue;
			}
			// 스킬 사용 안내 창 출력
			else
			{
				cout << Pokemon_1st.Name << " used " << Pokemon_1st.skills[use_skill].Name << "." << endl;
				Pokemon_1st.skills[use_skill].Count--;
				cout << "The attack was " << effeiciency_1 << "." << endl << endl;

				// 상성이 불리하다면 데미지를 3 감소시키기
				if (effeiciency_1 == "not very effective")
				{
					int Low_Damage = Pokemon_1st.skills[use_skill].Damage - 3;
					Pokemon_2nd.HP = Pokemon_2nd.HP - Low_Damage;
				}

				// 상성이 유리하다면 데미지를 5 증가시키기
				else if (effeiciency_1 == "super effective")
				{
					int High_Damage = Pokemon_1st.skills[use_skill].Damage + 5;
					Pokemon_2nd.HP = Pokemon_2nd.HP - High_Damage;
				}

				// 상성이 없는 경우 원래 데미지만큼 감소시키기
				else
				{
					Pokemon_2nd.HP = Pokemon_2nd.HP - Pokemon_1st.skills[use_skill].Damage;
				}


				// HP가 0이하면 게임 종료하기
				// 두번째 포켓몬이 진 경우
				if (Pokemon_2nd.HP <= 0)
				{
					cout << "===============================================================" << endl;
					cout << "Match Result: " << Pokemon_1st.Name << " defeats " << Pokemon_2nd.Name << endl;
					exit(1);
				}

				// 상태창 출력
				frame2(Pokemon_1st, Pokemon_2nd, count1, count2);
			}
			
		}

		// 두번째 포켓몬이 공격할 때
		else if (i % 2 == 0)
		{
			// 스킬 사용 가능 횟수가 남았는지 검사하기
			if (Pokemon_2nd.skills[use_skill].Count == 0)
			{
				cout << Pokemon_2nd.Name << " failed to perform " << Pokemon_2nd.skills[use_skill].Name << "." << endl << endl;
				frame1(Pokemon_1st, Pokemon_2nd, count1, count2);
				continue;
			}
			// 스킬 사용 안내 창 출력
			else
			{
				cout << Pokemon_2nd.Name << " used " << Pokemon_2nd.skills[use_skill].Name << "." << endl;
				Pokemon_2nd.skills[use_skill].Count--;
				cout << "The attack was " << effeiciency_2 << "." << endl << endl;

				// 상성이 불리하다면 데미지를 3 감소시키기
				if (effeiciency_2 == "not very effective")
				{
					int Low_Damage = Pokemon_2nd.skills[use_skill].Damage - 3;
					Pokemon_1st.HP = Pokemon_1st.HP - Low_Damage;
				}

				// 상성이 유리하다면 데미지를 5 증가시키기
				else if (effeiciency_2 == "super effective")
				{
					int High_Damage = Pokemon_2nd.skills[use_skill].Damage + 5;
					Pokemon_1st.HP = Pokemon_1st.HP - High_Damage;
				}

				// 상성이 없는 경우 원래 데미지만큼 감소시키기
				else
				{
					Pokemon_1st.HP = Pokemon_1st.HP - Pokemon_2nd.skills[use_skill].Damage;
				}

				// HP가 0 이하가 되면 게임 종료하기
				// 첫번째 포켓몬이 진 경우
				if (Pokemon_1st.HP <= 0)
				{
					cout << "===============================================================" << endl;
					cout << "Match Result: " << Pokemon_2nd.Name << " defeats " << Pokemon_1st.Name << endl;
					exit(1);
				}

				// 상태창 출력
				frame1(Pokemon_1st, Pokemon_2nd, count1, count2);
			}
			
		}

		
		
	}
	
}