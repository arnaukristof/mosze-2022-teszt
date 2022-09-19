#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //underscore hiányzik
    int *b = new int[NELEMENTS];
    //endl és a ; hiányzik
    std::cout << '1-100 ertekek duplazasa'
    // hiányzik a feltétel és az i++
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        //; hiányzik
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //nincs kezdõérték
    int atlag;
    //, helyett ;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //; hiányzik
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
