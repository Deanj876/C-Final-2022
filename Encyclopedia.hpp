#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
//Loop
int story_time = 0;
//Page variables
int page_counter = 0;
string turn_page;
//Empty page
// cout <<"  /==============================|\n";
// cout <<" /                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               |\n";
// cout <<" |                               /\n";
// cout <<" |==============================/ \n\n";

//Actual Encyclopedia pages
void Encyclopedia(){
    while(story_time == 0){
        system("clear");
        if(page_counter == 0){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |       The Encyclopedia        |\n";
            cout <<" |              of               |\n";
            cout <<" |       Worldly Knowledge       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |            Weapons            |\n";
            cout <<" |            Monsters           |\n";
            cout <<" |       Amulets and Charms      |\n";
            cout <<" |             Tombs             |\n";
            cout <<" |             Spells            |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |        By: John.C.Raven       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |From: Grandpa                  /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 1){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |         ##        ##          |\n";
            cout <<" |         ##   ##   ##          |\n";
            cout <<" |         ##   ##   ##          |\n";
            cout <<" |         ##   ##   ##          |\n";
            cout <<" |         ##   ##   ##          |\n";
            cout <<" |           ###  ###            |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 2){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Wooden Sword                 |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Cost: 10g               |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 25dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Basic Weapon for Beginning |\n";
            cout <<" |  adventurers.                 |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 2                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 3){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Iron Sword                   |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Cost: 50g               |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 50dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A more advanced weapon for   |\n";
            cout <<" |  adventurers. usually used by |\n";
            cout <<" |  Royal Knights                |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 3                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 4){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |          ###     ###          |\n";
            cout <<" |          ####   ####          |\n";
            cout <<" |          ##### #####          |\n";
            cout <<" |          ### ### ###          |\n";
            cout <<" |          ###     ###          |\n";
            cout <<" |          ###     ###          |\n";
            cout <<" |          ###     ###          |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 5){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Blue Slime                   |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 5g               |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 10dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  Most Basic Monster. Fairly   |\n";
            cout <<" |  weak and not much of a       |\n";
            cout <<" |  threat.                      |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 5                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 6){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Red Slime                    |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 15g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 25dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A variation of the Blue      |\n";
            cout <<" |  Slime. More powerful and     |\n";
            cout <<" |  fierce.                      |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 6                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 7){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Goblin                       |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 10g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 20dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  Little Green Creatures.      |\n";
            cout <<" |  They Like to hunt in tribal  |\n";
            cout <<" |  packs and swarm their        |\n";
            cout <<" |  victims.                     |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 7                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 8){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Dire Wolf                    |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 20g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 25dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  Little is known about the    |\n";
            cout <<" |  dire wolf. They are powerful |\n";
            cout <<" |  creatures blessed by the     |\n";
            cout <<" |  goddess of the forest for    |\n";
            cout <<" |  it's, and the forests        |\n";
            cout <<" |  protection.                  |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 8                        /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 9){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |          ###     ######       |\n";
            cout <<" |         ## ##   ##    ##      |\n";
            cout <<" |        ##   ##  ##            |\n";
            cout <<" |       ##     ## ##            |\n";
            cout <<" |       ######### ##            |\n";
            cout <<" |       ##     ## ##    ##      |\n";
            cout <<" |       ##     ##  ######       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 10){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Amulet of Restoration        |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 20g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Health restored: 100hp       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Gift from a beloved one,   |\n";
            cout <<" |  when in danger it restores   |\n";
            cout <<" |  your body, and mind to a     |\n";
            cout <<" |  previous state of comfort.   |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 10                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 11){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |         ############          |\n";
            cout <<" |         ############          |\n";
            cout <<" |             ####              |\n";
            cout <<" |             ####              |\n";
            cout <<" |             ####              |\n";
            cout <<" |             ####              |\n";
            cout <<" |             ####              |\n";
            cout <<" |             ####              |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 12){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Tomb of Rizz                 |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 100g             |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: Instant Kill  |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  The Tomb of Rizz is a        |\n";
            cout <<" |  powerful artifact, only      |\n";
            cout <<" |  being used the the smart,    |\n";
            cout <<" |  strong, and bold.            |\n";
            cout <<" |                               |\n";
            cout <<" |  The Tomb has yet to find a   |\n";
            cout <<" |  equal in combat.             |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 12                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 13){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |             #####             |\n";
            cout <<" |            #     #            |\n";
            cout <<" |            #                  |\n";
            cout <<" |             #####             |\n";
            cout <<" |                  #            |\n";
            cout <<" |            #     #            |\n";
            cout <<" |             #####             |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 14){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Fire Ball Spell              |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 20g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 10dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Basic Fire ball spell      |\n";
            cout <<" |  with a common reputation     |\n";
            cout <<" |  with newer adveturers.       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 14                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 15){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Lightning Spell              |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 100g             |\n";
            cout <<" |                               |\n";
            cout <<" |  Damage output: 35dmg         |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Lightning spell is a more  |\n";
            cout <<" |  advance spell but yet very   |\n";
            cout <<" |  common with seasoned         |\n";
            cout <<" |  adventurers and a must have. |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 15                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 16){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Healing spell                |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 25g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Health Restored: 100Hp       |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Common Spell. Commonly     |\n";
            cout <<" |  used for medical practice    |\n";
            cout <<" |  between the humans and elves.|\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 16                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 17){
            cout <<"  /==============================|\n";
            cout <<" /                               |\n";
            cout <<" |  Magic Restoration spell      |\n";
            cout <<" |                               |\n";
            cout <<" |  Gold Worth: 25g              |\n";
            cout <<" |                               |\n";
            cout <<" |  Magic Restored: 100Mp        |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |  A Common Spell.              |\n";
            cout <<" |  Commonly used with the Mage  |\n";
            cout <<" |  association.                 |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" |                               |\n";
            cout <<" | Page 17                       /\n";
            cout <<" |==============================/ \n\n";
        }
        else if(page_counter == 18){
            cout <<"  /=================/ \n";
            cout <<" /                 /  \n";
            cout <<" |  The Great plau/   \n";
            cout <<" |               /    \n";
            cout <<" |              /     \n";
            cout <<" |             /      \n";
            cout <<" |  A spell use|      \n";
            cout <<" |  a whole tow|      \n";
            cout <<" |  Only used b|      \n";
            cout <<" |  the Stronge\\    \n";
            cout <<" |  of Mages.   \\   \n";
            cout <<" |                \\  \n";
            cout <<" |                |   \n";
            cout <<" |                |   \n";
            cout <<" |  Use of this s/    \n";
            cout <<" |  pays a great/     \n";
            cout <<" |              |     \n";
            cout <<" |              |     \n";
            cout <<" | Page 18       \\   \n";
            cout <<" |===============/  \n\n";
        }
        //Page changers / Page Turn
        if(page_counter == 0){
            cout << "\n\nOpen the book the Page? (Yes / No):";
            cin >> turn_page;
            if(turn_page == "Yes" or turn_page == "yes"){
                page_counter += 1;
            }
        }
        else if(page_counter >= 5){
            cout << "\n\nNext page or Back a Page (Back / Next / Leave):";
            cin >> turn_page;
            if(turn_page == "Next" or turn_page == "next"){
                page_counter += 1;
            }
            else if(turn_page == "Back" or turn_page == "back"){
                page_counter -= 1;
            }
            else{
                story_time += 1;
            }
        }
        else if(page_counter < 5){
            cout << "\n\nNext page or Back a Page (Back / Next):";
            cin >> turn_page;
            if(turn_page == "Next" or turn_page == "next"){
                page_counter += 1;
            }
            else if(turn_page == "Back" or turn_page == "back"){
                page_counter -= 1;
            }
        }
        else if(page_counter == 18){
            cout << "\n\nTurn Back a Page or Leave? (Back / Leave):";
            cin >> turn_page;
            if(turn_page == "Back" or turn_page == "back"){
                page_counter -= 1;
            }
            else{
                story_time += 1;
            }
        }
    }
}
