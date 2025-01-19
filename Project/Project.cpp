
#include <iostream>  
#include <string>  
#include <vector> 
#include <fstream>
using namespace std;

int hours{ 12 };
int days{ 0 };
void time() {
    if (hours >= 24) {
        hours = 0, days++;
        cout << "Время сейчас:" << "Часы:" << hours << "Дни:" << days << endl;
    }
    else {
        cout << "Время сейчас:" << "Часы:" << hours << "Дни:" << days << endl;
    }
}



class Food {
public:
    string Food_name;
    int plus_hp;
    int plus_hunger;
    int plus_stamina;
    int plus_health;
    int plus_xp;  
    Food(string Food_name,int plus_hp, int plus_hunger, int plus_stamina, int plus_health,int plus_xp) {
        this->Food_name = Food_name;
        this->plus_hp = plus_hp;
        this->plus_hunger = plus_hunger;
        this->plus_stamina = plus_stamina;
        this->plus_health = plus_health;
        this->plus_xp = plus_xp;
    }
};

vector<Food> available_food{}; 

void dragon_minigame1() {
    cout << "Вы поиграли с драконом" << endl;
    int game_time{ 2 };
    hours = hours + game_time;
    void time();
}
void dragon_minigame2() {
    cout << "Вы поиграли с драконом" << endl;
    int game_time{ 1 };
    hours = hours + game_time;
    void time();
}
void dragon_minigame3() {
    cout << "Вы поиграли с драконом" << endl;
    int game_time{ 3 };
    hours = hours + game_time;
    void time();
}

class Dragon {
protected:
    string name;
    int hp;
    int hunger;
    int health; //будет генерится рандом число от 1 до 100 если больше какого либо числа то дракон заболеет 
    int stamina;
    int xp;
public:
    Dragon(string name,int hp, int hunger, int health, int stamina, int xp) {
        this->name = name;
        this->hp = hp;
        this->hunger = hunger;
        this->health = health;
        this->stamina = stamina;
        this->xp = xp;
    }

    void Set_Name() {
        cout << "Введите имя дракона:";
        getline(cin, name);
    }
    void print_Name() {
        cout << name;
    }
    void print_Info() {
        cout << "Хп:"<<hp <<"Голод:"<<hunger<<"Здоровье"<<health<<"Стамина"<<stamina<<"Опыт"<<xp << endl;
    }

    Dragon operator + (Food& f) {
        return Dragon{ name,hp + f.plus_hp,hunger + f.plus_hunger,health + f.plus_health,stamina + f.plus_stamina,xp + f.plus_xp };
    }

    void feed_Dragon() { //перегрузить оператор сложения сделать сложение еды и дракона  
        int eat_time{ 1 };
        cout << "Выберите еду:" << endl;
        int n{ 1 };
        for (int i = 0; i < available_food.size(); i++) {
            cout << "Еда " << n << ": " << available_food[i].Food_name << endl;
            n++;
        }
        int food_choice{ 0 };
        cin >> food_choice;
        switch (food_choice) {
        case 1: {
            food_index = available_food[0];
            dragon_eat();
        }
        case 2: {
            food_index = available_food[1];
            dragon_eat();
        }
        }
              cout << "Вы покормили дракона" << endl;
              hours = hours + eat_time;
              void time();
        }

    void sleep_Dragon() {
        int sleep_time;
        cout << "Время сейчас:" << hours << endl;
        cout << "Введите сколько проспит дракон:" << endl;
        cin >> sleep_time;
        hours = hours + sleep_time;
        void time();
    }
    void play_Dragon() {
        int game_choice;
        cout << "Выберите игру:\n\n1 - Игор пока нету UwU\n\n2 - Игры будут наверное UwU\n\n3 - типо третья игра" << endl;
        cout << "Выберите игру:";
        cin >> game_choice;
        switch (game_choice) {
        case 1: {
            dragon_minigame1();
            break;
        }
        case 2: {
            dragon_minigame2();
            break;
        }
        case 3: {
            dragon_minigame3();
            break;
        }
        }


    }
};
vector<Dragon>All_Dragons{};

Food food_index;
void dragon_eat(){
    All_Dragons[0] + food_index;
}


//void dragon_health() {
    //int health = health + rand() % 100;
//}

int main() {
    setlocale(LC_ALL, "RUS");

    int menu1;
    string menu = { "1 - Покормить дракна\n\n2 - играть с драконом\n\n3 - уложить дракона спать" };

    Food pizza("Пицца",15, 30, 20, 0, 0);//hp,hunger,stamina,health,xp 
    available_food.push_back(pizza);
    Food coffee("Кофе",0, 5, 50, -5,0);
    available_food.push_back(coffee);


    cout << "Добро пожаловать в симулятор заботы о  драконе" << endl;
    cout << "Вам выдали яйцо дракона, через 3 дня на свет появился маленький дракончик" << endl;
    Dragon s1("noname", 100, 10, 100, 10, 0);//name,hp,hunger,health,stamina,xp если голод меньше 0 дракон теряет хп, если здоровье меньше 50 дракон заболеет и будет терять хп
    All_Dragons.push_back(s1);
    cout << "Дайте вашему дракону имя..." << endl;

        s1.Set_Name();
    cout << "Вашего дракона зовут:";
    s1.print_Name();
    cout << "\n позаботьтесь о вашем новом питомце" << endl;

    cout << "Время сейчас\t" << "Дни:" << days << "\tЧасы:" << hours << endl;
    cout << menu << endl;
    cin >> menu1;
    switch (menu1) {
    case 1:
    {
        s1.feed_Dragon();
        s1.print_Info();
        break;
    }
    case 2:
    {
        s1.play_Dragon();
        break;
    }
    case 3:
    {
        s1.sleep_Dragon();
        break;
    }
    }
}
