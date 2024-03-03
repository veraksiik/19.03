#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "задание 1" << std::endl;

    int arrw[] = { 12, 45, 78, 23, 56, 89, 34, 10 };
    int z = sizeof(arrw) / sizeof(arrw[0]);

    int max = arrw[0];
    int min = arrw[0];

    for (int i = 1; i < z; ++i) {
        if (arrw[i] > max) {
            max = arrw[i];
        }
        if (arrw[i] < min) {
            min = arrw[i];
        }
    }

    std::cout << "Максимальный элемент: " << max << std::endl;
    std::cout << "Минимальный элемент: " << min << std::endl;


    std::cout << "задание 2" << std::endl;



        const int n = 10; 
        int lower, upper, threshold;
        int sum = 0;

        std::cout << "Введите нижнюю границу диапазона: ";
        std::cin >> lower;

        std::cout << "Введите верхнюю границу диапазона: ";
        std::cin >> upper;

        int arr[n];

      
        int seed = time(0); 
        for (int i = 0; i < n; ++i) {
            seed = (214013 * seed + 2531011);
            arr[i] = (seed >> 16) % (upper - lower + 1) + lower;
        }

      
        std::cout << "\nМассив случайных чисел: ";
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }

        
        std::cout << "\nВведите пороговое значение: ";
        std::cin >> threshold;

        
        for (int i = 0; i < n; ++i) {
            if (arr[i] < threshold) {
                sum += arr[i];
            }
        }

        // Вывод результата
        std::cout << "\nСумма элементов меньше " << threshold << ": " << sum << std::endl;

       

        
        std::cout << "задание 3" << std::endl;


        int profits[12];
        int range_start, range_end;

       
        for (int i = 0; i < 12; ++i) {
            std::cout << "Введите прибыль за " << i + 1 << "-й месяц: ";
            std::cin >> profits[i];
        }

        std::cout << "Введите начало диапазона: ";
        std::cin >> range_start;
        std::cout << "Введите конец диапазона: ";
        std::cin >> range_end;

        int min_profit = profits[range_start - 1];
        int min_month = range_start;

        for (int i = range_start; i <= range_end; ++i) {
            if (profits[i - 1] < min_profit) {
                min_profit = profits[i - 1];
                min_month = i;
            }
        }

        std::cout << "Месяц с минимальной прибылью в диапазоне [" << range_start << ", " << range_end << "]: " << min_month << std::endl;

        





    return 0;
}
