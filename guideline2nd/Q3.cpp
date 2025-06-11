#include<iostream>
#include<cctype> // For tolower and isalpha
using namespace std;

int main(int argc, char* argv[])
{
    // Check if input string is provided
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <string>\n";
        return 1;
    }

    int fre[26] = {0}; // Array to store frequency of each alphabet letter

    // Loop through each character in the input string
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        char ch = tolower(argv[1][i]); // Convert character to lowercase
        if (isalpha(ch)) // Check if character is an alphabet
        {
            fre[ch - 'a']++; // Increment frequency for the corresponding letter
        }
    }

    // Print the frequency of each letter that appears at least once
    for (int j = 0; j < 26; j++)
    { 
        if (fre[j] > 0)
        {
            cout << char(j + 'a') << '\t' << fre[j] << '\n';
        }
    }

    return 0;
}