#ifndef _ANIMATED_SPRITE_H_
#define _ANIMATED_SPRITE_H_

#include <string>
#include <vector>
#include <map>
#include "tinyxml2/tinyxml2.h"
#include "Utilities.h"


struct AniSprite
{
			std::string Name;
			float width, height;
			float x0,x1,y0,y1;
};
struct Atlas
{
	float width, height;
	std::string sSheet;
	std::string sAnimations;
};

typedef std::vector<std::string> frame;

class AnimatedSprite 
{
public:
	AnimatedSprite(void);
	~AnimatedSprite(void);
	AnimatedSprite( const char* a_pSpriteSheet);
	//virtual void Draw();
	void Update();
	void SetAnimation(std::string animation,PlayType type);
	void SetAnimation(std::string animation,PlayType type, int frame);
	void PlayAnimation();
	void SetSprite();
	void LoadSprites(const char* a_pSpriteSheet);
	void LoadAnimations(const char* a_pAnimationSheet);
	void Input();
	std::map<std::string,AniSprite> mSprites;
	std::map<std::string,frame> mAnimations;
	Atlas atlas;

	UV m_UVData[2];

	std::string currentAnimation, currentSprite;
	int currentFrame, loopFrame;
	double m_dFrames;
	PlayType currentPlayType;


double elapsedTime;

};


#endif