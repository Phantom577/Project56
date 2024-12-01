
#include <iostream> 
#include <string> 
using namespace std;

class Dragon {
protected:
    string name;
    int hp;
    int hunger;
    int health; //будет генерится рандом число от 1 до 100 если больше какого либо числа то дракон заболеет
    int stamina;
    int xp;
public:
    Dragon(string name, int hp, int hunger, int health, int stamina, int xp) {
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
   };
   void feed_Dragon() {
   };
   void sleep_Dragon() {

   }
   void play_Dragon() {
   }
};

void dragon_minigame() {
    cout << "Вы поиграли с драконом" << endl;
    
    
}

int main() {
    setlocale(LC_ALL, "RUS");
    
    int menu1;
    string menu = { "1 - Покормить дракна\n\n2 - играть с драконом\n\n3 - уложить дракона спать" };
  

    cout << "Добро пожаловать в симулятор заботы о  драконе" << endl;
    cout << "Вам выдали яйцо дракона, через 3 дня на свет появился маленький дракончик" << endl;
    Dragon s1("noname", 100, 10, 0, 10, 0);
    cout << "Дайте вашему дракону имя..."<<endl;
    s1.Set_Name();
    cout << "Вашего дракона зовут:";
    s1.print_Name();
    cout << "позаботьтесь о вашем новом питомце" << endl;

    cout << menu << endl;
    cin >> menu1;
  switch(menu1){
  case 1:
    }
}
