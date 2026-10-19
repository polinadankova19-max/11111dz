#include <iostream>
#include <climits>

int* memory_allocation(int n) {
    return new int[n];
}

void read(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

void print(const int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void clear_memory(int* arr) {
    delete[] arr;
}

void task1(const int* arr, int n, int x) {
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            std::cout << "Позиция: " << i + 1 << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Not found\n";
    }
}

void task2(const int* arr, int n) {
    bool sorted = true;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted) {
        std::cout << "Отсортирован по неубыванию\n";
    }
    else {
        std::cout << "Не отсортирован\n";
    }
}

int task3(const int* arr, int n) {
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int n = 6;
    std::cout << "task 1:\n";
    int* arr1 = memory_allocation(n);
    read(arr1, n);
    print(arr1, n);
    int x;
    std::cin >> x;
    task1(arr1, n, x);
    clear_memory(arr1);

    std::cout << "\ntask 2:\n";
    int* arr2 = memory_allocation(n);
    read(arr2, n);
    print(arr2, n);
    task2(arr2, n);
    clear_memory(arr2);

    std::cout << "\ntask 3:\n";
    int* arr3 = memory_allocation(n);
    read(arr3, n);
    print(arr3, n);
    std::cout << "Количество: " << task3(arr3, n) << "\n";
    clear_memory(arr3);

    return 0;
}