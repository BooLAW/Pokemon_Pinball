#pragma once
#include "Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "Globals.h"

class PhysBody;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();
	void OnCollision(PhysBody* bodyA, PhysBody* bodyB);

public:
	p2List<PhysBody*> circles;
	p2List<PhysBody*> chains;

	//PhysBody* sensor;
	bool sensed;

	SDL_Texture* circle;
	//ficar textura del mapa i de les pales
	uint bonus_fx;
	p2Point<int> ray;
	bool ray_on;


	int stuff[16] = {
		43, 330,
		42, 370,
		85, 398,
		93, 394,
		92, 387,
		53, 364,
		49, 358,
		49, 330
	};
	int mapatallat[8] = {
		65, 354,
		65, 327,
		88, 358,
		87, 368
	};
	int taulellretalllat[126] = {
		100, 424,
		100, 418,
		39, 382,
		39, 396,
		24, 396,
		24, 325,
		26, 319,
		29, 316,
		43, 315,
		46, 313,
		48, 311,
		48, 285,
		38, 275,
		23, 247,
		16, 230,
		12, 206,
		12, 174,
		16, 140,
		31, 108,
		52, 87,
		66, 78,
		86, 70,
		107, 65,
		131, 65,
		157, 71,
		185, 83,
		201, 94,
		219, 110,
		233, 126,
		242, 144,
		248, 172,
		249, 190,
		250, 208,
		250, 408,
		236, 408,
		236, 208,
		235, 184,
		231, 159,
		224, 141,
		219, 136,
		219, 142,
		223, 155,
		225, 170,
		227, 186,
		228, 206,
		222, 235,
		209, 264,
		191, 286,
		191, 310,
		194, 314,
		202, 316,
		208, 316,
		213, 319,
		216, 325,
		216, 396,
		201, 396,
		201, 383,
		142, 418,
		142, 424,
		256, 424,
		256, 0,
		0, 0,
		0, 424
	};

};
