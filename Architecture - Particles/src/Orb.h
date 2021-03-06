//
//  Orb.h
//  ParticlePlay
//
//  Created by Seb Lee-Delisle on 23/07/2012.
//  Copyright (c) 2012 seb.ly. All rights reserved.
//


#pragma once
#include "ofMain.h"
#include "ParticleSystem.h"
#include "Rocket.h"

class Orb : public Effect { 
	public : 
	
	Orb();
	
	bool update(float deltaTime); 
	bool draw(); 
	
	Rocket *  makeRocket(); 
	
	ofVec3f pos; 
	
	float rot1, rot2, rot3; 
	float vel1, vel2, vel3; 
	float orbSize; 
	
	ParticleSystem* smokeSystem; 
	ofImage smokeImage;


};