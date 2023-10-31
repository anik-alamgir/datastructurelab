#include <iostream>
using namespace std;

int main() {
   int arraySize = 10;
    int array[arraySize];

   cout << "Enter 10 elements";
    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    int closestSum = INT_MAX;
    int firstElement, secondElement;


    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            int currentSum = array[i] + array[j];
            int absoluteSum = abs(currentSum);
            if (absoluteSum < closestSum) {
                closestSum = absoluteSum;
                firstElement = array[i];
                secondElement = array[j];
            }
        }
    }


   cout << "The two elements with the sum nearest to zero are: " << firstElement << " and " << secondElement << endl;

return 0;
}
