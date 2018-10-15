#include <vector>
#include <glm/glm.hpp>

class Transform
{
private:
	glm::vec3 m_localPosition;
	glm::vec3 m_localRotation;
	glm::vec3 m_localScale;

public:
	void Translate(glm::vec3 _amount);
	void Rotate(glm::vec3 _amount);
	void Scale(glm::vec3 _amount);
	void SetLocalPosition(glm::vec3 _position);
	void SetLocalRotation(glm::vec3 _rotation);
	void SetLocalScale(glm::vec3 _scale);
};