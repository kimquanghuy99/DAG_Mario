#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"
#define ID_ANI_PORTAL	20000
#define PORTAL_WIDTH 16
#define PORTAL_BBOX_WIDTH 16
#define PORTAL_BBOX_HEIGHT 16
/*
	Object that triggers scene switching
*/
class CPortal : public CGameObject
{
	int scene_id;	// target scene to switch to 

	float width;
	float height; 
public:
	CPortal(float l, float t, float r, float b, int scene_id);
	virtual void Render();
	virtual void GetBoundingBox(float &l, float &t, float &r, float &b);

	void RenderBoundingBox(void);
	
	int GetSceneId() { return scene_id;  }
	int IsBlocking() { return 0; }
};