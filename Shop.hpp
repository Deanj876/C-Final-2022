#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//Player Variables
string player_input;
int health = 100;
int magic = 100;
//Weapon Stats and Bought Item Counter
int sword_stats = 25;
int magic_counter = 0;
int health_counter = 0;
//IronSword Variables
string iron_sword = "\033[0;90mIron Sword\033[0;37m";
//Inventory Lists/Arrays/Vectors
vector <int> player_stats = {health, magic};
vector <int> player_inventory_stats = {sword_stats};
//Shop Function
void shop(){
    if(gold <= 100){
        system("clear");
        cout <<("\033[0;93m /         #####                             #####                              |\n");
        cout <<("/         #     # #    # # #      #####     #     # #    #  ####  #####         |\n");
        cout <<("|         #       #    # # #      #    #    #       #    # #    # #    #        |\n");
        cout <<("|         #  #### #    # # #      #    #     #####  ###### #    # #    #        |\n");
        cout <<("|         #     # #    # # #      #    #          # #    # #    # #####         |\n");
        cout <<("|         #     # #    # # #      #    #    #     # #    # #    # #             /\n");
        cout <<("|          #####   ####  # ###### #####      #####  #    #  ####  #            / \033[0;97m\n\n\n");
        cout << "\033[0;96mJane The Shopkeep\033[0;00m: Hello adventurer welcome to my shop what would you like.\n";
        cout << "\033[0;93mGold: "<< gold << "\033[0;00m\n\n1.\033[0;91mHealth Restore Spell\033[0;93m (25g)\n\033[0;37m2.\033[0;90mIron Sword \033[0;93m(50g)\n\033[0;37m3.\033[0;94mMagic Restore Spell \033[0;93m(25g)\033[0;37m\n";
        cout << "\nWhich would you like to buy? 1, 2, or 3 :";
        cin >> player_input;
        if(player_input == "1" && gold >= 25){
            player_inventory_stats.push_back(25);
            cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: Pleasure doing buisness with you!\n\n";
            player_inventory.push_back("\033[0;91mHealth Spell Scroll\033[0;37m");
            health_counter += 1;
            gold -= 25;
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
        else if (player_input == "2" && gold >= 50){
            player_inventory_stats.push_back(25);
            cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: Pleasure doing buisness with you!\n\n";
            player_inventory.push_back(iron_sword);
            player_inventory.erase(player_inventory.begin());
            //player_inventory_stats.push_back(iron_sword);
            // swap(player_inventory[0], "Iron Sword");
            gold -= 50;
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
        else if (player_input == "3" && gold >= 25){
            player_inventory_stats.push_back(25);
            cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: Pleasure doing buisness with you!\n\n";
            player_inventory.push_back("\033[0;94mMagic Spell Scroll\033[0;37m");
            // player_inventory.erase(player_inventory.begin());
            // swap(player_inventory[0], "Iron Sword");
            magic_counter += 1;
            gold -= 25;
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
        else if(player_input == "Rizz" or player_input == "rizz"){
                    cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: Well Adventurer, I did know you were this forward!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: Sure! Let's Go out some time or eat back at my place, but I'm paying!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    system("clear");
                }
        else{
            cout << "\n\033[0;96mJane The Shopkeep\033[0;00m: You need more gold or rubies for my shop!\n";
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
    }
}