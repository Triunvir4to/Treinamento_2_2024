#include <iostream>

using namespace std;

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    cin >> hora_inicio >> minuto_inicio >> hora_fim >> minuto_fim;

    int inicio_total = hora_inicio * 60 + minuto_inicio;
    int fim_total = hora_fim * 60 + minuto_fim;

    int duracao;
    if (fim_total == inicio_total)
        duracao = 24 * 60;
     else if (fim_total > inicio_total)
        duracao = fim_total - inicio_total;
    else
        duracao = (24 * 60 - inicio_total) + fim_total;


    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
