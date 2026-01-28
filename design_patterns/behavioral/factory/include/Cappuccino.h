#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H

#include "Coffe.h"

class Cappuccino : public Coffe
{
public:
  void prepare() override;
};

#endif
