#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int cost, weight, bank;
    cout << "Введите название товара, его стоимость и вес:\n";
    cin >> name >> cost >> weight;
    cout << "Сколько вы заплатили?\n";
    cin >> bank;
    cout << "Чек:\n" << name << " - " << weight << "кг " << cost << " руб/кг\n"
         << "Итого " << weight * cost << " руб\n"
         << "Внесено " << bank << " руб\n"
         << "Сдача " << bank - (weight * cost) << " руб\n";
}
