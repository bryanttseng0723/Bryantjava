<<Poker Game>>
*****************************************************************************************************************
This is a simple console-based poker game implemented in C++.
*****************************************************************************************************************
<Gameplay>

The game is played between the player and the computer.
Each player is dealt four cards at the beginning of each round.
The player who wins four rounds first wins the game.
After 7 rounds, the game is over! The player who wins more rounds wins the game!
There are three chances to exchange cards in each round, and the player can choose not to exchange cards.
Because the computer cannot change cards, its original score is increased by 10 points for the game.
Certain card combinations earn extra points:
A pair worth 10 points
Three of a kind worth 50 points
Four of a kind worth 100 points
A flush worth 120 points
Four cards with different face values worth 15 points
How to Play
To play the game, simply compile and run the poker.cpp file. The game will start automatically.
*****************************************************************************************************************

<Program Flow>
The program flow is as follows:

The game starts by printing a welcome message and the rules of the game.
The player and computer are dealt four cards each.
The player is shown their cards and given the option to exchange up to three cards.
The player's hand is evaluated and points are awarded based on the card combination.
The same process is repeated for the computer.
The winner of the round is determined by comparing the points earned by the player and the computer.
If one player wins four rounds first, the game ends. Otherwise, the game continues for 7 rounds, after which the winner is determined based on the number of rounds won by each player.

*****************************************************************************************************************

At the beginning of game design, I originally intended to design interesting poker games such as Texas Hold'em or Stud Poker. 
But the structure was too complex. 
Therefore, I simplified the version. If I design games next time, wI would like to challenge more complex systems.

Difficulties:
Confused numbering of matrices.
Scoring system displays incorrect results.
A lot of time was spent adjusting the settings to make the game more fun.