#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include "Middle_Man.hpp"
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//------------------------- To-do List -------------------------
// Add A temple for lore and a special item (Jungle Sphere)
// --Provide other page half of "The Great Plauge" spell in the encyclopedia
//   ^^^^^----PUT ON HOLD----^^^^^
//
// Add Rizz Power (Like Skyrim) to Rizz up the NPC's
//
// God of War Crossover
// ----Add Weapons----
// Blades of Chaos
// Leviathan Axe
// Draupnir Spear
// ----New Lore----
// How Weapons imerged?
// How you Find them?
// Add new Knowledge to Encyclopedia
//--------------------------------------------------------------
//
//------------------------- Notes ------------------------------
// This is the color coder ---> \033[0;31m
// Color Chart     FC  BC
// Bright Black    90  100
// Bright Red      91  101
// Bright Green    92  102
// Bright Yellow   93  103
// Bright Blue     94  104
// Bright Magenta  95  105
// Bright Cyan     96  106
// Bright White    97  107
//
// Note:1 
// figure out Sh: 1: clear not found message (Means System("clear") is spelled of formated incorrectly)
// 
// Note:2 
// sleep_for(seconds(5));
// sleep_until(system_clock::now());
// 
// Note:3
// NPC Name and Role List
// Mary The Guild Master (Greets you at the Guild Hall)
// Jeff The Innkeep (Greets you at the inn and ask for the gold cost)
// George The Shopkeep (The Basic Shop Keeper)
// Ricket The Shopkeep (The forbidden Shop Keeper)
// Thane The Hunter (Bounty Board Guy)
// James the Librarian (Book Keeper)
//-------------------------------------------------------------



