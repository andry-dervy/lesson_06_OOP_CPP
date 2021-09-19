#ifndef HOUSE_H
#define HOUSE_H

#include "genericplayer.h"
#include <iostream>

class House: public GenericPlayer
{
public:
  House(std::string aName = "House")
    :GenericPlayer(aName){};
  ~House(){}
  virtual bool IsHitting() const;
  void FlipFirstCard();
};

#endif // HOUSE_H
