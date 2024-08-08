#include <iostream>
#include <string>
using namespace std;

string determine_winner(string dodo, string leo, string pepper) {
    if (dodo == leo && leo == pepper) {
        return "Putz vei, o Leo ta demorando muito pra jogar...";
    }

    if ((dodo == "pedra" && leo == "tesoura" && pepper == "tesoura") ||
        (dodo == "tesoura" && leo == "papel" && pepper == "papel") ||
        (dodo == "papel" && leo == "pedra" && pepper == "pedra")) {
        return "Os atributos dos monstros vao ser inteligencia, sabedoria...";
    }

    if ((leo == "pedra" && dodo == "tesoura" && pepper == "tesoura") ||
        (leo == "tesoura" && dodo == "papel" && pepper == "papel") ||
        (leo == "papel" && dodo == "pedra" && pepper == "pedra")) {
        return "Iron Maiden's gonna get you, no matter how far!";
    }

    if ((pepper == "pedra" && dodo == "tesoura" && leo == "tesoura") ||
        (pepper == "tesoura" && dodo == "papel" && leo == "papel") ||
        (pepper == "papel" && dodo == "pedra" && leo == "pedra")) {
        return "Urano perdeu algo muito precioso...";
    }

    return "Putz vei, o Leo ta demorando muito pra jogar...";
}

int main() {
    string dodo, leo, pepper;
    while (cin >> dodo >> leo >> pepper) {
        cout << determine_winner(dodo, leo, pepper) << endl;
    }
    return 0;
}
