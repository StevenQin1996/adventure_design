#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "world.h"

void world::embark(Player* player)
{
        std::string _choice;
    std::string continue_on = "";
    std::cout << "WELCOME TO SAFE HAVEN!!!" << std::endl;
    std::cout << "This is a choose your own path style game where each desicion " << std::endl;
    std::cout << "can lead to great success, women, and gold!!!!" << std::endl << std::endl;
    std::cout << "Well...Our producers say we don't have the funding for WOMEN or GOLD," << std::endl;
    std::cout << "but at least you will be successfull!!" << std::endl;
    std::cout << "Anyways, Are you ready to embark on a wild journey?" << std::endl;
    std::getline (std::cin,_choice);
    while(true)
    {
        if(uppercase(_choice) == "YES")
        {
            continue_on = "YES";
            break;
        }
        else if(uppercase(_choice) == "NO")
        {
            std::cout << std::endl;
            std:: cout<<"Enter 'Yes' to continue the game or 'Quit' to exit."<<std::endl;
            std::getline (std::cin,_choice);
            while(true)
            {
                if(uppercase(_choice) == "YES")
                {
                    std::cout << std::endl;
                    continue_on = "YES";
                    break;//add a function to wipe everything on screen and start next chapter
                }
                else if(uppercase(_choice) == "QUIT")
                {
                    std::cout << std::endl;
                    std::cout << "You have QUIT the game!" << std::endl;
                    break;
                }
                std:: cout<<"Enter 'Yes' to continue the game or 'Quit' to exit."<<std::endl;
                std::getline (std::cin,_choice);
            }
            break;
        }
        
        else if (uppercase(_choice) == "Quit")
        {
            std::cout << "Ok, see you later!!!!" << std::endl;
            break;
        }
        
            std::cout << std::endl << "Ummmmmmmmmmmmmmmmmmmmmm! You did not answer my question..." << std::endl;
            std::cout << "Are you ready or not?  " << std::endl;
            std::cin.clear();
            std::getline (std::cin, _choice);
    
    }
    if(continue_on == "YES")
        next = new Chapter(player); 
}

void overall_choice::choice_I(Player* p)
{
    std::string choice;
    std::string continue_on = "";
    //std::cout << "----------------------------------------------CHAPTER_I: INTRODUCTION----------------------------------------------" << std::endl;
    std::cout << std::endl << "You wake up in a hospital bed early in the morning, head hurting," << std::endl;
    std::cout << "You cannot recall why or how you even ended up there." << std::endl;
    std::cout << "Should you look around?" << std::endl;
    std::cin.clear();
    std::getline (std::cin, choice);
    
    while(true)
    {
        if(uppercase(choice) == "NO")
        {
            std::cout << std::endl;
            std:: cout<<"Enter 'Yes' to continue the game or 'Quit' to exit."<<std::endl;
            std::cin.clear();
            std::getline (std::cin,choice);
            while(true)
            {
                if(uppercase(choice) == "YES")
                {
                    std::cout << std::endl;
                    continue_on = "YES";
                    break;
                }
                else if(uppercase(choice) == "QUIT")
                {
                    std::cout << std::endl;
                    std::cout << "You have QUIT the game!" << std::endl;
                    break;
                }
                std:: cout<<"Enter 'Yes' to continue the game or 'Quit' to exit."<<std::endl;
                std::cin.clear();
                std::getline (std::cin,choice);
            }
            break;
        }
        else if(uppercase(choice) == "YES")
        {
            std::cout << std::endl;
            continue_on = "YES";
            break;
        }
        std::cout << std::endl;
        
        std::cout << "Ummmmmmmmmmmmmmmmmmmmmm! You did not answer my question..." << std::endl;
        std::cout << "Should you look around? Yes! or No!" << std::endl;
        std::cin.clear();
        std::getline (std::cin, choice);
    }
    if(continue_on == "YES")
        choice_II(p);
}

