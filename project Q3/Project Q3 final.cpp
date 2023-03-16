#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Calculating the point value of cards.
int calculatePoints(int hand[]) 
{
    int points = 0;
    bool hasPair = false;
    bool hasFlush = true;
    int suit = hand[0] % 4;
    
    // Calculate the point value and suit of each card.
    int values[4];
    for (int i = 0; i < 4; i++) 
    {
        values[i] = hand[i]/4 + 1 ;
        
        if (hand[i] % 4 != suit) 
        {
            hasFlush = false;
        }
    }
    
    // Sort the point values.
    sort(values, values + 4);
    
    // Check if there are three or four cards with the same point value.
    bool hasThreeOfAKind = false;
    bool hasFourOfAKind = false;

    if (values[0] == values[2] || values[1] == values[3]) 
    {
        hasThreeOfAKind = true;
    }
    if (values[0] == values[3]) 
    {
        hasFourOfAKind = true;
    }
    
    // Calculate total points.
    for (int i = 0; i < 4; i++) 
    {
        if (i == 0) 
        {
            points += values[i] ;
        } 
        else if (values[i] == values[i-1]) 
        {
            hasPair = true;
            points += (values[i]) + 10;
        } 
        else 
        {
            points += values[i] ;
        }
    }

    if (hasFlush) 
    {
        points += 120;
    }
    
    if (hasThreeOfAKind) 
    {
        points += 50;
    }
    
    if (hasFourOfAKind) 
    {
        points += 100;
    }
    
    if (!hasPair && !hasFlush && !hasThreeOfAKind && !hasFourOfAKind) 
    {
        points += 15;
    }
    return points;
}

// Show cards.
void printHand(int hand[]) 
{
    for (int i = 0; i < 4; i++) 
    {
        int value = hand[i]/4 + 1 ;
        string suit = " ";
        
        switch(hand[i] % 4) 
        {
            case 0:
                suit = "Clubs";
                break;
            case 1:
                suit = "Diamonds";
                break;
            case 2:
                suit = "Hearts";
                break;
            case 3:
                suit = "Spades";
                break;
        }
        
        cout <<  suit << " " << value << "   ";
    }
    cout << endl;
}

int main() 
{
    cout <<"  "<< "*******************************************************************************" << endl;
    cout <<"  "<<"                              "<< "POKER GAME" << endl;
    cout <<"  "<< "*******************************************************************************" << endl;
    cout <<"  "<<"Welcome to the amusement park!"<< endl;
    cout <<"  "<<"This is a fun poker game where you will be dealt four cards."<< endl;
    cout <<"  "<<"You will compete against the computer based on the total value of your card's face value."<< endl;
    cout <<"  "<<"The player who wins four rounds first wins the game."<< endl;
    cout <<" "<< endl;
    cout <<"  "<<"After 7 rounds,the game is over! The player who wins more rounds wins the game!"<< endl;
    cout <<" "<< endl;
    cout <<"  "<<"There are three chances to exchange cards in each round, and you can choose not to exchange cards."<< endl;
    cout <<"  "<<"Because the computer cannot change cards, its original score is increased by 10 points for the game."<< endl;
    cout <<" "<< endl;
    cout <<"  "<<"Certain card combinations earn extra points!"<< endl;
    cout <<"  "<<"a pair worth 10 points"<< endl;
    cout <<"  "<<"three of a kind worth 50 points"<< endl;
    cout <<"  "<<"four of a kind worth 100 points"<< endl;
    cout <<"  "<<"a flush worth 120 points"<< endl;
    cout <<"  "<<"four cards with different values worth 15 points"<< endl;
    cout <<" "<< endl;
    cout <<"  "<<"Let the game begin!"<< endl;
    cout <<" "<< endl;
    cout <<"  "<< "*******************************************************************************" << endl;
    
    const int maxWins = 4;
    const int maxRounds = 7;
    int playerWins = 0;
    int computerWins = 0;
    int rounds = 0;
    bool gameover = false;
    int deck[52];

    for (int i = 0; i < 52; i++) 
    {
        deck[i] = i;
    }
    
    srand(time(0));
    
    while (!gameover) 
    {
        // Shuffle the cards.
        int playerHand[4];
        int computerHand[4];
        random_shuffle(deck, deck + 52);

        for (int i = 0; i < 4; i++) 
        {
            playerHand[i] = deck[i];
            computerHand[i] = deck[i+4];
        }
        
        sort(playerHand, playerHand + 4);
        sort(computerHand, computerHand + 4);
        
        // Show cards of players
        cout <<" "<< "Your hand: ";
        printHand(playerHand);
        
        // change cards of players
        for (int i = 0; i < 3; i++) 
        {
            cout <<" "<< "Choose card to exchange (0 or 1-4): ";
            int index;
            cin >> index;
            index--;
            if(index == -1)
            {
                cout <<" "<< "No card to change! NEXT CHOICE~!" << endl;
            }
            else if(index == 0 || index == 1 || index == 2 || index == 3)
            {
                int temp = playerHand[index];
                playerHand[index] = deck[i+8];
                deck[i+8] = temp;
            }
            
            sort(playerHand, playerHand + 4);
            cout <<" "<< "New hand: ";
            printHand(playerHand);
        }
        
        // Show cards of computer
        cout <<" "<< "Computer hand: ";
        printHand(computerHand);
        
        int playerPoints = calculatePoints(playerHand);
        int computerPoints = calculatePoints(computerHand) + 10 ;
        
        cout <<" "<< "Your points: " << playerPoints << endl;
        cout <<" "<< "Computer points: " << computerPoints << endl;
        
        if (playerPoints > computerPoints) 
        {
            playerWins++;
            cout << " " << endl;
            cout <<" "<< "You win this round!" << endl;
            cout << " " << endl;
        } 
        else if (playerPoints < computerPoints)     
        {
            computerWins++;
            cout << " " << endl;
            cout <<" "<< "Computer wins this round!" << endl;
            cout << " " << endl;
        } 
        else 
        {
            cout << " " << endl;
            cout <<" "<< "Tie!" << endl;
            cout << " " << endl;
        }
    
        rounds++;
        
        if (playerWins == maxWins || computerWins == maxWins) 
        {
            gameover = true;
            if (playerWins > computerWins) 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "You win the game!" << endl;
            } 
            else if (playerWins < computerWins) 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins the game!" << endl;
            } 
            else 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "Tie game!" << endl;
            }
        } 
        else if (rounds == maxRounds) 
        {
            gameover = true;
            if (playerWins > computerWins) 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "You win the game!" << endl;
            } 
            else if (playerWins < computerWins) 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins the game!" << endl;
            } 
            else 
            {
                cout << " " << endl;
                cout <<" "<< "You win " << playerWins << " rounds"<< endl;
                cout <<" "<< "Computer wins " << computerWins << " rounds"<< endl;
                cout <<" "<< "Tie game!" << endl;
            }
        }
    }

    return 0;
}


