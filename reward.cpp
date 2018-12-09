#include "reward.h"

Reward::Reward(Rubies rubies) : m_rubies(rubies){}

Reward::operator int() const{
    return (int) m_rubies;
}

std::ostream& operator<<(std::ostream& os, Reward& reward){
    os << (int)reward.m_rubies << " rubies" << std::endl;
    return os;
}


#ifdef DEBUG_REWARD
#include "rewarddeck.h"
int main(){
    std::cout<< "Testing Reward class\n" << std::endl;
    Deck<Reward>& r = RewardDeck::make_RewardDeck();
    // Deck<Reward>& p = RewardDeck::createDeck();
    std::cout<< "Reward ONE to int test: " << ((int)*r.getNext() == 1? "passed":"failed") << std::endl;
    std::cout<< "Reward ONE << ostream operator test: " << (*r.getNext() == 1? "passed":"failed") << std::endl;
}

#endif