#include "SphereCollider.h"
#include "math.h"
#include "DxLib.h"

SphereCollider::SphereCollider() {
	radius = 20;
	location.x = 0;
	location.y = 0;
	
}

SphereCollider::~SphereCollider() {

}

int SphereCollider::CheckCollision(SphereCollider* collision) {
	
	int a = location.x - collision->location.x;
	int b = location.y - collision->location.y;
	int c = sqrt(a * a + b * b);
	
	if (c <= radius+20) {
		return TRUE;
	}

	return FALSE;
}