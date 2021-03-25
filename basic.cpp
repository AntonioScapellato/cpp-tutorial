#include <iostream>
using namespace std;
// Include the string library
#include <string>

int main() {

    // This is a comment
 
    cout << "Hello World!";
    cout << "I am learning C++";

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value

    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;

    // STRINGS
    // Create a string variable
    string greeting = "Hello";

    string firstName = "Antonio ";
    string lastName = "Scapellato";
    string fullName = firstName + lastName;
    cout << fullName;

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    cout << "The length of the txt string is: " << txt.size();

    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
    // Outputs Jello instead of Hello

    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

    // Type your first name: John
    // Your name is: John

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe

    // IF ELSE
    int x = 20;
    int y = 18;
    if (x > y) {
    cout << "x is greater than y";
    }

    int time = 22;
    if (time < 10) {
    cout << "Good morning.";
    } else if (time < 20) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }
    // Outputs "Good evening."

    // SWITCH CASE
    switch(expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
    }

    // WHILE LOOP
    int i = 0;
    while (i < 5) {
    cout << i << "\n";
    i++;
    }

    // DO WHILE LOOP
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    // FOR LOOP
    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }

    // Arrays
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
    // Now outputs Opel instead of Volvo

    // Pointers
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
    
    return 0;
}