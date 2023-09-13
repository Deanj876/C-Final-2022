#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include "Magic_Health_Function.hpp"
#include "Monster_Death_Source.hpp"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//FireBall Stats
int fireball_dp = 10;
int fireball_mp = 10;
//Item Stats
int iron_sword_stats = sword_stats * 2;
//Health Bar
void health_bar(){
        if(health == 100){
        //20 spaces, 4 segments of 5, split between 100
           cout<<"\033[0;102m                    \033[0;00m"; 
        }
        else if(health == 95){
            cout<<"\033[0;102m                   \033[0;101m \033[0;00m";
        }
        else if(health == 90){
            cout<<"\033[0;102m                  \033[0;101m  \033[0;00m";
        }
        else if(health == 85){
            cout<<"\033[0;102m                 \033[0;101m   \033[0;00m";
        }
        else if(health == 80){
            cout<<"\033[0;102m                \033[0;101m    \033[0;00m";
        }
        else if(health == 75){
            cout<<"\033[0;102m               \033[0;101m     \033[0;00m";
        }
        else if(health == 70){
            cout<<"\033[0;102m              \033[0;101m      \033[0;00m";
        }
        else if(health == 65){
            cout<<"\033[0;102m             \033[0;101m       \033[0;00m";
        }
        else if(health == 60){
            cout<<"\033[0;102m            \033[0;101m        \033[0;00m";
        }
        else if(health == 55){
            cout<<"\033[0;102m           \033[0;101m         \033[0;00m";
        }
        else if(health == 50){
            cout<<"\033[0;102m          \033[0;101m          \033[0;00m";
        }
        else if(health == 45){
            cout<<"\033[0;102m         \033[0;101m           \033[0;00m";
        }
        else if(health == 40){
            cout<<"\033[0;102m        \033[0;101m            \033[0;00m";
        }
        else if(health == 35){
            cout<<"\033[0;102m       \033[0;101m             \033[0;00m";
        }
        else if(health == 30){
            cout<<"\033[0;102m      \033[0;101m              \033[0;00m";
        }
        else if(health == 25){
           cout<<"\033[0;102m     \033[0;101m               \033[0;00m";
        }
        else if(health == 20){
            cout<<"\033[0;102m    \033[0;101m                \033[0;00m";
        }
        else if(health == 15){
            cout<<"\033[0;102m   \033[0;101m                 \033[0;00m";
        }
        else if(health == 10){
            cout<<"\033[0;102m  \033[0;101m                  \033[0;00m";
        }
        else if(health == 5){
            cout<<"\033[0;102m \033[0;101m                   \033[0;00m";
        }
    }
//Magic Bar
void magic_bar(){
        if(magic == 100){
        //20 spaces, 4 segments of 5, split between 100
           cout<<"\033[0;104m                    \033[0;00m"; 
        }
        else if(magic == 95){
            cout<<"\033[0;104m                   \033[0;105m \033[0;00m";
        }
        else if(magic == 90){
            cout<<"\033[0;104m                  \033[0;105m  \033[0;00m";
        }
        else if(magic == 85){
            cout<<"\033[0;104m                 \033[0;105m   \033[0;00m";
        }
        else if(magic == 80){
            cout<<"\033[0;104m                \033[0;105m    \033[0;00m";
        }
        else if(magic == 75){
            cout<<"\033[0;104m               \033[0;105m     \033[0;00m";
        }
        else if(magic == 70){
            cout<<"\033[0;104m              \033[0;105m      \033[0;00m";
        }
        else if(magic == 65){
            cout<<"\033[0;104m             \033[0;105m       \033[0;00m";
        }
        else if(magic == 60){
            cout<<"\033[0;104m            \033[0;105m        \033[0;00m";
        }
        else if(magic == 55){
            cout<<"\033[0;104m           \033[0;105m         \033[0;00m";
        }
        else if(magic == 50){
            cout<<"\033[0;104m          \033[0;105m          \033[0;00m";
        }
        else if(magic == 45){
            cout<<"\033[0;104m         \033[0;105m           \033[0;00m";
        }
        else if(magic == 40){
            cout<<"\033[0;104m        \033[0;105m            \033[0;00m";
        }
        else if(magic == 35){
            cout<<"\033[0;104m       \033[0;105m             \033[0;00m";
        }
        else if(magic == 30){
            cout<<"\033[0;104m      \033[0;105m              \033[0;00m";
        }
        else if(magic == 25){
            cout<<"\033[0;104m     \033[0;105m               \033[0;00m";
        }
        else if(magic == 20){
            cout<<"\033[0;104m    \033[0;105m                \033[0;00m";
        }
        else if(magic == 15){
            cout<<"\033[0;104m   \033[0;105m                 \033[0;00m";
        }
        else if(magic == 10){
            cout<<"\033[0;104m  \033[0;105m                  \033[0;00m";
        }
        else if(magic == 5){
            cout<<"\033[0;104m \033[0;105m                   \033[0;00m";
        }
    }
