#pragma once
class SphereCollider
{
protected:
	//�����o�ϐ�

	//float location;//���S���W
	float radius;//���a

	struct	//���S���W
	{
		float x=0;
		float y=0;
	}location;

public:
	//�����o�֐�
	SphereCollider();
	~SphereCollider();
	int CheckCollision(SphereCollider* collision);
};