void overall_choice::choice_II(Player *p)
{
    std::string pick;
    std::string continue_on = "";
    std::cout << "You get up from your bed and stand in the middle of the room" << std::endl;
    std::cout << "You should proably get out of the room and figure out what the heck is going on." << std::endl << std::endl;
    std::cout << "Where do you wanna start first? LEFT / RIGHT / FORWARD / BACK" << std::endl;
    std::cin.clear();
    std::getline (std::cin,pick);
    std::cout << std::endl;
    while(true)
    {
        std::string pick1;
        std::string pick2;
        if(uppercase(pick) == "LEFT")////////////////////////////////////////////////LEFT//////////////////////////////////////
        {
           
            if(p->has_calender() == false)
            {
                std::cout << "There is a calender on the wall" << std::endl;
                std::cout << "It has a picture of a young women on the cover." << std::endl;
                std::cout << "you feel like she seems familar, but you can't recall when or where you have met her." << std::endl;
                std::cout << "Do you want to pick it up?" << std::endl;
                std::cin.clear();
                std::getline (std::cin,pick1);
    
                while(true)
                {
                    if(uppercase(pick1) == "YES")
                    {
                        std::cout << std::endl << "You Picked up a CALENDER and on the back, it says '10/25/2015'." << std::endl;
                        std::cout << "This date might be helpful later on" << std::endl;
                        p->has_calender(true);
                        break;
                        

                    }
                    else if(uppercase(pick1) == "NO")
                    {
                        std::cout <<std::endl;
                        std::cout << "Your intuition tells you its best to leave other people items alone"<< std::endl;
                        std::cout << "You DO NOT pick up the calender."<< std::endl;
                        break;
                    }
                     std::cout << std::endl << "Again! Do you want to pick it up?" << std::endl;
                     std::cin.clear();
                     std::getline (std::cin,pick1);
                     std::cout << std::endl;
                }
            }
            else
            {
                std::cout << std::endl << "There is nothing here anymore...since you pick up the calender." << std::endl;
            }
        }
        else if(uppercase(pick)== "RIGHT") ///////////////////////RIGHT////////////////////////////////////////////////////
        {
            ////something with this function
           if(p->has_gun() == false)
           {
               std::string pick_i;
               std::cout << "There is a closet" << std::endl;
               std::cout << "Do you want to check the closet?" << std::endl;
               
               std::cin.clear();
               std::getline (std::cin,pick_i);
               
               std::cout << std::endl;
               while(true)
               {
                   if(uppercase(pick_i) == "YES")
                   {
                        std::cout << "Within the closet there are clothes and a gun" << std::endl;
                        std::cout << "Do you want to pick up clothes and a gun with one bullet?" << std::endl;
                        std::string pick_t;
                        std::cin.clear();
                        std::getline (std::cin,pick_t);
                        std::cout << std::endl;
                        
                        while(true)
                        {
                            if(uppercase(pick_t) == "YES")
                            {
                                std::cout << "You change your clothes and pick up a gun with single bullet" << std::endl;
                                p->has_gun(true);
                                p->increment_bullet();
                                break;
                            }
                            else if(uppercase(pick_t) == "NO")
                            {
                                std::cout << std::endl;
                                std::cout << "Your intuition tells you its best to leave other people items alone"<< std::endl;
                                std::cout << "You DO NOT pick up the CLOTHES and GUN WITH ONE BULLET."<< std::endl;
                                break;
                            }
                            std::cout << "Again! Do you want to pick up clothes and a gun with one bullet?" << std::endl;
                            std::cin.clear();
                            std::getline (std::cin,pick_t);
                            std::cout << std::endl;
                        }
                        break;
                   }
                   else if(uppercase(pick_i) == "NO")
                   {
                        std::cout << "Your intuition tells you its best to leave the closet"<< std::endl;
                        break;
                   }
                    std::cout << "Again! Do you want to pick up clothes and a gun with one bullet?" << std::endl;
                    std::cin.clear();
                    std::getline (std::cin,pick_i);
                    std::cout << std::endl;
               }
           }
           else
           {
               std::cout << std::endl << "There is nothing here anymore...since you pick up the gun and clothes." << std::endl;

           }
        }
        else if(uppercase(pick) == "FORWARD") /////////////////FORWard//////////////////////////////////////////////////////
        {
            //when he have the calender
            std::string pick3;
            std::cout << "There is a door" << std::endl;
            std::cout << "Do you want to exit" << std::endl;
            std::cin.clear();
            std::getline (std::cin,pick3);
            std::cout << std::endl;
            while(true)
            {
                if(uppercase(pick3) == "YES")
                {
                    if(p->has_calender() == false)
                    {
                    
                        std::cout << "The door is locked and it seems like you will need a passcode to unlock the door!" << std::endl;
                        break;
                        
                    }
                    
                    else 
                    {
                        std::string passcode;
                        std::cout<<"enter the passcode _ _ /_ _ /_ _ _ _ ."<< std::endl;
                        std::cin.clear();
                        std:: getline (std:: cin, passcode);
                        {
                            while(true)
                            {
                                if(uppercase(passcode) == "10252015")
                                {
                                    continue_on = "10252015";
                                    break;
                                    
                                    
                                }
                                
                                else if (uppercase(passcode) == "QUIT")
                                {
                                    break;
                                }
                                    std::cout << std::endl;
                                    std::cout<<"Access denied, re-enter the passcode now or Quit to go back"<<std::endl;
                                    std::cin.clear();
                                    std:: getline (std:: cin, passcode);
                            }
                            break;
                        }
                        
                    }
                    
                }
                else if(uppercase(pick3) == "NO")
                {
                    std::cout << "You go back to the same place" << std::endl;
                    break;
                }
                
                std::cout << "Again! Do you want to exit" << std::endl;
                std::cin.clear();
                std:: getline (std:: cin, pick3);
                std::cout << std::endl;
            }
        }
        else if(uppercase(pick) == "BACK")
        {
            std::cout << "You go back to bed...and sleep for 30 minutes" << std::endl;
            std::cout << "You wake up again and get out from your bed" << std::endl;
        }
        
        
        if (uppercase(pick) == "QUIT" || continue_on == "10252015")
        {
            break;
        }
            std::cout << std::endl;
            std::cout << "Again!!! Where else would you like to look? LEFT / RIGHT / FORWARD / BACK" << std::endl;
            std::cin.clear();
            std::getline(std::cin,pick);
            std::cout << std::endl;
    }
    if(continue_on == "10252015")
        choice_III(p);
}

