// Program: Translate playing card shorthand notation to full description

#include <iostream>
#include <string>
using namespace std;

int main() {
    string card;
    cout << "Enter the card notation (e.g., QS, 10H, AD): ";
    cin >> card;

    string value, suit;

    if (card.size() == 3) {  
        value = "10";
        suit = card.substr(2,1);
    } else {
        char v = card[0];
        suit = card.substr(1,1);

        switch(v) {
            case 'A': value = "Ace"; break;
            case 'J': value = "Jack"; break;
            case 'Q': value = "Queen"; break;
            case 'K': value = "King"; break;
            default: value = string(1,v); break;
        }
    }


    if (suit == "D") suit = "Diamonds";
    else if (suit == "H") suit = "Hearts";
    else if (suit == "S") suit = "Spades";
    else if (suit == "C") suit = "Clubs";
    else suit = "Unknown";

    cout << value << " of " << suit << endl;
    return 0;
}
