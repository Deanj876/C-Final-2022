#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
#include "Encyclopedia.hpp"
//Gold Variable
int gold = 50;
//Sword Variable
string sword = "\033[0;36mWooden Sword\033[0;37m";
//Player Player Inventory
vector <string> player_inventory = {sword};
//Second Player Input Variable
string player_input2;
//Inventory Function
void Inventory(){
    system("clear");
    cout << "\n\n----------Player Inventory----------\n";
    cout << "\033[0;93m" << gold << "g (GOLD)\033[0;37m\n\n";
    cout << "\033[0;92mAmulet of Restoration\033[0;37m\n\n";
    cout << "\033[0;95mEncyclopedia of Worldly Knowledge\033[0;37m\n\n";
    for (const string& i : player_inventory) {
    cout << i << "\n  \n";
    //v += 1;
    }
    cout << "\n\nwould you like to look through the Encyclopedia? (Yes / No):";
    cin >> player_input2;
    if(player_input2 == "Yes" or player_input2 == "yes"){
        Encyclopedia();
    }
    else{
        system("clear");
    }
}