void overall_choice::choice_III(Player* p)
{
    srand(time(0));
    std::cout<<std::endl;
    std::string choice1;
    std::string choice2;
    std::string choice3;
    std::string choice4;
    std::cout<<"As you leave the room, you enter into a lobby of some sort."<<std::endl;
    std::cout<<"Everything seems to be in order except for the smell of rotting flesh."<<std::endl;
    std::cout<<"Wait, ROTTING FLESH!!!...."<<std::endl;
    std::cout<<"All of a sudden, you notice a decaying corpse standing by door in front of you."<<std::endl;
    std::cout<<"It looks hungry and begins to run towards you."<<std::endl;
    std::cout<<"WHAT DO YOU DO: RUN or SHOOT the zombie!"<<std::endl;
    std::cin.clear();
    std:: getline (std:: cin, choice1);
        while (true/*add a timer here*/)
        {
            if(uppercase(choice1) == "RUN")
            {
                path = "RUN";//go to next chapter on the right;
                break;
            }
            else if(uppercase(choice1) == "SHOOT")
            {
                if(p->has_gun() == true)
                {
                    double v1 = rand() % 5;//
                    if (v1 == 1 || v1 == 5 || v1 == 3)//you make the shot//i tried this a couple times and it never make the shot for some reason.
                    {
                        std::cout << std::endl;
                        std::cout<<"You quickly grab your gun, load it up, aim and SHOOT at the zombie."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"Head shot!!!"<<std::endl;
                        p->decrement_bullet();
                        std::cout<<"As the headless zombie's body lays on the floor you see an AXE in his back pocket."<<std::endl;
                        std::cout<<"This axe might useful. Type PICKUP to grab the axe"<<std::endl;
                        
                        std::cin.clear();
                        std:: getline (std:: cin, choice3);
                        while (true)
                        {
                            if (uppercase(choice3) == "PICKUP")
                            {
                                std::cout << std::endl;
                                std::cout<<"Picked up Axe."<<std::endl;
                                p->has_axe(true);
                                break;
                            } 
                            std::cout<<"This axe might useful. Type PICKUP to grab the axe"<<std::endl;
                            std::cin.clear();
                            std:: getline (std:: cin, choice3);
                        }
                        std::cout << std::endl;
                        std::cout<<"Looks like this place is safe now. Enter CONTINUE to move on."<<std::endl;
                        std::cin.clear();
                        getline(std::cin, choice2);
                        while (true)
                        {  
                             
                            if( uppercase(choice2) == "CONTINUE")
                            {
                                path = "FORWARD";
                                //choice_IV(p,path);
                                //go to next chapter on the front
                                break;
                            }
                            std::cout<<"Looks like this place is safe now. Enter CONTINUE to move on."<<std::endl;
                            std::cin.clear();
                            getline(std::cin, choice2);
                        }
                    }
                    else
                    {
                        int count = 2;
                        std::cout << std::endl;
                        std::cout<<"You quickly grab your shotgun, load it up, aim and SHOOT at the zombie."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"."<<std::endl;
                        std::cout<<"And MISS!!! you are out of bullets! "<<std::endl;
                        std::cout<<"You better RUN away or else you will get to see the inside of the zombies mouth!"<<std::endl;
                        std::cin.clear();
                        getline(std::cin, choice4);
                        
                        while(true)
                        {
                            if(uppercase(choice4) == "RUN")
                            {
                                path = "RUN";
                                break;
                            }
                            if(count == 0)
                            {
                                path = "OVER";
                                std::cout << "Game Over!" << std::endl;
                                break;
                            }
                            //add timer here
                            std::cout << std::endl;
                            std::cout<<"Faster. Enter RUN to escape. Timer: " << count << std::endl;
                            count--;
                        }
                    }
                }
                else
                {
                    int count = 2;
                    std::cout << std::endl;
                    std::cout << "Wait! You have no gun" << std::endl;
                    std::cout << "Looks like all you can do is RUN to escape!!" << std::endl;
                    std::cin.clear();
                    getline(std::cin, choice4);
                        
                    while(true)
                    {
                        if(uppercase(choice4) == "RUN")
                        {
                            path = "RUN";
                            break;
                        }
                        if(count == 0)
                        {
                            path = "OVER";
                            std::cout << "Game Over!" << std::endl;
                            break;
                        }
                        std::cout << std::endl;
                        std::cout<<"Faster. Enter RUN to escape. Timer: " << count << std::endl;
                        count--;
                        std::cin.clear();
                        getline(std::cin, choice4);
                    }
                    
                }
            }
            if(path == "RUN" || path == "FORWARD" || path == "OVER")
                break;
            std::cout<<"Again!! WHAT DO YOU DO: RUN or SHOOT the zombie!"<<std::endl;
            std::cin.clear();
            std:: getline (std:: cin, choice1);
        }
}

