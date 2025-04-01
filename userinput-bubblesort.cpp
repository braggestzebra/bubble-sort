#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // Declare an empty vector

    int size;
    cout << "Enter how many numbers you want to sort: ";
    cin >> size; // Get the number of elements

    // Input loop with error check
    while (true) {
        vec.clear(); // Clear the vector in case of re-entry
        cout << "Enter " << size << " numbers: ";
        int num;
        for (int i = 0; i < size; i++) {
            if (cin >> num) {
                vec.push_back(num); // Add to vector
            } else {
                // If invalid input (non-number)
                cin.clear(); // clear error flag
                cin.ignore(1000, '\n'); // discard invalid input
                cout << "Invalid input. Please enter numbers only.\n";
                i--; // try same position again
            }
        }

        // Check if user entered exactly 'size' numbers
        if (vec.size() < size) {
            cout << "Error: You entered less numbers. Please input again.\n";
            continue;
        } else if (vec.size() > size) {
            cout << "Error: You entered more numbers. Please input again.\n";
            continue;
        } else {
            break; // Correct input
        }
    }

    int n = vec.size();
    int swapCount = 0; // To count total swaps

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
                // Swap
                swap(vec[i], vec[i + 1]);
                swapCount++;
                swapped = true;

                // Print after swap
                cout << "Step " << swapCount << ": ";
                for (int num : vec) cout << num << " ";
                cout << endl;
            }
        }
    } while (swapped); // Repeat until no swaps are made

    // Print the sorted list
    cout << "Sorted list: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // Print total number of swaps
    cout << "Total swaps: " << swapCount << endl;

    return 0;
}
