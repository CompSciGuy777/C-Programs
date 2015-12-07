

struct Card {

//declare variables
int suit, rank;
vector<string> suits (4);
vector<string> ranks (14);

//declare constructor
Card (int s, int r);

//declare functions
const void print ();
void equals (const Card& card2);
void isGreater (const Card& card2);
};

Card::Card (int s, int r) {
	suit = s; rank = r;
};

const void Card::print () {
	suits[0] = "Clubs";
	suits[1] = "Hearts";
	suits[2] = "Diamonds";
	suits[3] = "Spades";
	
	ranks[1] = "Ace"
	ranks[2] = "2"
	ranks[3] = "3"
	ranks[4] = "4"
	ranks[5] = "5"
	ranks[6] = "6"
	ranks[7] = "7"
	ranks[8] = "8"
	ranks[9] = "9"
	ranks[10] = "10"
	ranks[11] = "Jack"
    ranks[12] = "Queen"
	ranks[13] = "King"

cout << ranks[rank] << " Of " << suits[suit] <<endl;

}
