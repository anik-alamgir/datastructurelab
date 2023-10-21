#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    const int arraySize = 10;
    std::vector<int> arr(arraySize);

    // Input 10 elements
    std::cout << "Enter 10 integers: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> arr[i];
    }

    if (arr.size() < 2) {
        std::cerr << "Input array should have at least 2 elements." << std::endl;
        return 1;
    }

    std::sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;
    int closestSum = INT_MAX;
    int num1, num2;

    while (left < right) {
        int currentSum = arr[left] + arr[right];
        int currentDiff = std::abs(currentSum);

        if (currentDiff < closestSum) {
            closestSum = currentDiff;
            num1 = arr[left];
            num2 = arr[right];
        }

        if (currentSum < 0) {
            left++;
        } else {
            right--;
        }
    }

    std::cout << "Two elements with the sum nearest to zero: " << num1 << " and " << num2 << std::endl;

    return 0;
}
