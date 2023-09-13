#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
//Bounty List
vector <string> bounty_list_name = {"\033[0;91mRed Slime\033[0;37m", "\033[0;94mBlue Slime\033[0;37m", "\033[0;95mDire Wolf\033[0;37m", "\033[0;92mGoblin\033[0;37m"};
//Bounty Reward/Gold List
vector <int> bounty_list_reward = {15, 5, 20, 10};
//Bounty Function
void Bounty(){
    system("clear");
    cout <<("\033[0;93m /        ######                                      ######                                   |\n");
    cout <<("/         #     #  ####  #    # #    # ##### #   #    #     #  ####    ##   #####  #####       |\n");
    cout <<("|         #     # #    # #    # ##   #   #    # #     #     # #    #  #  #  #    # #    #      |\n");
    cout <<("|         ######  #    # #    # # #  #   #     #      ######  #    # #    # #    # #    #      |\n");
    cout <<("|         #     # #    # #    # #  # #   #     #      #     # #    # ###### #####  #    #      |\n");
    cout <<("|         #     # #    # #    # #   ##   #     #      #     # #    # #    # #   #  #    #      /\n");
    cout <<("|         ######   ####   ####  #    #   #     #      ######   ####  #    # #    # #####      / \033[0;97m\n\n");
    cout << "\033[0;96mThane The Hunter\033[0;00m: Hello there Adventurer, here is the daily Bounties for the Monsters of the Forest\n\n";
    for (int i = 0; i < bounty_list_name.size(); i++){
        cout << "\n" << bounty_list_name[i] << " -- \033[0;93m" << bounty_list_reward[i] << "g\033[0;37m\n";
    }
}