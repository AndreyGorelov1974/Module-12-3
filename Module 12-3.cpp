/*Задание 3. Использование assert
Что нужно сделать
Создайте в своей программе функцию float travelTime(float distance, float speed).
Она будет находить время в пути и при этом использовать assert, чтобы отбросить нулевую и отрицательную скорость.
Вызовите эту функцию в main. Убедитесь, что падение происходит за счёт assert. Не забудьте подключить заголовочный файл cassert.

Что оценивается
При запуске происходит падение с указанием исходника и строки в нём, на которой расположен вызов макроса assert.*/

#include <iostream>
#include <string>

int main()
{

    std::string listTenants[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};

    for (int i = 0; i < 3; i++)
    {
        int apartmentNumber;
        std::cout << "Enter the apartment number: ";
        std::cin >> apartmentNumber;

        while (apartmentNumber < 1 || apartmentNumber > 10)
        {
            std::cout << "There is no apartment with this number. Enter the correct number from 1 to 10: ";
            std::cin >> apartmentNumber;
        }

        std::cout << "The apartment number " << apartmentNumber << " lives in " << listTenants[--apartmentNumber] << std::endl;
    }
}