#include <iostream>

using namespace std;

// Function to show address of each character
void showAddress(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        cout << "Character: " << str[i] << " Address: " << (void*)&str[i] << endl;
    }
}

// Function to concatenate two strings
void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy str1
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append str2
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
}

// Function to compare two strings
bool compare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return false;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

// Function to calculate length of the string
int length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to convert lowercase to uppercase
void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

// Function to reverse a string
void reverse(char str[]) {
    int len = length(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
}

// Function to insert one string into another at a given position
void insertString(char str1[], char str2[], int pos, char result[]) {
    int i = 0, j = 0, k = 0;

    // Copy str1 up to pos
    for (; i < pos && str1[i] != '\0'; i++) {
        result[k++] = str1[i];
    }

    // Copy str2
    for (j = 0; str2[j] != '\0'; j++) {
        result[k++] = str2[j];
    }

    // Copy remaining part of str1
    while (str1[i] != '\0') {
        result[k++] = str1[i++];
    }

    result[k] = '\0';
}

// Main function
int main() {
    char str1[100], str2[100], result[200];
    int choice, pos;

    do {
        cout << "\nMenu:\n";
        cout << "1. Show address of each character in string\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of the string\n";
        cout << "5. Convert lowercase to uppercase\n";
        cout << "6. Reverse the string\n";
        cout << "7. Insert a string into another string\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline from input buffer

        switch (choice) {
            case 1:
                cout << "Enter string: ";
                cin.getline(str1, 100);
                showAddress(str1);
                break;

            case 2:
                cout << "Enter first string: ";
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                concatenate(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                break;

            case 3:
                cout << "Enter first string: ";
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                if (compare(str1, str2))
                    cout << "Strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 4:
                cout << "Enter string: ";
                cin.getline(str1, 100);
                cout << "Length of string: " << length(str1) << endl;
                break;

            case 5:
                cout << "Enter string: ";
                cin.getline(str1, 100);
                toUppercase(str1);
                cout << "Uppercase string: " << str1 << endl;
                break;

            case 6:
                cout << "Enter string: ";
                cin.getline(str1, 100);
                reverse(str1);
                cout << "Reversed string: " << str1 << endl;
                break;
            
            case 7:
                cout << "Enter main string: ";
                cin.getline(str1, 100);
                cout << "Enter string to insert: ";
                cin.getline(str2, 100);
                cout << "Enter position to insert at: ";
                cin >> pos;
                cin.ignore();
                insertString(str1, str2, pos, result);
                cout << "String after insertion: " << result << endl;
                break;

            case 8:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}
