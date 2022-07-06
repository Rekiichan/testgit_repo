#include <string>
using namespace std;

class Word
{
public:
	int ID;
	string ENG;
	string VIET;
	int Type;

	Word() {
	}

	void VOCAInit();
	void VOCAShow();
	
};

