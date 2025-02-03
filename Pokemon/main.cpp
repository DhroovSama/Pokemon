#include <iostream>
using namespace std;

int main() {
    string player_name;
    
    cout << "Enter your name: ";
    cin >> player_name;

    cout << "Great Start " << player_name << ", you are ready to start." << endl << endl;

    cout << "Ah, Trainer!" << endl <<  "Welcome to the world of Pokémon!" << endl << "Today is a momentous day you'll be choosing your very first Pokémon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "You have 3 choices" << endl << endl;

    cout << "Enter 1 for Bulbasaur" << endl;
    cout << "Enter 2 for Charmander" << endl;
    cout << "Enter 3 for Squirtle" << endl << endl;

    int choice;
    cin >> choice;

    if(choice == 1)
    {
        cout << "\n You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2)
    {
        cout << "\n You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3)
    {
        cout << "\n You chose Squirtle! A cool choice.\n";
    }
    else
    {
        cout << "\n Invalid choice. Please restart the game.\n";
    }


    return 0;
}