void overall_choice::choice_IV(Player* p, std::string choice)
{
    srand(time(0));

    std::string go_choice;
    std:: string pickuplighter;
    std:: string upordown;
    std:: string uselighter;
    std:: string turnonlight;
    std:: string search;
    double v1 = 0;
    if(choice == "RUN")//enter the right room inside the building 
    {
        std::cout << std::endl;
        std::cout << "You sprint to the door to the left that leads to the stairs of the building." << std::endl;
        std::cout << "Barley escaping the zombie....!!" << std::endl;
        std::cout << "You make it halfway down the stairs before hearing the door slam shut behind you." << std::endl;
        std::cout << "There's no going back now....!" << std::endl;
        std::cout << "the room is dim but you notice the faint glimmer of an object just below you." << std::endl;
        std::cout << "It seems to be a lighter." << std::endl;
        std::cout<< "Should you PICKUP the lighter or LEAVE it." << std::endl;
        while(true)//did break;
        {
            std::getline(std::cin, pickuplighter);
            if(uppercase(pickuplighter) == "PICKUP")
            {
                std::cout << std::endl;
                std::cout << "You picked up the lighter." << std::endl;
                p->has_lighter(true);
                break;
            }
            if(uppercase(pickuplighter) == "LEAVE")
            {
                std::cout << std::endl;
                std::cout << "You did not pick up a lighter." << std::endl;
                break;
            }
                std::cout<<"Are you going to PICKUP or LEAVE the lighter?"<<std::endl;
        }
        std::cout << std::endl;
        std::cout<<"Now, it's time to move on. Where should you go? UP or DOWN the stairs!"<<std::endl;
        while(true)//did break;
        {
           std::getline(std::cin, upordown);
            
            if (uppercase(upordown) == "DOWN")
            {
                std::cout << std::endl;
                std::cout << "You enter into a very dark room!!" << std::endl;
                std::cout<<"Maybe you should try to find the light switch."<<std::endl;
                if(p->has_lighter())
                {
                    std::cout << std::endl;
                    std::cout<<"Or you can USE LIGHTER"<<std::endl;
                    while(true)//did break
                    {
                        std::getline(std::cin, uselighter);
                        if(uppercase(uselighter) == "USE LIGHTER")
                        {
                            std::cout << std::endl;
                            std::cout<<"The room lights up"<<std::endl;
                            std::cout<<"To your right you see a box of ammunition."<<std::endl;
                            std::cout << std::endl;
                            std::cout << "You quickly grab the box of ammuniton"<< std::endl;
                            p->increment_shotgunbullet();
                            std::cout << "You received 2 shot gun bullets and you have " << p->has_shotgunbullet() << " shotgun bullets." <<std::endl;
                            break;
                        }
                        std::cout << std::endl;
                        std::cout<<"I need to use the light to find the switch."<<std::endl;
                    }
                }
                else
                {
                    std::cout << std::endl;
                    std::cout<<"I should have picked that ZIPPO up."<<std::endl;// you dont have lighter here
                    std::cout<<"Type SEARCH to try to find the lighter."<<std::endl;
                    while(true)//did break
                    {
                        std::getline(std::cin, search);
                        if(uppercase(search) == "SEARCH")
                        {
                            v1 = rand() % 3;
                            if(v1 == 1)
                            {
                                std::cout << std::endl;
                                std::cout<<"Ah, here is the switch."<<std::endl;
                                std::cout<<"Enter TURN ON to use the light."<<std::endl;
                                while(true)//did break;
                                {
                                    std::getline(std::cin, turnonlight);
                                    if(uppercase(turnonlight) == "TURN ON")
                                    {
                                        std::cout << std::endl;
                                        std::cout<<"The room lights up"<<std::endl;
                                        std::cout<<"To your right you see a box of ammunition."<<std::endl;
                                        std::cout << std::endl;
                                        std::cout << "You quickly grab the box of ammuniton"<< std::endl;
                                        p->increment_shotgunbullet();
                                        std::cout << "You recived 2 bullets and you have " << p->has_shotgunbullet() << " bullets." <<std::endl;
                                        break;
                                    }
                                    std::cout<<"A wise person would TURN ON the light now. This darkness makes me feel terrified."<<std::endl;
                                }
                                break;
                            }
                            std::cout << std::endl;
                            std::cout<<"I should try to search it again."<<std::endl;
        
                        }
                        std::cout<<"Type SEARCH to look around."<<std::endl;
                    }
                }
                std::cout << std::endl;
                std::cout<<"There's nothing left. It's time to go up. Type UP to climb up."<<std::endl;
                while(true)// did break
                {
                    std::getline(std::cin,upordown);
                    if(uppercase(upordown) == "UP")
                    {
                        std::cout << std::endl;
                        std::cout<<"You leave the room and shut the door behind you."<<std::endl;
                        std::cout<<"Unfortunalty, the door seems to have jammed so there is no going back."<<std::endl;
                        break;
                    }
                    std::cout<<"Type UP to climb up."<<std::endl;
                }
            }
            
            if(uppercase(upordown) == "UP")
            {
                std::cout<<"With the door shut behind you, you seem it best to contiue your path."<<std::endl;// just copy the story down. needs a story here. like how the door shut and you cant go back donw.    
                path = "CONTINUE2";
                break;
            }
            
            std::cout<<"It's time to go. Enter UP or DOWN to continue."<<std::endl;
        }
        
       //////will go to different choice
        if(path == "CONTINUE2")
            choice_VII(p);
    }
    
    else if(choice == "FORWARD")
    {
        std::string choice1;
        std::cout << std::endl;
        std::cout << "You exit through the doorway and it leads you outside of the building" << std::endl;
        std::cout << "All of a sudden, a horde of zombies begin to make their way towards you from the left!!" << std::endl;
        std::cout << "Felling like the end is near, you lay on the ground and accept your fate." << std::endl;
        std::cout << "out of nowhere you hear a Whistle and look up." << std::endl;
        std:: cout << "A MYSTERIOUS WOMAN calls your name and says," << std::endl;
        std::cout << "Mysterious Woman: Lucian, GET UP!!" << std::endl;
        std::cout << "Mysterious Woman: Come over here and I can get you to saftey" << std::endl;
        std::cout << std::endl;
        std::cout << "What do you do? RUN to the woman or WAIT and accept the inevitable end." << std::endl;
        std::cin.clear();
        std:: getline (std:: cin, choice1);
        int count = 2;
        while(count >= 0)
        {
            if(uppercase(choice1) == "RUN")
            {
                break;
            }
            else if(uppercase(choice1) == "WAIT")
            {
                std::cout << "Mysterious Woman(screaming): PLEASE DON'T DO THIS!!" << std::endl;
                break;
            }
            std::cout << "AGAIN! What do you do? JUMP or WAIT" << std::endl;
            std::cin.clear();
            std:: getline (std:: cin, choice1);
            count--;
        }
        if(uppercase(choice1) == "RUN")
        {
            std::string choice2;
            std::cout << std::endl;
            std::cout << "Mysterious Woman: That was close!!!!!!!!" << std::endl;
            std::cout << "You ask her about her name and she says, " << std::endl;
            std::cout << "Mysterious Woman: Lucian, My name is Ruth." << std::endl;
            std::cout << "RUTH: Dont worry about the details." << std::endl;
            std::cout << "RUTH: We need to go to the COBRA facility right now." << std::endl;
            std::cout << "RUTH: DR. Alberto is waiting for YOU." << std::endl;
            std::cout << "You feel like something about RUTH is really wrong but you can not pin point the issuse." << std::endl;
            std::cout << std::endl << "What do you do? FOLLOW or NOT FOLLOW" << std::endl;
            
            std::cin.clear();
            std::getline (std:: cin, choice2);
            while(true)
            {
                if(uppercase(choice2) == "FOLLOW")
                {
                    go_choice = uppercase(choice2);
                    break;
                }
                else if(uppercase(choice2) == "NOT FOLLOW")
                {
                    go_choice = uppercase(choice2);
                    break;
                }
                std::cout << std::endl << "Again! What do you do? FOLLOW or NOT FOLLOW" << std::endl;
                std::cin.clear();
                std::getline (std:: cin, choice2);
            }
            choice_V(p,go_choice);
        }
        else
        {
            std::cout << "You choose to accept your faith and die!" << std::endl;
            std::cout << "GAMEOVER!!" << std::endl;
        }
    }
}
void overall_choice::choice_V(Player* p, std::string choice)
{
    if(choice == "FOLLOW" || choice == "NOT FOLLOW")
    {
        if(choice == "FOLLOW")
        {
            std::cout << std::endl;
            std::cout << "Deciding to trust the woman, you follow her." << std::endl;
            std::cout << "She leads you through a forest entering into an intersction." << std::endl;
            std::cout << "in which you can go LEFT, RIGHT, OR FORWARD." << std::endl;
            std::cout << "RUTH: Go RIGHT and that will take us to the destination" << std::endl;
            std::cout << "RUTH: However, if want to check out the other routes, i will go with you but you have to hurry!" << std::endl;
        }
        else if(choice == "NOT FOLLOW")
        {
            std::string pick_something;
            std::cout << std::endl;
            std::cout << "RUTH: Well.....if thats what you want, i can't stop you." << std::endl;
            std::cout << "She walks away...." << std::endl;
            std::cout << std::endl;
            std::cout << "You continue walking through a forest when you see a grocery store by a neardby road." << std::endl;
            std::cout << "(your stomach growling)...you feel very hungry" << std::endl;
            std::cout << "You decide to travel to the store." << std::endl;
            std::cout << "It seems that the whole store has been scavenged" << std::endl;
            std::cout << "...Wait a minute! there is something on the wall that looks important." << std::endl;
            std::cout << "Do you want to CHECK the wall?" << std::endl;
            std::cin.clear();
            std::getline(std::cin, pick_something);
            while(true)
            {
                if(uppercase(pick_something) == "YES")
                {
                    std::cout << std::endl;
                    std::cout << "You pick up a map" << std::endl;
                    std::cout << "The MAP shows an arrow pointing towards a facility called COBRA incorporated." << std::endl;
                    std::cout << std::endl;
                    p->has_map(true);
                    break;
                }
                else if(uppercase(pick_something) == "NO")
                {
                    std::cout << std::endl;
                    std::cout << "Your intuition tells you its best to leave other people stuff alone"<< std::endl;
                    break;
                }
                std::cout << std::endl;
                std::cout << "Again!!! Do you want to CHECK the wall?" << std::endl;
                std::cin.clear();
                std::getline(std::cin, pick_something);
            }
            std::cout << std::endl;
            std::cout << "Since there is nothing left in the store that is important to you," << std::endl;
            std::cout << "you exit the store." << std::endl;
            std::cout << "Walking down the street. You stop at intersection." << std::endl;
            std::cout << "There are three way you can go...LEFT, RIGHT, FORWARD" << std::endl;
            if(p->has_map())
            {
                std::string check;
                std::cout << std::endl;
                std::cout << "You remember you have a map...do you want to check it?" << std::endl;
                std::cin.clear();
                std::getline(std::cin,check);
                while(true)
                {
                    if(uppercase(check) == "YES")
                    {
                        std::cout << std::endl;
                        std::cout << "According to the MAP, it says go to the RIGHT" << std::endl;
                        break;
                    }
                    else if(uppercase(check) == "NO")
                    {
                        std::cout << "You did not look at the MAP" << std::endl;
                        break;
                    }
                    std::cout << "Again!!! You have a map...do you want to check it?" << std::endl;
                    std::cin.clear();
                    std::getline(std::cin,check);
                }
            }
        
        }
        std::string direction;
        std::cout << "Which direction do you want to go? LEFT | RIGHT | FORWARD" << std::endl;
        std::cin.clear();
        std::getline(std::cin,direction);
        while(true)
        {
            if(uppercase(direction) == "LEFT")
            {
                if(p->has_ele_key() == false)
                {
                    std::cout << std::endl;
                    std::cout << "You walk into a house" << std::endl;
                    std::cout << "somebody has placed a safe box here, but one piece of the puzzle is missing." << std::endl;
                    if(p->has_puzzle() == true)
                    {
                        std::string open;
                        std::cout << std::endl;
                        std::cout << "You have a puzzle that seem to fit the box." << std::endl;
                        std::cout << "Do you want open the box with this puzzle?" << std::endl;
                        std::cin.clear();
                        std::getline(std::cin,open);
                        while(true)
                        {
                            if(uppercase(open) == "YES")
                            {
                                std::cout << std::endl;
                                std::cout << "You open the box" << std::endl;
                                std::cout << "and pick up the ELEVATOR ACCESS card" << std::endl;
                                p->has_ele_key(true);
                                break;
                            }
                            else if(uppercase(open) == "NO")
                            {
                                std::cout << std::endl;
                                std::cout << "You did not open the BOX" << std::endl;
                                break;    
                            }
                            std::cout << std::endl;
                            std::cout << "Again!!! Do you want open the box with this puzzle? YES or NO" << std::endl;
                            std::cin.clear();
                            std::getline(std::cin,open);
                        }
                    }
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "There is notthing here anymore" << std::endl;
                }
            }
            else if(uppercase(direction) == "RIGHT")
            {
                std::string COBA;
                std::cout << std::endl;
                std::cout << "You end up infront of the COBRA facility." << std::endl;
                std::cout << "Would you like to enter?" << std::endl;
                std::cin.clear();
                std::getline(std::cin,COBA);
                while(true)
                {
                    if(uppercase(COBA) == "YES")
                    {
                        std::cout << std::endl;
                        std::cout << "You entered into the building" << std::endl;
                        path = "ENTER1";
                        break;
                    }
                    else if(uppercase(COBA) == "NO")
                    {
                        std::cout << std::endl;
                        std::cout << "You went back to the intersection" << std::endl;
                        break;
                    }
                    std::cout << std::endl;
                    std::cout << "Again!! Would you like to enter? YES or NO" << std::endl;
                    std::cin.clear();
                    std::getline(std::cin,COBA);
                }
            }
            else if(uppercase(direction) == "FORWARD")
            {
                if(p->has_puzzle()==false)
                {
                    std::string puzzle;
                    std::cout << std::endl;
                    std::cout << "You look on the ground and find a piece of glasss" << std::endl;
                    std::cout << "that looks like it belongs to a puzzle piece set." << std::endl;
                    std::cout << "Do you want to pick it up?" << std::endl;
                    std::cin.clear();
                    std::getline(std::cin,puzzle);
                    while(true)
                    {
                        if(uppercase(puzzle) == "YES")
                        {
                            std::cout << std::endl;
                            std::cout << "You picked up the PUZZLE piece" << std::endl;
                            p->has_puzzle(true);
                            break;
                        }
                        else if(uppercase(puzzle) == "NO")
                        {
                            std::cout << std::endl;
                            std::cout << "You did not pick up the PUZZLE piece" << std::endl;
                            break;
                        }
                        std::cout << std::endl;
                        std::cout << "Again!!! Do you want to pick it up? YES or NO" << std::endl;
                        std::cin.clear();
                        std::getline(std::cin,puzzle);
                    }
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "There is notthing here anymore" << std::endl;
                }
            }
            if(path == "ENTER1")
                break;
            std::cout << std::endl;
            std::cout << "Again!!! Which direction do you want to go? LEFT | RIGHT | FORWARD" << std::endl;
            std::cin.clear();
            std::getline(std::cin,direction);
        }
        if(path == "ENTER1")
            choice_VI(p);
    }
}

