#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //underscore hi�nyzik
    int *b = new int[NELEMENTS];
    //endl �s a ; hi�nyzik
    std::cout << '1-100 ertekek duplazasa'
    // hi�nyzik a felt�tel �s az i++
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        //; hi�nyzik
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //nincs kezd��rt�k
    int atlag;
    //, helyett ;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //; hi�nyzik
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
