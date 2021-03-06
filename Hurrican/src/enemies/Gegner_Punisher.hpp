#ifndef _GEGNER_PUNISHER_HPP_
#define _GEGNER_PUNISHER_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerPunisher : public GegnerClass {
  private:
    float alpha;
    float ShotDelay;

  public:
    GegnerPunisher(int Wert1,
                   int Wert2,  // Konstruktor
                   bool Light);
    void FollowPlayer();            // Spieler folgen
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
    void DoDraw() override;         // Gegner individuell rendern
    void Vanish();
};

#endif