void overall_choice:: guessnumber()
{
    srand(time(0));
    int size = 5;
    int array[size];
    int answer[size];
    int guess = 0;
    int counter = 0;
    
    for (int i =0; i<5; i++)
    {
         array[i] = rand() % 10;
         answer[i] = -1;
    }
    
    while(counter < 5)
    {
    
        std::cin >> guess;
        
        if (ifcorrect(guess,array,size))
        {
            for(int x = 0; x < 5; x++)
            {
                if (guess == array[x])
                {
                     answer[x] = guess;
                }
            }
        }
        for(int x = 0; x < 5; x++)
        {
            if(answer[x] == -1)
                std::cout << "-?";
            else
                std::cout << "-" << answer[x];
        }
        std::cout << std::endl;
        std::cout << "Again! Enter a Number from 0 - 9: " << std::endl;
        std::cout << "You got only " << 5 - counter;
        if(counter > 1)
            std::cout << " chances left!" << std::endl;
        else
            std::cout << " chance left!" << std::endl;
        counter++;
    }
    path = return_type(array,answer,size);
    
}

void overall_choice::choice_VI(Player* p)
{
    std::string choice1;
    std::string level;
    std::string usetool;
    std::cout << std::endl;
     std::cout << "You enter in a lobby and decide to try the elevator." << std::endl;
    std::cout << "However, the elevator on the right seems need a access card, or you can take the stairs in the front." << std::endl;
    std::cout << "Where would you like to go? RIGHT or FORWARD " << std::endl;
    
    std::getline(std::cin,choice1);
    while(true)
    {
        if(uppercase(choice1) == "RIGHT")
        {
            if(p->has_IDcard() == true)
            {
                std::cout << "Having the access card, You enter into the elevator." << std::endl;
                std::cout << "There is a red mark on level 8 button, seems like someone put it there on purpose." << std::endl;
                std::cout << "There are also 7 other levels you can go to..." << std::endl;
                std::cout << "Where do you go? Type the number of the level you would like to go to??" << std::endl;
                std::cout << "LEVEL: ";
                std::cin.clear();
                std::getline(std::cin, level);
                while(true)
                {
                    if (level=="8")
                    {
                        std::cout << "The door begins to close and you feel like there is no going back now..."<<std::endl;
                        std::cout << "The elvator begins to take you to your destination." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "..." << std::endl;
                        std::cout << "The door opens and you arrive at the roof of the building." << std::endl;
                        std::cout << "From a distance, you see a gray haired man sitting near a helicopter." << std::endl;
                        std::cout << "He looks up and begins to call out your name." << std::endl;
                        std::cout << "Dr.Alberto: Lucian! Lucian! over here!!" << std::endl;
                        std::cout << "You make your way over to him and he beings to explains to you that the entire town has been infected by a virus and is overrun by the undead.\nHe tells you that you are the only immune person left to the virus and they need to take you offshore to one of the sub-facilities to develop a cure.\nYou get into the helicopter and begin o travel to the facility.\nAs you are flying, you finally feel a sense of saftey come upon you.\nDr. Alberto snezzes violently and you turn to say God bless you.\nBut as you look at him, you notice he has sneezed blood into his hands and the blood is a greenish-red tint." << std::endl;
                        std::cout << "He looks at you and says We have to hurry." << std::endl;
                        std::cout << "The safe feeelings you had are now drowning below the ocean you are passing over.." << std::endl;
                        std::cout << "ARE YOU REALLY SAFE???" << std::endl;
                        std::cout << std::endl;
                        std::cout << "TO BE CONTINUED..." << std::endl;
                        break;
                    }
                    if (level != "8")
                    {
                        std::cout << "Ozzing with couriosity, you decide to press the " << level << " Button." << std::endl;
                        std::cout << "The door closses and you hear the sound of gears turning." << std::endl;
                        std::cout << "All of the sudden the lights go out in the elevator." << std::endl;
                        std::cout << "It gets real quiet..." << std::endl;
                        std::cout << "....." << std::endl;
                        std::cout << "The screen above the buttons lights up and says \"Going down..FOREVER...\"" << std::endl;
                        std::cout << "The elevator explodes and you perish in the fire..." << std::endl;
                        std::cout << "GAMEOVER!!!" << std::endl;
                        break;
                    }
                    std::cout<<"Quickly, pick a floor please."<<std::endl;
                    std::cin.clear();
                    std::getline(std::cin,level);
                }
                
                if(level=="8"||level == "1"||level =="2"||level == "3"||level =="4"||level=="5"||level=="6"||level == "7")
                    break;
            }
            std::cout << std::endl;
            std::cout<<"There is a hacking device that you can use to open the elevator."<<std::endl;//we need a introduction here.
            std::cout << "So you pick up the hacking device and use it on the elevator." << std::endl;
            std::cout << "You have to guess FIVE number in order to open the elevator." << std::endl;
            std::cout << "However...you have six chances...if you enter more than six times...it will blown up" << std::endl;
            std::cout << "According to the warning from Dr.Alberto" << std::endl;
            std::cout << "Enter a number from 0 - 9: " << std::endl;
            guessnumber();
            if (path == "TRUE")
            {
                std::cout << std::endl;
                std::cout<<"You got it right. Door closing, the elevator is now going up."<<std::endl;
                break;
            }
            else
            {
                std::cout << std::endl;
                std::cout<<"Game Over!!!" << std::endl;//you die here for some reason. 
                break;
            }

        }
        else if(uppercase(choice1) == "FORWARD")
        {
            std::cout << std::endl;
            std::cout<< "The door is locked. Maybe I can use something to break it."<<std::endl;//hey darius, you can twist the word here a little to make it nicer, jusr remember to keep the key word"use something"
            while(true)
            {
                std::cin.clear();
                std::getline(std::cin,usetool);
                if(uppercase(usetool) == "USE GUN")
                {
                    std::cout << std::endl;
                    std::cout<<"Snap, I have no bullets. Maybe I can find something else in my bag."<<std::endl;
                }
                else if (uppercase(usetool) == "USE AXE")
                {
                    std::cout << std::endl;
                    std::cout<<"Violent, but I like it."<<std::endl;
                    path = "BREAK";
                    //Darius, please add a story about he climbs up the stairs and find Dr at level eight
                    break;
                }
                std::cout << std::endl;
                std::cout<< "The door is locked. Maybe I can USE something to break it like AXE or GUN."<<std::endl;//hey darius, you can twist the word here a little to make it nicer, jusr remember to keep the key word"use something"
            }
            
            
        }
        if (path == "BREAK")
                break;
        std::cout << std::endl;
        std::cout<<"Again, where do you wanna go now?";
        std::cin.clear();
        std::getline(std::cin, choice1);
    }
}