//Monster Health Bar
void red_Slime_HBar(){
    if(RSlime_hp == 50){
        // \033[0;101m is Red, \033[0;102m is Green
        //20 spaces, 4 segments of 5, split between 100
            cout<<"\033[0;102m                    \033[0;00m"; 
        }
        else if(RSlime_hp == 45){
            cout<<"\033[0;102m               \033[0;101m     \033[0;00m";
        }
        else if(RSlime_hp == 40){
            cout<<"\033[0;102m              \033[0;101m      \033[0;00m";
        }
        else if(RSlime_hp == 35){
            cout<<"\033[0;102m           \033[0;101m         \033[0;00m";
        }
        else if(RSlime_hp == 30){
            cout<<"\033[0;102m           \033[0;101m         \033[0;00m";
        }
        else if(RSlime_hp == 25){
            cout<<"\033[0;102m          \033[0;101m          \033[0;00m";
        }
        else if(RSlime_hp == 20){
            cout<<"\033[0;102m         \033[0;101m           \033[0;00m";
        }
        else if(RSlime_hp == 15){
            cout<<"\033[0;102m        \033[0;101m            \033[0;00m";
        }
        else if(RSlime_hp == 10){
            cout<<"\033[0;102m       \033[0;101m             \033[0;00m";
        }
        else if(RSlime_hp == 5){
            cout<<"\033[0;102m      \033[0;101m              \033[0;00m";;
        }
}
void blue_Slime_HBar(){
    if(BSlime_hp == 25){
        // \033[0;101m is Red, \033[0;102m is Green
        //20 spaces, 4 segments of 5, split between 100
            cout<<"\033[0;102m                    \033[0;00m"; 
        }
        else if(BSlime_hp == 20){
            cout<<"\033[0;102m               \033[0;101m     \033[0;00m";
        }
        else if(BSlime_hp == 15){
            cout<<"\033[0;102m          \033[0;101m          \033[0;00m";
        }
        else if(BSlime_hp == 10){
            cout<<"\033[0;102m     \033[0;101m               \033[0;00m";
        }
        else if(BSlime_hp == 5){
            cout<<"\033[0;102m \033[0;101m                   \033[0;00m";
        }
}
void dire_Wolf_Hbar(){
        if(DWolf_hp == 100){
        //20 spaces, 4 segments of 5, split between 100
           cout<<"\033[0;102m                    \033[0;00m"; 
        }
        else if(DWolf_hp == 95){
            cout<<"\033[0;102m                   \033[0;101m \033[0;00m";
        }
        else if(DWolf_hp == 90){
            cout<<"\033[0;102m                  \033[0;101m  \033[0;00m";
        }
        else if(DWolf_hp == 85){
            cout<<"\033[0;102m                 \033[0;101m   \033[0;00m";
        }
        else if(DWolf_hp == 80){
            cout<<"\033[0;102m                \033[0;101m    \033[0;00m";
        }
        else if(DWolf_hp == 75){
            cout<<"\033[0;102m               \033[0;101m     \033[0;00m";
        }
        else if(DWolf_hp == 70){
            cout<<"\033[0;102m              \033[0;101m      \033[0;00m";
        }
        else if(DWolf_hp == 65){
            cout<<"\033[0;102m             \033[0;101m       \033[0;00m";
        }
        else if(DWolf_hp == 60){
            cout<<"\033[0;102m            \033[0;101m        \033[0;00m";
        }
        else if(DWolf_hp == 55){
            cout<<"\033[0;102m           \033[0;101m         \033[0;00m";
        }
        else if(DWolf_hp == 50){
            cout<<"\033[0;102m          \033[0;101m          \033[0;00m";
        }
        else if(DWolf_hp == 45){
            cout<<"\033[0;102m         \033[0;101m           \033[0;00m";
        }
        else if(DWolf_hp == 40){
            cout<<"\033[0;102m        \033[0;101m            \033[0;00m";
        }
        else if(DWolf_hp == 35){
            cout<<"\033[0;102m       \033[0;101m             \033[0;00m";
        }
        else if(DWolf_hp == 30){
            cout<<"\033[0;102m      \033[0;101m              \033[0;00m";
        }
        else if(DWolf_hp == 25){
           cout<<"\033[0;102m     \033[0;101m               \033[0;00m";
        }
        else if(DWolf_hp == 20){
            cout<<"\033[0;102m    \033[0;101m                \033[0;00m";
        }
        else if(DWolf_hp == 15){
            cout<<"\033[0;102m   \033[0;101m                 \033[0;00m";
        }
        else if(DWolf_hp == 10){
            cout<<"\033[0;102m  \033[0;101m                  \033[0;00m";
        }
        else if(DWolf_hp == 5){
            cout<<"\033[0;102m \033[0;101m                   \033[0;00m";
        }
    }
