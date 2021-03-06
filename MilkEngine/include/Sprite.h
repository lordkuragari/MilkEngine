#ifndef _SPRITE_H_
#define _SPRITE_H_
#include "Quad.h"
#include "Utilities.h"
#include "TextFileReader.h"
#include "Animator.h"
#include "SOIL/SOIL.h"


class Sprite
{
public:
	Sprite();
	~Sprite();
	
	Transform m_Transform;
	glm::vec3 m_Position;
	glm::vec3 m_Velocity;
	glm::vec3 m_Rotation;
	glm::vec2 m_Scale;
	Animator m_Animator;
	GLuint m_TexId;
	GLuint tex_location;
	GLuint m_UVO;
	float2 m_UVData[4];


	void Update(float a_DeltaTime);
	void Draw();
	void LoadTexture(const char* a_pTexture);

	void SetUVData();
private:
};


#endif  //_SPRITE_H_