void overall_choice::choice_VII(Player* p)//roof fight
{
    std::string pickupshotgun;
    std::string opendoor;
    std::cout << std::endl;
    std::cout<<"A shot gun. should you pick it up? Type YES or NO to move on."<<std::endl;
    while(true)//did break
    {
        std::cin.clear();
        std::getline(std::cin,pickupshotgun);
        if(uppercase(pickupshotgun) == "YES")
        {
            std::cout << std::endl;
            std::cout<<"Receive shot gun."<<std::endl;
            p->has_shotgun(true);
            break;
        }
        if(uppercase(pickupshotgun) == "NO")
        {
            break;
        }
        std::cout<<"You need enter a command to continue. YES | NO"<<std::endl;
    }
    std::cout << std::endl;
    std::cout<<"A door. Someone wrote 'do not open it'"<<std::endl;
    std::cout<<"Seems like you do not have any other choice."<<std::endl;
    std::cout<<"Enter OPEN THE DOOR when you are ready."<<std::endl;
    
    while(true)
    {
        std::getline(std::cin, opendoor);
        
        if(uppercase(opendoor) == "OPEN THE DOOR")
        {
            path = "OPEN_DOOR";
            break;
        }
        std::cout << std::endl;
        std::cout<<"Enter OPEN THE DOOR when you are ready."<<std::endl;
    }
    if(path == "OPEN_DOOR")
        choice_X(p);
}

