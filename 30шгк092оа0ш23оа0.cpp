#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positive[1000];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive[count] = arr[i];
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < count; i++) {
        cout << positive[i] << " ";
    }
    cout << endl;

    return 0;
}