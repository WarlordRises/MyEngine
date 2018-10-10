#include <vector>

class Keyboard
{
private:
	std::vector<int> m_keyCodes;
public:
	bool GetKey(int _keyCodes);
	bool GetKeyDown(int _keyCodes);
	bool GetKeyUp(int _keyCodes);
};