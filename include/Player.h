#ifndef Player_h
#define Player_h

#include <string>
#include <vector>
#include <map>

class Player
{
private:
    std::string m_name;
    int m_health;
    int m_gold;
    std::string equippedWeapon;
    int pos[2] = {0,0};
    std::map<std::string, unsigned int> inventory;
    std::vector<std::string> logs;
public:
    Player(const std::string name, int health = 100, int gold = 0);
    void movePlayer(std::vector<std::string>& cMap, int x, int y);
    int* getPos();
    void setPos(int x, int y);
    std::string getName();
    int getHealth();
    int getGold();
    std::string getWeapon();
    void giveGold(int amount);
    void Heal(int amount);
    std::map<std::string, unsigned int> getInv();
    std::vector<std::string>& getLogs();
    void addLog(std::string message);
    void giveItem(std::string item, int amount);
    void useItem(std::string item);
    void delItem(std::string item, int amount, bool output = true);
};

#endif