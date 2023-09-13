#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
// Books for Library

// ----------Blank Page----------
// else if(book_1_page == ){
//             cout <<"  /==============================|\n";
//             cout <<" /                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               |\n";
//             cout <<" |                               /\n";
//             cout <<" |==============================/ \n\n";
//         }

//Book 1
void Book_1(){
    //Book 1 Variables
    int book_1_loop = 0;
    int book_1_page = 0;
    string book_1_turn;
    while (book_1_loop == 0){
      system ("clear");
      if (book_1_page == 0){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |          The History          |\n";
	  cout << " |               of              |\n";
	  cout << " |    The country of Winhelm     |\n";
	  cout << " |                               |\n";
	  cout << " |         ##        ##          |\n";
	  cout << " |         ##   ##   ##          |\n";
	  cout << " |         ##   ##   ##          |\n";
	  cout << " |         ##   ##   ##          |\n";
	  cout << " |         ##   ##   ##          |\n";
	  cout << " |           ###  ###            |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |        By: Timmothy. B        |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_1_page == 1){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  The City of Winhelm was home |\n";
	  cout << " |  to many strong warrior's.    |\n";
	  cout << " |  But was most know for their  |\n";
	  cout << " |  Powerful use of Magic and    |\n";
	  cout << " |  Mages.                       |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |  Winhelm was a more advance   |\n";
	  cout << " |  country with its profound    |\n";
	  cout << " |  use of Magic. Using magic    |\n";
	  cout << " |  for use in education,        |\n";
	  cout << " |  medication, daily life,      |\n";
	  cout << " |  etc.....                     |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 1                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_1_page == 2){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  The people of Winhelm lived  |\n";
	  cout << " |  very peacful lives and       |\n";
	  cout << " |  a easy one at that thanks    |\n";
	  cout << " |  to magic. But soon later     |\n";
	  cout << " |  the country fell into a      |\n";
	  cout << " |  state of war with the        |\n";
	  cout << " |  nation of Himdal.            |\n";
	  cout << " |                               |\n";
	  cout << " |  Himdal was a powerful        |\n";
	  cout << " |  nation with strong           |\n";
	  cout << " |  warriors and fighters.       |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 2                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_1_page == 3){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  Windhelm went into a phase   |\n";
	  cout << " |  of mass enchancment in       |\n";
	  cout << " |  the Magical and arcane arts. |\n";
	  cout << " |  2 years into the war both    |\n";
	  cout << " |  nations were at a stalemate, |\n";
	  cout << " |  but soon after a young man   |\n";
	  cout << " |  by the name of John Raven    |\n";
	  cout << " |  Arrived in Windhelm.         |\n";
	  cout << " |                               |\n";
	  cout << " |  He was a user of undead      |\n";
	  cout << " |  magic and said to hold a     |\n";
	  cout << " |  spell to wipe out a nation.  |\n";
	  cout << " |  This Spell was called...     |\n";
	  cout << " |  \"Great Plauge\"               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 3                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_1_page == 4){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  With that spell John.R       |\n";
	  cout << " |  the nation of Himdal away    |\n";
	  cout << " |  single handedly.             |\n";
	  cout << " |                               |\n";
	  cout << " |  John.C.Raven soon after      |\n";
	  cout << " |  became a hero and leader     |\n";
	  cout << " |  of the nation known as       |\n";
	  cout << " |  Windhelm or now known as     |\n";
	  cout << " |  windwake.                    |\n";
	  cout << " |                               |\n";
	  cout << " |  He was dubbed Archmage,      |\n";
	  cout << " |  a high honor of the Mage     |\n";
	  cout << " |  world and ruler of           |\n";
	  cout << " |  Windwake and rule till this  |\n";
	  cout << " |  very day.                    |\n";
	  cout << " |                               |\n";
	  cout << " | Page 4                        /\n";
	  cout << " |==============================/ \n\n";
	}//Page changers / Page Turn for book 1
    if (book_1_page == 0){
	  cout << "\n\nOpen the book the Page? (Yes / No):";
	  cin >> book_1_turn;
	  if (book_1_turn == "Yes" or book_1_turn == "yes"){
	      book_1_page += 1;
	  }
	  else{
	      book_1_loop += 1;
	      system("clear");
	  }
    }
    else if (book_1_page < 4){
	  cout << "\n\nNext page or Back a Page (Back / Next):";
	  cin >> book_1_turn;
	  if (book_1_turn == "Next" or book_1_turn == "next"){
	      book_1_page += 1;
	    }
	  else if (book_1_turn == "Back" or book_1_turn == "back"){
	      book_1_page -= 1;
	    }
	}
    else if (book_1_page == 4){
	  cout << "\n\nTurn Back a Page or Leave? (Back / Leave):";
	  cin >> book_1_turn;
	  if (book_1_turn == "Back" or book_1_turn == "back"){
	      book_1_page -= 1;
	  }
	  else if(book_1_turn == "Leave" or book_1_turn == "Leave"){
	      book_1_loop -= 1;
	      system("clear");
	  }
    }
  }
}
//Book2
void Book_2(){
    //Book 2 Variables
    int book_2_loop = 0;
    int book_2_page = 0;
    string book_2_turn;
  while (book_2_loop == 0){
      system ("clear");
      if (book_2_page == 0)
	{
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |        How to Rizz up         |\n";
	  cout << " |       A Male or Female        |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |        By: Top G              |\n";
	  cout << " |             A.Tate            |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_2_page == 1){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  To Rizz up a Female it's     |\n";
	  cout << " |  Simple...Beat them in 69     |\n";
	  cout << " |  games of chess, have 24      |\n";
	  cout << " |  bugatti's, get absolutly     |\n";
	  cout << " |  jacked, and Take nothing.    |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |  Take everything personally   |\n";
	  cout << " |  and when someone  wants to   |\n";
	  cout << " |  fight, go right in and       |\n";
	  cout << " |  don't back down like a wimp. |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 1                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_2_page == 2){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  Now for a Man it's easier,   |\n";
	  cout << " |  take your bro to a gym, get  |\n";
	  cout << " |  pumped with some pre-workout |\n";
	  cout << " |  and start getting rimped.    |\n";
	  cout << " |                               |\n";
	  cout << " |  If you want your bro to      |\n";
	  cout << " |  know how you feel, you just  |\n";
	  cout << " |  take him out on a yacht,     |\n";
	  cout << " |  pop a bottle of your finest  |\n";
	  cout << " |  wine, and tell him,          |\n";
	  cout << " |  you have by that point       |\n";
	  cout << " |  rizzed up your man.          |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 2                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_2_page == 3){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  You have now learned the     |\n";
	  cout << " |  art of \"Rizzing\". This       |\n";
	  cout << " |  allows you to talk to NPC's  |\n";
	  cout << " |  and when you simply say      |\n";
	  cout << " |  \"Rizz\" you can get some      |\n";
	  cout << " |  unique dialogue.             |\n";
	  cout << " |                               |\n";
	  cout << " |  You have unlocked this       |\n";
	  cout << " |  Thanks to your strive for    |\n";
	  cout << " |  knowledge and lore.          |\n";
	  cout << " |                               |\n";
	  cout << " |  Thank You!                   |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 3                        /\n";
	  cout << " |==============================/ \n\n";
	}
    //Page changers / Page Turn for book 1
    if (book_2_page == 0){
	  cout << "\n\nOpen the book the Page? (Yes / No):";
	  cin >> book_2_turn;
	  if (book_2_turn == "Yes" or book_2_turn == "yes"){
	      book_2_page += 1;
	  }
	  else{
	      book_2_loop += 1;
	      system("clear");
	  }
	}
    else if (book_2_page < 3){
	  cout << "\n\nNext page or Back a Page (Back / Next):";
	  cin >> book_2_turn;
	  if (book_2_turn == "Next" or book_2_turn == "next"){
	      book_2_page += 1;
	    }
	  else if (book_2_turn == "Back" or book_2_turn == "back"){
	      book_2_page -= 1;
	    }
	}
    else if (book_2_page == 3){
	  cout << "\n\nTurn Back a Page or Leave? (Back / Leave):";
	  cin >> book_2_turn;
	  if (book_2_turn == "Back" or book_2_turn == "back"){
	      book_2_page -= 1;
	    }
	  else{
	      book_2_loop += 1;
	      system("clear");
	  }
	}
  }
}
//Book 3
void Book_3(){
    //Book 3 Variables
    int book_3_loop = 0;
    int book_3_page = 0;
    string book_3_turn;
    while (book_3_loop == 0){
      system ("clear");
      if (book_3_page == 0){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |         History of the        |\n";
	  cout << " |        Mage Council of        |\n";
	  cout << " |           Windwake            |\n";
	  cout << " |                               |\n";
	  cout << " |                                |\n";
	  cout << " |  \"A Great Mage is only as    |\n";
	  cout << " |  strong as his wits and       |\n";
	  cout << " |  resolve.\"                    |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |      By: Historian of the     |\n";
	  cout << " |           Mage Council        |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_3_page == 1){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  The Council was formed by    |\n";
	  cout << " |  John.C.Raven, a Pioneer of   |\n";
	  cout << " |  magic. With his advance and  |\n";
	  cout << " |  adept use of magic he built  |\n";
	  cout << " |  the Council building using   |\n";
	  cout << " |  earth magic a now forbidden  |\n";
	  cout << " |  time spell.                  |\n";
	  cout << " |                               |\n";
	  cout << " |  John.R has made and found    |\n";
	  cout << " |  many new and powerful spells |\n";
	  cout << " |  but, due to their strain on  |\n";
	  cout << " |  the weilder they have been   |\n";
	  cout << " |  either limted or forbidden.  |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 1                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_3_page == 2){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |        Limited Spells         |\n";
	  cout << " |  1. Earth Titan conjour       |\n";
	  cout << " |   -- Conjour a Titan of Rock  |\n";
	  cout << " |  2. Fire swarm                |\n";
	  cout << " |   -- Surround person in Fire  |\n";
	  cout << " |  3. Soul bound                |\n";
	  cout << " |   -- Make a unbreakable Oath  |\n";
	  cout << " |  4. Great White               |\n";
	  cout << " |   -- Makes user bigger and    |\n";
	  cout << " |   stronger.                   |\n";
	  cout << " |                               |\n";
	  cout << " |  These spells were limited to |\n";
	  cout << " |  magical item use or mage     |\n";
	  cout << " |  council member use due to    |\n";
	  cout << " |  illegal actions and events.  |\n";
	  cout << " |                               |\n";
	  cout << " | Page 2                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_3_page == 3){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |        Forbidden Spells       |\n";
	  cout << " |  1. Time Dialation            |\n";
	  cout << " |  -- Gives user control over   |\n";
	  cout << " |  time within a 5 meter range. |\n";
	  cout << " |  2. Soul Burn                 |\n";
	  cout << " |  -- Burns enemies soul to a   |\n";
	  cout << " |  point of no extinguishing.   |\n";
	  cout << " |  3. Magic Null                |\n";
	  cout << " |  -- Nullifies targets magic   |\n";
	  cout << " |  abilities for 48 hours.      |\n";
	  cout << " |  4.The Great Plauge           |\n";
	  cout << " |  -- ONLY HIGH MAGE COUNCIL -- |\n";
	  cout << " |                               |\n";
	  cout << " |  Spell Forbidden due to high  |\n";
	  cout << " |  casulty count and War crime  |\n";
	  cout << " |  Involvment.                  |\n";
	  cout << " | Page 3                        /\n";
	  cout << " |==============================/ \n\n";
	}
    else if (book_3_page == 4){
	  cout << "  /==============================|\n";
	  cout << " /                               |\n";
	  cout << " |  John.R recruten the first    |\n";
	  cout << " |  members, now known as the    |\n";
	  cout << " |  Mage elders.                 |\n";
	  cout << " |                               |\n";
	  cout << " |  The Highcouncil is made up   |\n";
	  cout << " |  up of trusted and powerful   |\n";
	  cout << " |  Mages in not only in         |\n";
	  cout << " |  Windwake but all around the  |\n";
	  cout << " |  world.                       |\n";
	  cout << " |                               |\n";
	  cout << " |  They Make the decisions of   |\n";
	  cout << " |  spell usage in daily life,   |\n";
	  cout << " |  law enforcment, and          |\n";
	  cout << " |  Limited / Forbidden Spells.  |\n";
	  cout << " |                               |\n";
	  cout << " |                               |\n";
	  cout << " | Page 4                        /\n";
	  cout << " |==============================/ \n\n";
	}
	else if(book_3_page == 5){
	    cout <<"  /==============================|\n";
        cout <<" /                               |\n";
        cout <<" |  The Mage council has many    |\n";
        cout <<" |  job but the most important   |\n";
        cout <<" |  is running the Mage College  |\n";
        cout <<" |  aka \"Windwak's school of     |\n";
        cout <<" |  Magic\".                      |\n";
        cout <<" |                               |\n";
        cout <<" |  High Council Member Thane.D  |\n";
        cout <<" |  is the Main Teacher and      |\n";
        cout <<" |  Head Master but he is        |\n";
        cout <<" |  Overseen by Elder James.B.   |\n";
        cout <<" |                               |\n";
        cout <<" |  Anyone can attend but most   |\n";
        cout <<" |  that do are extremely gifted |\n";
        cout <<" |  or have been chosen by a     |\n";
        cout <<" |  Council member.              |\n";
        cout <<" |                               |\n";
        cout <<" | Page 5                        /\n";
        cout <<" |==============================/ \n\n";
        }
	//Page changers / Page Turn for book 3
    if (book_3_page == 0){
	  cout << "\n\nOpen the book the Page? (Yes / No):";
	  cin >> book_3_turn;
	  if (book_3_turn == "Yes" or book_3_turn == "yes"){
	      book_3_page += 1;
	   }
	   else{
	      book_3_loop += 1;
	      system("clear");
	  }
	}
    else if (book_3_page < 5){
	  cout << "\n\nNext page or Back a Page (Back / Next):";
	  cin >> book_3_turn;
	  if (book_3_turn == "Next" or book_3_turn == "next"){
	      book_3_page += 1;
	    }
	  else if (book_3_turn == "Back" or book_3_turn == "back"){
	      book_3_page -= 1;
	    }
	}
    else if (book_3_page == 5){
	  cout << "\n\nTurn Back a Page or Leave? (Back / Leave):";
	  cin >> book_3_turn;
	  if (book_3_turn == "Back" or book_3_turn == "back"){
	      book_3_page -= 1;
	    }
	  else{
	      book_3_loop += 1;
	      system("clear");
	  }
    }
  }
}
