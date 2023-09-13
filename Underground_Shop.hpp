#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//LightningSpell Variables
int lightning_counter = 0;
int lightning_dp = 35;
int lightning_mp = 20;
//TombOfRizz Variables
int Tomb_of_Rizz;
int rizz_counter = 0;
int Rizz_dp = 100000;
//UndergroundShop Function
void underground_shop(){
    if (gold > 100){
        system("clear");
        cout << "You try to go to the shop but you black out and find yourself in a new place\n";
        cout << "???: Sorry for the Wack.\n";
        sleep_for(seconds(3));
        sleep_until(system_clock::now());
        system("clear");
        cout <<("\033[0;95m /        #######                                                        #####                              |\n");                       
     cout <<("/         #        ####  #####  #####  # #####  #####  ###### #    #    #     # #    #  ####  #####         |\n");  
     cout <<("|         #       #    # #    # #    # # #    # #    # #      ##   #    #       #    # #    # #    #        |\n"); 
     cout <<("|         #####   #    # #    # #####  # #    # #    # #####  # #  #     #####  ###### #    # #    #        |\n"); 
     cout <<("|         #       #    # #####  #    # # #    # #    # #      #  # #          # #    # #    # #####         |\n");
     cout <<("|         #       #    # #   #  #    # # #    # #    # #      #   ##    #     # #    # #    # #             /\n");      
     cout <<("|         #        ####  #    # #####  # #####  #####  ###### #    #     #####  #    #  ####  #            / \033[0;97m\n\n\n"); 
        cout << "\033[0;96mRicket The Shopkeep\033[0;00m: Hello adventurer and Welcome to my.....\"Totally Legal\" shop, where I sell the best outlawed items for only the Rich.\n";
        cout << "Gold: "<< gold << "\n\n1.Lightning Spell Scroll\033[0;93m (100g)\n\033[0;37m\n2.Tomb of The Rizz\033[0;93m (100g)\n\033[0;37m";
        cout << "\nWhich would you like to buy? 1 or 2:";
        cin >> player_input;
        if(player_input == "1"){
            player_inventory_stats.push_back(lightning_dp);
            cout << "\n\033[0;96mRicket The Shopkeep\033[0;00m: Pleasure doing buisness with you!\n\n";
            player_inventory.push_back("\033[0;95mLightning Spell Scroll\033[0;37m");
            lightning_counter += 1;
            gold -= 100;
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
        else if(player_input == "2"){
            player_inventory_stats.push_back(Rizz_dp);
            cout << "\n\033[0;96mRicket The Shopkeep\033[0;00m: Pleasure doing buisness with you!\n\n";
            player_inventory.push_back("\033[0;93mTomb of The Rizz\033[0;37m");
            rizz_counter += 1;
            gold -= 100;
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
        else if(player_input == "Rizz" or player_input == "rizz"){
            cout << "\n\033[0;96mRicket The Shopkeep\033[0;00m: Well.....not the response I assumed to get after knocking you out....\n";
            sleep_for(seconds(5));
            sleep_until(system_clock::now());
            cout << "\n\033[0;96mRicket The Shopkeep\033[0;00m: if your into that stuff the I have an idea that helps both of us.....*WACK*\n";
            sleep_for(seconds(5));
            sleep_until(system_clock::now());
            system("clear");
        }
        else{
            cout << "\033[0;96mRicket The Shopkeep\033[0;00m: You won't buy anything....GET OUT OF MY SHOP!\n";
            sleep_for(seconds(3));
            sleep_until(system_clock::now());
            system("clear");
        }
    }
}