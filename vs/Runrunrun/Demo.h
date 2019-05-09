#ifndef DEMO_H
#define DEMO_H

#include <SOIL/SOIL.h>

#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>

#include "Game.h"

#define NUM_FRAMES 6
#define FRAME_DUR 80

using namespace glm;

class Demo :
	public Engine::Game
{
public:
	Demo();
	~Demo();
	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render();
	float frame_width = 0, frame_height = 0, frame_width2 = 0, frame_height2 = 0, frame_width3 = 0, frame_height3 = 0, frame_width4 = 0, frame_height4 = 0;
private:
	float frame_dur = 0, frame_dur2 = 0, oldxpos = 0, xpos = 0, ypos = 0, xpos2 = 0, ypos2 = 0, xpos3 = 0, ypos3 = 0, xpos4 = 0, ypos4 = 0, gravity = 0, xVelocity = 0, yVelocity = 0, yposGround = 0, gravityEnemy = 0, xVelocityEnemy = 0, yVelocityEnemy = 0, yposGroundEnemy = 0;
	GLuint VBO, VAO, EBO, texture, program, VBOBg, VAOBg, EBOBg, textureBg, programBg, VBOHeart, VAOHeart, EBOHeart, textureHeart, programHeart,
		VBOEnemy, VAOEnemy, EBOEnemy, textureEnemy, programEnemy;
	bool walk_anim = false, onGround = true;
	unsigned int frame_idx = 0, frame_idx2 = 0, flip = 0, flip2 = 0;
	void BuildPlayerSprite();
	void BuildBackgroundSprite();
	void DrawBackgroundSprite();
	void BuildHeartSprite();
	void DrawHeartSprite(int jarak);
	void BuildEnemySprite();
	void DrawEnemySprite();
	bool IsCollided(float x1, float y1, float width1, float height1, float x2, float y2, float width2, float height2);
	void DrawPlayerSprite();
	void UpdatePlayerSpriteAnim(float deltaTime);
	void ControlPlayerSprite(float deltaTime);
	void UpdateEnemySpriteAnim(float deltaTime);
	void ControlEnemySprite(float deltaTime);
};
#endif

