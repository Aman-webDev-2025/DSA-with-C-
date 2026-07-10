#include <iostream>
using namespace std;

class ArrayADT {
private:
    int capacity;      
    int current_size;  
    int* arr;          

public:
    ArrayADT(int max_size) {
        capacity = max_size;
        current_size = 0;
        arr = new int[capacity];
    }

    ~ArrayADT() {
        delete[] arr;
    }

    // 1. Display array
    void display() {
        for (int i = 0; i < current_size; i++) {
            cout << arr[i] << (i < current_size - 1 ? ", " : "");
        }
        cout<<endl;
    }

    // 2. Add to end
    void append(int element) {
        if (current_size >= capacity) return;
        arr[current_size++] = element;
    }

    // 3. Insert at index
    void insert(int index, int element) {
        if (current_size >= capacity || index < 0 || index > current_size) return;
        for (int i = current_size; i > index; i--) arr[i] = arr[i - 1];
        arr[index] = element;
        current_size++;
    }

    // 4. Delete at index
    void remove(int index) {
        if (index < 0 || index >= current_size) return;
        for (int i = index; i < current_size - 1; i++) arr[i] = arr[i + 1];
        current_size--;
    }

    // 5. Find index of value
    int search(int target) {
        for (int i = 0; i < current_size; i++) if (arr[i] == target) return i;
        return -1;
    }

    // 6. Read value at index
    int get(int index) {
        if (index < 0 || index >= current_size) return -1;
        return arr[index];
    }

    // 7. Update value at index
    void set(int index, int new_value) {
        if (index >= 0 && index < current_size) arr[index] = new_value;
    }

    // 8. Find max value
    int max() {
        if (current_size == 0) return -1;
        int highest = arr[0];
        for (int i = 1; i < current_size; i++) if (arr[i] > highest) highest = arr[i];
        return highest;
    }

    // 9. Flip order
    void reverse() {
        int left = 0, right = current_size - 1;
        while (left < right) swap(arr[left++], arr[right--]);
    }

    // 10. Move left, add 0 at end
    void shiftLeft() {
        if (current_size == 0) return;
        for (int i = 0; i < current_size - 1; i++) arr[i] = arr[i + 1];
        arr[current_size - 1] = 0;
    }

    // 11. Move left, send front to back
    void rotateLeft() {
        if (current_size <= 1) return;
        int first = arr[0];
        for (int i = 0; i < current_size - 1; i++) arr[i] = arr[i + 1];
        arr[current_size - 1] = first;
    }
};

int main() {
    ArrayADT numbers(10);
    numbers.append(10);
    numbers.append(20);
    numbers.append(30);
    numbers.insert(1, 15);
    numbers.remove(2);
    numbers.set(0, 99);
    
    cout << "Current Array: "; numbers.display();
    cout << "Index of 15:   " << numbers.search(15) << "\n";
    cout << "Max Value:     " << numbers.max() << "\n";
    
    numbers.reverse();    cout << "Reversed:      "; numbers.display();
    numbers.shiftLeft();  cout << "Shifted:       "; numbers.display();
    numbers.rotateLeft(); cout << "Rotated:       "; numbers.display();
    return 0;
}
