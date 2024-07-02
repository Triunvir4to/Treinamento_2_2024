#include <iostream>
#include <string>

int main() {
    std::string categoria1, categoria2, dieta;
    std::cin >> categoria1 >> categoria2 >> dieta;

    std::string animal;

    if (categoria1 == "vertebrado") {
        if (categoria2 == "mamifero") {
            if (dieta == "onivoro") {
                animal = "homem";
            } else if (dieta == "herbivoro") {
                animal = "vaca";
            }
        } else if (categoria2 == "ave") {
            if (dieta == "carnivoro") {
                animal = "aguia";
            } else if (dieta == "onivoro") {
                animal = "pomba";
            }
        }
    } else if (categoria1 == "invertebrado") {
        if (categoria2 == "inseto") {
            if (dieta == "hematofago") {
                animal = "pulga";
            } else if (dieta == "herbivoro") {
                animal = "lagarta";
            }
        } else if (categoria2 == "anelideo") {
            if (dieta == "hematofago") {
                animal = "sanguessuga";
            } else if (dieta == "onivoro") {
                animal = "minhoca";
            }
        }
    }

    std::cout << animal << std::endl;

    return 0;
}
