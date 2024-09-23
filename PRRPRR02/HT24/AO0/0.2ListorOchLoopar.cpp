#include <iostream>

// 1.
float array[6] = {23.4f, 18.0f, 34.9f, 42.3f, 29.2f, 25.5f};

int main()
{
    // 2.
    std::cout << array[3] << " ; " << array[5] << std::endl;

    // 3.
    for(int x = 0; x < 6; x++)
    {
        std::cout << array[x];
        if (x != 5)
        {
            std::cout << " / ";
        }
    }
    std::cout << std::endl;

    // 4.
    float temp = array[0];
    for (int x = 0; x < 6; x++)
    {
        if (array[x] > temp)
        {
            temp = array[x];
        }
    }
    std::cout << "Största värdet: " << temp << std::endl;

    // 5.
    float sum;
    for (int x = 0; x < 6; x++)
    {
        sum += array[x];
    }
    std::cout << "Summan av listan är: " << sum << std::endl;

    system("pause");
    return 0;
}
