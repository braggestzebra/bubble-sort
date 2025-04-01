#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize the vector
    vector<int> vec = {2, 7, 3, 8, 1, 4};
    int n = vec.size(); // Store size of the vector
    int swapCount = 0;  // To count total swaps

    // Print the initial list
    cout << "Initial list: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // Bubble Sort Logic with step printing
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (vec[i] > vec[i + 1]) {
                // Swap adjacent elements
                swap(vec[i], vec[i + 1]);
                swapCount++;
                swapped = true;

                // Print the list after each swap
                cout << "Step " << swapCount << ": ";
                for (int num : vec) cout << num << " ";
                cout << endl;
            }
        }
    } while (swapped); // Continue until no swaps are made

    // Print the sorted list
    cout << "Here is the sorted list: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // Print total number of swaps
    cout << "Total number of swaps: " << swapCount << endl;

    return 0;
}
