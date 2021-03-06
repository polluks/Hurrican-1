#ifndef _GEGNER_SPITTERBOMBE_HPP_
#define _GEGNER_SPITTERBOMBE_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerSpitterbombe : public GegnerClass {
  public:
    GegnerSpitterbombe(int Wert1,
                       int Wert2,  // Konstruktor
                       bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
};

#endif
