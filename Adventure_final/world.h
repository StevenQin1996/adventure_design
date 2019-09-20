#include <iostream>
#include "case.h"

class Item
{
    ///private:
    private:
        bool calender;
        bool gun;
        int bullets;
        bool axe;
        bool ID;
        bool map;
        bool puzzle;
        bool ele_key;
        bool lighter;
        int shotgunbullets;
        bool shotgun;
    public:
        Item() 
        {
            calender = false; gun = false; bullets = 0; axe = false; ID = false; 
            map = false; puzzle = false; ele_key = false; lighter = false; shotgunbullets = 0; shotgun = false;
        }
        bool _gun() const{return gun;}
        void _gun(bool choice) {gun = choice;}
        bool _shotgun() const{return shotgun;}
        void _shotgun(bool choice) {shotgun = choice;}
        bool _calender() const {return calender;}
        void _calender(bool choice) {calender = choice;}
        int _bullet() const{return bullets;}
        void inc_bullet() {bullets++;}
        void dec_bullet()  {bullets--;}
        int _shotgunbullet() const{return shotgunbullets;}
        void inc_shotgunbullet() {shotgunbullets+=2;}
        void dec_shotgunbullet()  {shotgunbullets--;}
        
        bool _axe() const {return axe;}
        void _axe(bool choice) {axe = choice;}
        bool _IDcard() const {return ID;}
        void _IDcard(bool choice) {ID = choice;}
        bool _map() const {return map;}
        void _map(bool choice) {map = choice;}
        bool _puzzle() const {return puzzle;}
        void _puzzle(bool choice) {puzzle = choice;}
        bool _ele_key() const {return ele_key;}
        void _ele_key(bool choice) {ele_key = choice;}
        bool _lighter() const {return lighter;}
        void _lighter(bool choice) {lighter = choice;}
};
class Player
{
    private:
        Item * i;
    public:
    	Player() {i = new Item;}
    	~Player() {if(i) delete i;}
        
        bool has_gun() const {return i->_gun();}
        void has_gun(bool choice) {i->_gun(choice);}
        int  has_bullet() const {return i->_bullet();}
        void increment_bullet() {i->inc_bullet();}
        void decrement_bullet() {i->dec_bullet();}
        
        bool has_shotgun() const {return i->_shotgun();}
        void has_shotgun(bool choice) {i->_shotgun(choice);}
        int has_shotgunbullet() const {return i->_shotgunbullet();}
        void increment_shotgunbullet() {i->inc_shotgunbullet();}
        void decrement_shotgunbullet() {i->dec_shotgunbullet();}
        //bool shotgunisempty(){return has_shotgunbullet();}
        //int countshotgunbullet(){return has_shotgunbullet();}
        
        bool has_calender() const {return i->_calender();}
        void has_calender(bool choice) {i->_calender(choice);}
        bool has_axe(){return i->_axe();}
        void has_axe(bool choice) {i->_axe(choice);}
        bool has_IDcard() const {return i->_IDcard();}
        void has_IDcard(bool choice) {i->_IDcard(choice);}
        bool has_map() const {return i->_map();}
        void has_map(bool choice) {i->_map(choice);}
        bool has_puzzle() const {return i->_puzzle();}
        void has_puzzle(bool choice) {i->_puzzle(choice);}
        bool has_ele_key() const {return i->_ele_key();}
        void has_ele_key(bool choice) {i->_ele_key(choice);}
        bool has_lighter() const {return i->_lighter();}
        void has_lighter(bool choice) {i->_lighter(choice);}
};
class overall_choice// Chapter has a overall choice. and each chapter match up with its choice.
{;
    private:
        std::string path;
    public:
        overall_choice() {path = "";}
        std::string pass() {return path;}
        void guessnumber();
        void choice_I(Player* p);
        void choice_II(Player* p);
        void choice_III(Player* p);
        void choice_IV(Player*p,std::string choice);
        void choice_V(Player*p,std::string choice);
        void choice_VI(Player*p);
        void choice_VII(Player*p);
        void choice_X(Player* p);
};
class Chapter //base class for Chapter. this class hold all the chapter like Chapter_I()
{
    private:
        overall_choice * pointer;
    public: 
        Chapter(Player* p) { pointer = new overall_choice; Chapter_I(p);Chapter_II(p,pointer->pass());}
        ~Chapter() {if(pointer) delete pointer;}
        void Chapter_I(Player* p) {pointer->choice_I(p);}
        void Chapter_II(Player* p, std::string a) {pointer->choice_IV(p,a);}
};

class world
{
    private:
        Chapter * next;
        Player* p;
        void embark(Player* player);
    public:
        world(){p = new Player;embark(p);}
        ~world() {if(next) delete next; if(p) delete p;}
        
};

