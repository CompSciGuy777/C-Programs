





class Game
{
public:
// Structure that establishes the standard unedited TTT board
	struct startboard{
		std::vector<char> line1 (3,"E");
		std::vector<char> line2 (3,"E");
		std::vector<char> line3 (3,"E");
	}start;

//structure that defines the maliable board used throughout the game
		struct board{
		std::vector<char> line1 (3);
		std::vector<char> line2 (3);
		std::vector<char> line3 (3);
	}board;
//variables
  void P1;
  void P2;
  void CompP2;
  string Cnd; //specifies who wins if anyone
  
//functions
	int compai();
	char compmove();
	char hummove();
	void start();
	void update();
	void end();
	private:
}