void overall_choice::choice_X(Player* p)
{
    srand(time(0));
    int v1=0;
    int count = 3;
    std::string choice_o;
    std::string finalchoice;
    std::cout << std::endl;
    std::cout<<"You see zombies are coming up, so you quickly enter the door and locked it from the outside."<<std::endl;
    std::cout<<"You are on the roof but it seems like there are here as well. You will have to fight your own way out."<<std::endl;
    std::cout<<"You can't see a way out though."<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Zombies begin to make there way towards you.\nyou think to yourself GAME ON!! Follow the instruction and try to stay alive."<<std::endl; 
    std::cout<<"Enter: ATTACK or RUN."<<std::endl;
    std::cin.clear();
    
    
    while(count > 0)
    {
       std::getline(std::cin, choice_o);
       srand(time(0));
       if(uppercase(choice_o) == "ATTACK")
       {
           v1 = rand() % 16;
           if(p->has_shotgunbullet() > 0 && p->has_shotgun() == true)
           {
                p->decrement_shotgunbullet();
                std::cout << std::endl;
                if(v1 % 2 == 0)
                {
                    std::cout<<"Hit!!"<<std::endl;
                    count--;
                    if(count>0)
                    {
                    	std::cout << "There are " << count << " zombies left" << std::endl;
                        std::cout << std::endl;
                        std::cout << "There are " << p->has_shotgunbullet() << " more rounds left. Good luck."<< std::endl;
                        std::cout<<"Again!!! Enter ATTACK or RUN."<<std::endl;
                        std::cin.clear();
                    }
                    
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "You missed the shot..." << std::endl;
                    std::cout<<"You have been bitten by a zombie and die."<<std::endl;
                    std::cout<<"GAME OVER!!!"<<std::endl;
                    break;
                }
           }
           else if(p->has_shotgunbullet() <= 0 || p->has_shotgun() == false)
           {
               std::cout << std::endl;
               std::cout<<"Gun is empty..."<<std::endl;
               if(p->has_shotgun() == false)
                    std::cout << "...and you have no SHOTGUN." << std::endl;
               if(v1 % 2 == 0)
               {
                   std::cout << std::endl;
                   std::cout<<"You snaped the zombie's neck. Nice Job."<<std::endl;
                   count--;
                   std::cout << std::endl;
                   if(count>0)
                    {
                    	std::cout << "There are " << count << " zombies left" << std::endl;
                        std::cout << p->has_shotgunbullet() <<" more rounds left. Good luck."<< std::endl;
                        std::cout<<"Again!!! Enter ATTACK or RUN."<<std::endl;
                        std::cin.clear();
                    }
               }
               else
               {
                    std::cout << "You missed your punch..." << std::endl;
                    std::cout<<"You have been bitten."<<std::endl;
                    std::cout<<"GAME OVER!!"<<std::endl;
                    break;
               }
           }
       }
       else if(uppercase(choice_o) == "RUN")
       {
           v1 = rand() % 3;
           if(v1 == 0 || v1 == 1)
            {
                std::cout << std::endl;
                std::cout<<"You trapped yourself and the zombies have caught you.....\nGAME OVER!!"<<std::endl;
                break;
            }
            else
            {
                std::cout << std::endl;
                count --;
                std::cout << "There are " << count << " zombies left" << std::endl;
                
                std::cout << std::endl;
                if(count>0)
                    {
                        std::cout<<"one of the Zombie failed to catch you but others are coming over!"<<std::endl;
                        std::cout << p->has_shotgunbullet() <<" more rounds left. Good luck."<< std::endl;
                        std::cout<<"Again!!! Enter ATTACK or RUN."<<std::endl;
                        std::cin.clear();
                    }
                
            }
            
       }
           
       
    }
    
    if(count <= 0)
    {
        std::cout<<"A helicopter. It must be my way out. Enter ESCAPE to continue."<<std::endl;
        std::cin.clear();
        std::getline(std::cin, finalchoice);
        if (uppercase(finalchoice) == "ESCAPE")
        {
            std::cout << std::endl;
            std::cout << "A helicopter lowers the ladder for you" << std::endl;
            std::cout << "You grab the ladder and begin to sit down" << std::endl;
            std::cout << "You hear a voice from a walike talkie laying on the seat to your right." << std::endl;
            std::cout << "You pick it up and respond, \"Hello!!\"" << std::endl;
            std::cout << "The voice says," << std::endl << std::endl;
            std::cout << "Mysterious Man: Hello, yes, We are taking you to a COBRA sub-facility.\nYou are the last immune human in the country.\nWe need you to help make a cure." << std::endl;
            std::cout << "You win...for now..." << std::endl;
            std::cout << "TO BE CONTINUED..." << std::endl;
        }
        else
        {
            std::cout << std::endl;
            std::cout << "A helicopter lower the ladder for you" << std::endl;
            std::cout << "You did not grab the ladder" << std::endl;
            std::cout << "The building collapses and you die." << std::endl; 
            std::cout << "GAME OVER!!" << std::endl;
        }
        
    }
}

int main()
{
    world w;
}
