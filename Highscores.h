
#ifndef Highscores_h__
#define Highscores_h__
#include "ardu_main.h"
#include "Arduboy2.h"
void enterInitials();
void displayHighScores(byte file);
bool enterHighScore(byte file); //returns true if new highscore was added
#endif // Highscores_h__