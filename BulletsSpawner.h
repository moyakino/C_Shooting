#pragma once
class GameMainScene;

//�e�𔭎˂���x�[�X�N���X �������Bullet�ɒl��n���̂� �X�|�[��
class BulletsSpawner
{
private:
	float	speed;				//���x
	float	angle;				//�p�x
	float	acceleration;		//���x�̕ω���
	float	angulVelocity;		//�p�x�̕ω���

public:

	BulletsSpawner();
	~BulletsSpawner();

	//�����ɃQ�[�����C���V�[���̃|�C���^���󂯎��SpawnBullet�Œe��Speed���̗v�f���󂯓n��
	virtual void Shoot(GameMainScene* GameMain);
};