//Game Variables
int loop1 = 0;
int reset = 0;
int room_title_coutner = 0;
//Main Game
int main_game_run = 0;
int main() {
    while(main_game_run == 0){
        while(loop1 == 0){
            if(room_title_coutner == 0){
                cout << "----It Has been 20 years since the King came into Power----\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout << "\n\n----But somthing about his Past and alliances with the foreign nation, and races doesn't seem right.----";
                sleep_for(seconds(8));
                sleep_until(system_clock::now());
                cout << "\n\n----You find a gift your decest Grandfather left for you with a note. \"You were always wanting to be a adventurer like me...\"----";
                sleep_for(seconds(8));
                sleep_until(system_clock::now());
                cout << "\n\n----\"I Gift you a Amulet with the power to calm your mind and a wooden sword. Go my child and bring peace to all\"----\n";
                sleep_for(seconds(8));
                sleep_until(system_clock::now());
                cout << "\n\n----With a new sense of confidence and Pride you grab your belonging and gear and start your journy to be a Adventurer!!!----\n";
                sleep_for(seconds(8));
                sleep_until(system_clock::now());
                system("clear");
            }
            cout <<("\033[0;92m /         #####                            #     #                       | \n");
            cout <<("/         #     # #    # # #      #####     #     #   ##   #      #       | \n");
            cout <<("|         #       #    # # #      #    #    #     #  #  #  #      #       | \n");
            cout <<("|         #  #### #    # # #      #    #    ####### #    # #      #       | \n");
            cout <<("|         #     # #    # # #      #    #    #     # ###### #      #       | \n");
            cout <<("|         #     # #    # # #      #    #    #     # #    # #      #       / \n");
            cout <<("|          #####   ####  # ###### #####     #     # #    # ###### ###### /  \033[0;37m\n\n\n");
            
            cout << "\n\033[0;93mGold pouch:" << gold << "g \033[0;00m";
            cout << "\n\n\033[0;96mMary The Guild Master:\033[0;00m Welcome Adventurer to the guild, what would you like to do?\n"; 
            cout << "(Rest) in our in, Check out our (Bounty) Board, Visit our Lovley (Shop), Visit our Lovley (Library), or Check your (Inventory): ";
            cin >> player_input;
            if(player_input == "Rest" or player_input == "rest"){
                system("clear");
                cout <<("\033[0;95m / #####                                                               ###                 |\n");
                cout <<("\033[0;94m/ #     #  #       ######  ######  #####   ######  #####    ####        #   #    #  #    # |\n");
                cout <<("\033[0;95m| #        #       #       #       #    #  #       #    #  #            #   ##   #  ##   # |\n");
                cout <<("\033[0;94m|  #####   #       #####   #####   #    #  #####   #    #   ####        #   # #  #  # #  # |\n");
                cout <<("\033[0;95m|       #  #       #       #       #####   #       #####        #       #   #  # #  #  # # |\n");
                cout <<("\033[0;94m| #     #  #       #       #       #       #       #   #   #    #       #   #   ##  #   ## /\n");
                cout <<("\033[0;95m|  #####   ######  ######  ######  #       ######  #    #   ####       ###  #    #  #    #/ \033[0;37m\n\n\n");
                
                cout << "\033[0;96mJeff The Innkeep:\033[0;00m Hello their friend if your Looking for a Place to sleep like a king you came to the right place.";
                cout << "\nWe do have a fee of 5 gold per night, Will you pay it?";
                cout << "( Yes / No ) :";
                cin >> player_input;
                if(player_input == "Yes" or player_input == "yes"){
                    cout << "\n";
                    cout << "\033[0;96mJeff The Innkeep:\033[0;00m Great! Here is your room key and have a good night!";
                    cout << "\n";
                    cout << "You feel refreshed and head back to the guild hall\n";
                    cout << "\n";
                    gold -= 5;
                    health = 100;
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                }
                else{
                    cout << "\n";
                    cout << "\033[0;96mJeff The Innkeep:\033[0;00m No...Well then I won't hold you here any longer, have a nice day adventurer!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                }
                system("clear");
            }
            else if(player_input == "Shop" or player_input == "shop"){
                shop();
                underground_shop();
            }
            else if(player_input == "Inventory" or player_input == "inventory"){
                Inventory();
            }
            else if(player_input == "Bounty" or player_input == "bounty"){
                cout << "Here are the current Bounties!\n";
                Bounty();
                cout << "\nWould you like to go on a Hunting Exabition? (Yes/No):";
                cin >> player_input;
                if(player_input == "Yes" or player_input == "yes"){
                    cout << "\n\033[0;96mThane The Hunter\033[0;00m: To the Hunt you go great Adventurer!";
                    loop1 += 1;
                }
                else if(player_input == "No" or player_input == "no"){
                    cout << "\n\033[0;96mThane The Hunter\033[0;00mCarry on in the Guild hall then.\n";
                }
                else if(player_input == "Rizz" or player_input == "rizz"){
                    cout << "\n\033[0;96mThane The Hunter\033[0;00m: I HAVE NO TIME NOR IN THE MOOD FOR SUCH A THING!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    cout << "\n\033[0;96mThane The Hunter\033[0;00m: GET OUT BEFORE I END YOU!!!!!!!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    system("clear");
                }
            }
            else if(player_input == "Library" or player_input == "library"){
                system("clear");
                //Library sigh like Sleepers Inn
                cout <<("\033[0;96m /#     #                         #                                                \\  \n");
                cout <<("/ #  #  #  #  #    #  #####       #        #  #####   #####     ##    #####   #   # \\ \n");
                cout <<("| #  #  #  #  ##   #  #    #      #        #  #    #  #    #   #  #   #    #   # #   |\n");
                cout <<("| #  #  #  #  # #  #  #    #      #        #  #####   #    #  #    #  #    #    #    |\n");
                cout <<("| #  #  #  #  #  # #  #    #      #        #  #    #  #####   ######  #####     #    |\n");
                cout <<("| #  #  #  #  #   ##  #    #      #        #  #    #  #   #   #    #  #   #     #    |\n");
                cout <<("|  ## ##   #  #    #  #####       #######  #  #####   #    #  #    #  #    #    #    |\033[0;00m\n\n\n");
                cout << "\033[0;96mJames The Librarian:\033[0;00m Hello friend, I am the local scholar that run the Library. We have 3 Great options....\nWhich one would you like to read!";
                cout << "\nBook (1), Book (2), Book (3), or (Leave) :";
                cin >> player_input;
                if(player_input == "1"){
                    cout << "\n\33[0;96mJames The Librarian:\033[0;00m Shelf 1, Book 5. Happy Reading Friend!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    Book_1();
                    
                }
                else if(player_input == "2"){
                    cout << "\n\33[0;96mJames The Librarian:\033[0;00m Shelf 3, Book 2. Happy Reading Friend!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    Book_2();
                }
                else if(player_input == "3"){
                    cout << "\n\33[0;96mJames The Librarian:\033[0;00m Shelf 2, Book 9. Happy Reading Friend!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    Book_3();
                }
                else if(player_input == "Rizz" or player_input == "rizz"){
                    cout << "\n\33[0;96mJames The Librarian:\033[0;00m Um..........well.......you are pretty book smart like me...\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    cout << "\n\33[0;96mJames The Librarian:\033[0;00m Let's go back to my place and read sometime, Have fun Adventurer!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    system("clear");
                }
                else{
                    cout << "\33[0;96mJames The Librarian:\033[0;00m Oh, Well....Good by then Friend!\n";
                    sleep_for(seconds(5));
                    sleep_until(system_clock::now());
                    system("clear");
                }
                
            }
            else if(player_input == "Rizz" or player_input == "rizz"){
                cout << "\n\n\033[0;96mMary The Guild Master:\033[0;00m Oh....Um......This is kinda sudden don't you think.\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                cout <<"\n\033[0;96mMary The Guild Master:\033[0;00m You are kinda cute.....and strong.....let's go out sometime!\n";
                sleep_for(seconds(5));
                sleep_until(system_clock::now());
                system("clear");
            }
            else{
                system("clear");
            }
            room_title_coutner += 1;
        }
        system("clear");
        cout << "\n\n\033[0;92m< The Great Forest >\033[0;37m\n\n";
        cout << "\n\nYou go out to the Forest hunting for some monsters!";
        sleep_for(seconds(5));
        sleep_until(system_clock::now());
        while(loop1 == 1){
           system("clear");
           Encounter_Randomizer();
           reset += 1;
           if(reset >= 3){
               cout << "\nWould you like to go back to the tavern? (Yes / No) :";
               cin >> player_input;
               if(player_input == "Yes" or player_input == "yes"){
                   loop1 -= 1;
               }
               else if(player_input == "No" or player_input == "no"){
                   
               }
           }
        }
    }
}