void Goblin_HBar(){
    if(Goblin_hp == 30){
        // \033[0;101m is Red, \033[0;102m is Green
        //20 spaces, 4 segments of 5, split between 100
            cout<<"\033[0;102m                    \033[0;00m"; 
        }
        else if(Goblin_hp == 25){
            cout<<"\033[0;102m               \033[0;101m     \033[0;00m";
        }
        else if(Goblin_hp == 20){
            cout<<"\033[0;102m             \033[0;101m       \033[0;00m";
        }
        else if(Goblin_hp == 15){
            cout<<"\033[0;102m           \033[0;101m         \033[0;00m";
        }
        else if(Goblin_hp == 10){
            cout<<"\033[0;102m         \033[0;101m           \033[0;00m";
        }
        else if(Goblin_hp == 5){
            cout<<"\033[0;102m       \033[0;101m             \033[0;00m";
        }
}
//Player Death Function
void player_death(){
    if(health <= 0){
        system("clear");
        cout <<("\033[0;91m /         #####                          #######                       |\n");
        cout <<("/         #     #   ##   #    # ######    #     # #    # ###### #####         | \n");
        cout <<("|         #        #  #  ##  ## #         #     # #    # #      #    #        | \n");
        cout <<("|         #  #### #    # # ## # #####     #     # #    # #####  #    #        | \n");
        cout <<("|         #     # ###### #    # #         #     # #    # #      #####         | \n");
        cout <<("|         #     # #    # #    # #         #     #  #  #  #      #   #         / \n");
        cout <<("|          #####  #    # #    # ######    #######   ##   ###### #    #       /  \033[0;37m\n\n\n");
        cout << "\033[0;91mGAME OVER......You didn't get to a bonfire in time!\033[0;37m\n";
        exit ( 0 );
    }
    else{
        
    }
}
//Monster Functions
void Red_Slime(){
    cout << "\n You walk a couple steps forward...";
    cout << "You encountered a \033[0;91mRed Slime\033[0;37m";
    RSlime_hp = 50;
    loop2 = 0;
    system("clear");
    while(loop2 == 0){
        srand(time(0));
        int monster_attack = std::rand() % 4;
        //1 and 2 = Attack, 3 = Dodge, 4 = run
        cout << "\n\033[0;91mRed Slime\033[0;37m Hp:\033[0;91m"; 
        red_Slime_HBar(); 
        cout << "\033[0;37m\n\n\n";
        cout << "\nPlayer 1 Stats Hp:";
        health_bar(); 
        cout << " Mp:\033[0;94m";
        magic_bar();
        cout << "\n\033[0;93m";
        cout << "Gold:" << gold;;
        cout << "\n\033[0;37m";
        cout << "\nWhat Will you do ( Attack / Dodge / Bag / Run ):";
        cin >> player_input;
        if(player_input == "Attack" or player_input == "attack"){
            if(rizz_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / Rizz):";
            }
            else if(lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB):";
            }
            else if (rizz_counter == 1 && lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB / Rizz):";
            }
            else{
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB ):";
            }
            cin >> player_input;
            if(player_input == "FB" or player_input == "fb"){
                magic -= fireball_mp;
                cout << "\n\nYou throw a Fire Ball...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    RSlime_hp -= fireball_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "LB" or player_input == "lb"){
                magic -= lightning_mp;
                cout << "\n\nYou throw a Lightning Bolt...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    RSlime_hp -= lightning_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "Sword" or player_input == "sword"){
                //string key = sword;
                vector<string>::iterator it = find(player_inventory.begin(), player_inventory.end(), sword);
                if(it != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        RSlime_hp -= sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
                vector<string>::iterator it2 = find(player_inventory.begin(), player_inventory.end(), iron_sword);
                if(it2 != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Iron Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        RSlime_hp -= iron_sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
            }
            else if(player_input == "Rizz" or player_input == "rizz"){
                cout << "You Pull......IT........out and show it to the monster\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout << "The Monster Get's Flustered then overheats into a puddle of goop\n";
                RSlime_hp -= Rizz_dp;
            }
        }
        else if(player_input == "Dodge" or player_input == "dodge"){
            cout << "\nYou dodge any harm that came your way and restored your health due to a rune you stepped on.\n";
        }
        else if(player_input == "Bag" or player_input == "bag"){
            for (const string& i : player_inventory){
                cout << i << "\n  \n";
            }
            cout << "Would you like to use a item? (Yes/No) :";
            cin >> player_input;
            if(player_input == "No" or player_input == "no"){
                
            }
            else if(player_input == "Yes" or player_input == "yes"){
                cout << "\nWhat Would you like to use the Health or Magic Potion (Health / Magic) :";
                cin >> player_input;
                if(player_input == "Health" or player_input == "health"){
                    if(health_counter >= 1){
                        cout << "You Use a Healing Scroll";
                        Health_Potion();
                    }
                    else{
                        cout << "You don't have the required item...";
                    }
                }
                else if(player_input == "Magic" or player_input == "magic"){
                    if(magic_counter >= 1){
                        cout << "You Use a Magic Scroll";
                        Magic_Potion();
                    }
                    else{
                        cout << "You don't have the required item";
                    }
                }
            }
        }
        else if(player_input == "Run" or player_input == "run"){
            cout << "\nYou Run away from the Monster\n";
            loop2 += 1;
        }
        
        if(monster_attack == 1 or monster_attack == 2){
            cout << "You were hit by the monster!!!!\n";
            health -= RSlime_dp;
        }
        else if(monster_attack == 3){
            cout << "The Monster Dodged\n";
            RSlime_hp == 100;
        }
        else if(monster_attack == 4){
            cout << "The Monster ran AWAY!!!\n";
            loop2 += 1;
        }
        player_death();
        RSlime_death();
        sleep_for(seconds(3));
        sleep_until(system_clock::now());
        system("clear");
    }
}
void Blue_Slime(){
    cout << "\n You walk a couple steps forward...";
    cout << "You encountered a \033[0;94mBlue Slime\033[0;37m";
    BSlime_hp = 25;
    loop2 = 0;
    system("clear");
    while(loop2 == 0){
        srand(time(0));
        int monster_attack = std::rand() % 4;
        //1 and 2 = Attack, 3 = Dodge, 4 = run
        cout << "\n\033[0;94mBlue Slime\033[0;37m Hp:\033[0;91m"; 
        blue_Slime_HBar();
        cout << "\033[0;37m\n\n\n";
        cout << "\nPlayer 1 Stats Hp:";
        health_bar(); 
        cout << " Mp:\033[0;94m";
        magic_bar();
        cout << "\n\033[0;93m";
        cout << "Gold:" << gold;
        cout << "\n\033[0;37m";
        cout << "\nWhat Will you do ( Attack / Dodge / Bag / Run ):";
        cin >> player_input;
        if(player_input == "Attack" or player_input == "attack"){
            if(rizz_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / Rizz):";
            }
            else if(lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB):";
            }
            else if (rizz_counter == 1 && lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB / Rizz):";
            }
            else{
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB ):";
            }
            cin >> player_input;
            if(player_input == "FB" or player_input == "fb"){
                magic -= fireball_mp;
                cout << "\n\nYou throw a Fire Ball...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    BSlime_hp -= fireball_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "LB" or player_input == "lb"){
                magic -= lightning_mp;
                cout << "\n\nYou throw a Lightning Bolt...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    BSlime_hp -= lightning_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "Sword" or player_input == "sword"){
                //string key = sword;
                vector<string>::iterator it = find(player_inventory.begin(), player_inventory.end(), sword);
                if(it != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        BSlime_hp -= sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
                vector<string>::iterator it2 = find(player_inventory.begin(), player_inventory.end(), iron_sword);
                if(it2 != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Iron Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        BSlime_hp -= iron_sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
            }
            else if(player_input == "Rizz" or player_input == "rizz"){
                cout << "You Pull......IT........out and show it to the monster\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout << "The Monster Get's Flustered then overheats into a puddle of goop\n";
                BSlime_hp -= Rizz_dp;
            }
        }
        else if(player_input == "Dodge" or player_input == "dodge"){
            cout << "\nYou dodge any harm that came your way and restored your health due to a rune you stepped on.\n";
            health = 100;
        }
        else if(player_input == "Bag" or player_input == "bag"){
            for (const string& i : player_inventory){
                cout << i << "\n  \n";
            }
            cout << "Would you like to use a item? (Yes/No) :";
            cin >> player_input;
            if(player_input == "No" or player_input == "no"){
                
            }
            else if(player_input == "Yes" or player_input == "yes"){
                cout << "\nWhat Would you like to use the Health or Magic Potion (Health / Magic) :";
                cin >> player_input;
                if(player_input == "Health" or player_input == "health"){
                    if(health_counter >= 1){
                        cout << "You Use a Healing Scroll";
                        Health_Potion();
                    }
                    else{
                        cout << "You don't have the required item...";
                    }
                }
                else if(player_input == "Magic" or player_input == "magic"){
                    if(magic_counter >= 1){
                        cout << "You Use a Magic Scroll";
                        Magic_Potion();
                    }
                    else{
                        cout << "You don't have the required item";
                    }
                }
            }
        }
        else if(player_input == "Run" or player_input == "run"){
            cout << "\nYou Run away from the Monster\n";
            loop2 += 1;
        }
        
        if(monster_attack == 1 or monster_attack == 2){
            cout << "You were hit by the monster!!!!\n";
            health -= BSlime_dp;
        }
        else if(monster_attack == 3){
            cout << "The Monster Dodged\n";
            BSlime_hp == 100;
        }
        else if(monster_attack == 4){
            cout << "The Monster ran AWAY!!!\n";
            loop2 += 1;
        }
        player_death();
        BSlime_death();
        sleep_for(seconds(3));
        sleep_until(system_clock::now());
        system("clear");
    }
}
void Dire_Wolf(){
    cout << "\n You walk a couple steps forward...";
    cout << "You encountered a \033[0;95mDire Wolf\033[0;37m (Gurdian of the Forest)";
    DWolf_hp = 100;
    loop2 = 0;
    system("clear");
    while(loop2 == 0){
        srand(time(0));
        int monster_attack = std::rand() % 4;
        //1 and 2 = Attack, 3 = Dodge, 4 = run
        cout << "\n\033[0;95mDire Wolf\033[0;37m Hp:\033[0;91m";
        dire_Wolf_Hbar(); 
        cout << "\033[0;37m\n\n\n";
        cout << "\nPlayer 1 Stats Hp:";
        health_bar(); 
        cout << " Mp:\033[0;94m";
        magic_bar();
        cout << "\n\033[0;93m";
        cout << "Gold:" << gold;
        cout << "\n\033[0;37m";
        cout << "\nWhat Will you do ( Attack / Dodge / Bag / Run ):";
        cin >> player_input;
        if(player_input == "Attack" or player_input == "attack"){
            if(rizz_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / Rizz):";
            }
            else if(lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB):";
            }
            else if (rizz_counter == 1 && lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB / Rizz):";
            }
            else{
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB ):";
            }
            cin >> player_input;
            if(player_input == "FB" or player_input == "fb"){
                magic -= fireball_mp;
                cout << "\n\nYou throw a Fire Ball...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    DWolf_hp -= fireball_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "LB" or player_input == "lb"){
                magic -= lightning_mp;
                cout << "\n\nYou throw a Lightning Bolt...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    DWolf_hp -= lightning_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "Sword" or player_input == "sword"){
                //string key = sword;
                vector<string>::iterator it = find(player_inventory.begin(), player_inventory.end(), sword);
                if(it != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        DWolf_hp -= sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
                vector<string>::iterator it2 = find(player_inventory.begin(), player_inventory.end(), iron_sword);
                if(it2 != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Iron Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        DWolf_hp -= iron_sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
            }
            else if(player_input == "Rizz" or player_input == "rizz"){
                cout << "You Pull......IT........out and show it to the monster\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout << "The Monster Get's Flustered and Overheats...Soon Disinigrating!\n";
                DWolf_hp -= Rizz_dp;
            }
        }
        else if(player_input == "Dodge" or player_input == "dodge"){
            cout << "\nYou dodge any harm that came your way and restored your health due to a rune you stepped on.\n";
            health = 100;
        }
        else if(player_input == "Bag" or player_input == "bag"){
            for (const string& i : player_inventory){
                cout << i << "\n  \n";
            }
            cout << "Would you like to use a item? (Yes/No) :";
            cin >> player_input;
            if(player_input == "No" or player_input == "no"){
                
            }
            else if(player_input == "Yes" or player_input == "yes"){
                cout << "\nWhat Would you like to use the Health or Magic Potion (Health / Magic) :";
                cin >> player_input;
                if(player_input == "Health" or player_input == "health"){
                    if(health_counter >= 1){
                        cout << "You Use a Healing Scroll";
                        Health_Potion();
                    }
                    else{
                        cout << "You don't have the required item...";
                    }
                    
                    // cout << "You Use a Healing Scroll";
                    // Health_Potion();
                }
                else if(player_input == "Magic" or player_input == "magic"){
                    if(magic_counter >= 1){
                        cout << "You Use a Magic Scroll";
                        Magic_Potion();
                    }
                    else{
                        cout << "You don't have the required item";
                    }
                }
            }
        }
        else if(player_input == "Run" or player_input == "run"){
            cout << "\nYou Run away from the Monster\n";
            loop2 += 1;
        }
        
        if(monster_attack == 1 or monster_attack == 2){
            cout << "You were hit by the monster!!!!\n";
            health -= DWolf_dp;
        }
        else if(monster_attack == 3){
            cout << "The Monster Dodged\n";
            DWolf_hp == 100;
        }
        else if(monster_attack == 4){
            cout << "The Monster ran AWAY!!!\n";
            loop2 += 1;
        }
        player_death();
        DWolf_death();
        sleep_for(seconds(3));
        sleep_until(system_clock::now());
        system("clear");
    }
}
void Goblin(){
    cout << "\n You walk a couple steps forward...";
    cout << "You encountered a \033[0;92mGoblin\033[0;37m";
    loop2 = 0;
    system("clear");
    Goblin_hp = 30;
    while(loop2 == 0){
        // if(health <= 0){
        //     cout << "GAME OVER......You didn't get to a bonfire in time!\n";
        //     loop2 += 2;
        // }
        // else if(RSlime_hp <= 0){
        //     cout << "\nYou Killed the Monster!!!\n\n15g was added to your pouch.";
        //     gold += 15;
        //     loop2 += 1;
        // }
        srand(time(0));
        int monster_attack = std::rand() % 4;
        //1 and 2 = Attack, 3 = Dodge, 4 = run
        cout << "\n\033[0;92mGoblin\033[0;37m Hp:\033[0;91m";
        Goblin_HBar(); 
        cout << "\033[0;37m\n\n\n";
        cout << "\nPlayer 1 Stats Hp:";
        health_bar(); 
        cout << " Mp:\033[0;94m";
        magic_bar();
        cout << "\n\033[0;93m";
        cout << "Gold:" << gold;
        cout << "\n\033[0;37m";
        cout << "\nWhat Will you do ( Attack / Dodge / Bag / Run ):";
        cin >> player_input;
        if(player_input == "Attack" or player_input == "attack"){
            if(rizz_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / Rizz):";
            }
            else if(lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB):";
            }
            else if (rizz_counter == 1 && lightning_counter == 1){
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB / LB / Rizz):";
            }
            else{
                cout << "\nWhat would you like to attack with your Sword or Fire Ball (Sword / FB ):";
            }
            cin >> player_input;
            if(player_input == "FB" or player_input == "fb"){
                magic -= fireball_mp;
                cout << "\n\nYou throw a Fire Ball...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    Goblin_hp -= fireball_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "LB" or player_input == "lb"){
                magic -= lightning_mp;
                cout << "\n\nYou throw a Lightning Bolt...";
                if(monster_attack == 1 or monster_attack == 2){
                    cout << "IT HIT!!\n";
                    Goblin_hp -= lightning_dp;
                }
                else if(monster_attack == 3){
                    cout << "The Moster Dodged it..\n";
                }
                else if(monster_attack == 4){
                    cout << "The Monster Ran Away\n";
                    loop2 += 1;
                }
            }
            else if(player_input == "Sword" or player_input == "sword"){
                //string key = sword;
                vector<string>::iterator it = find(player_inventory.begin(), player_inventory.end(), sword);
                if(it != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        Goblin_hp -= sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
                vector<string>::iterator it2 = find(player_inventory.begin(), player_inventory.end(), iron_sword);
                if(it2 != player_inventory.end()){
                    cout << "\n\nYou try to strike with your Iron Sword...";
                    if(monster_attack == 1 or monster_attack == 2){
                        cout << "IT HIT!!\n";
                        Goblin_hp -= iron_sword_stats;
                    }
                    else if(monster_attack == 3){
                        cout << "The Moster Dodged it..\n";
                    }
                    else if(monster_attack == 4){
                        cout << "The Monster Ran Away\n";
                        loop2 += 1;
                    }
                }
            }
            else if(player_input == "Rizz" or player_input == "rizz"){
                cout << "You Pull......IT........out and show it to the monster\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout << "The Monster Get's Flustered and Overheats...Soon Disinigrating!\n";
                Goblin_hp -= Rizz_dp;
            }
        }
        else if(player_input == "Dodge" or player_input == "dodge"){
            cout << "\nYou dodge any harm that came your way and restored your health due to a rune you stepped on.\n";
            health = 100;
        }
        else if(player_input == "Bag" or player_input == "bag"){
            for (const string& i : player_inventory){
                cout << i << "\n  \n";
            }
            cout << "Would you like to use a item? (Yes/No) :";
            cin >> player_input;
            if(player_input == "No" or player_input == "no"){
                
            }
            else if(player_input == "Yes" or player_input == "yes"){
                cout << "\nWhat Would you like to use the Health or Magic Potion (Health / Magic) :";
                cin >> player_input;
                if(player_input == "Health" or player_input == "health"){
                    if(health_counter >= 1){
                        cout << "You Use a Healing Scroll";
                        Health_Potion();
                    }
                    else{
                        cout << "You don't have the required item...";
                    }
                    
                    // cout << "You Use a Healing Scroll";
                    // Health_Potion();
                }
                else if(player_input == "Magic" or player_input == "magic"){
                    if(magic_counter >= 1){
                        cout << "You Use a Magic Scroll";
                        Magic_Potion();
                    }
                    else{
                        cout << "You don't have the required item";
                    }
                    // cout << "You Use a Magic Scroll";
                    // Magic_Potion();
                }
            }
        }
        else if(player_input == "Run" or player_input == "run"){
            cout << "\nYou Run away from the Monster\n";
            loop2 += 1;
        }
        
        if(monster_attack == 1 or monster_attack == 2){
            cout << "You were hit by the monster!!!!\n";
            health -= Goblin_dp;
        }
        else if(monster_attack == 3){
            cout << "The Monster Dodged\n";
            Goblin_hp == 100;
        }
        else if(monster_attack == 4){
            cout << "The Monster ran AWAY!!!\n";
            loop2 += 1;
        }
        player_death();
        Goblin_death();
        sleep_for(seconds(3));
        sleep_until(system_clock::now());
        system("clear");
    }
}
void Monster_Randomizer(){
    srand(time(0));
    int monster_rand = std::rand() % 9;
    if (monster_rand == 3 or monster_rand == 4){
        Red_Slime();
    }
    if(monster_rand == 1 or monster_rand == 2){
        Blue_Slime();
    }
    else if(monster_rand == 5 or monster_rand == 6){
        Dire_Wolf();
    }
    else if(monster_rand == 7 or monster_rand == 8){
        Goblin();
    }
    else if(monster_rand <= 0){
       cout << "You encounter nothing..."; 
    }
}
void Encounter_Randomizer(){
    srand(time(0));
    int encounter = std::rand() % 2;
    if (encounter == 1){
        Monster_Randomizer();
    }
    else if(encounter == 2 || encounter <= 0){
        cout << "\nYou take a couple steps forward...nothing\n";
    }
}