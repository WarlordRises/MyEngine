#include <memory>

class Core;

class Entity
{
private:


public:
	void Addcomponent();
	void Tick();
	void Display();
	std::shared_ptr<Core> GetCore();
	//std::shared_ptr<>
	


};
