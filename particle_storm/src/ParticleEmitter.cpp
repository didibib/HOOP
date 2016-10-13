#include "ParticleEmitter.h"

Particle* ParticleEmitter::emit() {
	Particle* newParticle;

	float r = ofRandom(1);
	if (r < ratio && r > 0) {
		newParticle = new CurvingParticle(originX, originX);
	}
	else {
		newParticle = new Particle(originX, originX);
	}

	return newParticle;
}

void ParticleEmitter::setOrigin(float _originX, float _originY) {
	originX = _originX;
	originY = _originX;
}

void ParticleEmitter::setCurvingParticleRatio(float _ratio) {
	ratio = _ratio;
}

void ParticleEmitter::setColors(ofColor _center, ofColor _inner, ofColor _outer) {
	center = _center;
	inner = _inner;
	outer = _outer;
}