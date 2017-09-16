#ifndef _TRIGGER_SURFBRETT_HPP_
#define _TRIGGER_SURFBRETT_HPP_

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerSurfBrett : public GegnerClass
{
private:
    float	SmokeCount;

public:

    GegnerSurfBrett	   (int Wert1,	int Wert2,			// Konstruktor
                        bool		  Light);
    void GegnerExplode (void);							// Gegner explodiert
    void DoKI		   (void);							// Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif