#pragma once
#include "SceneBase.h"

// �V�[���}�l�[�W���[�N���X
// �e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public SceneBase {
private:
    SceneBase* mScene; // ���݂̃V�[��

public:
    // �R���X�g���N�^
    SceneManager(SceneBase* scene) : mScene(scene) {}

    // �f�X�g���N�^
    ~SceneManager() {
        delete mScene;
    }

    // �X�V���������s����
    SceneBase* Update()override;

    // �`�揈�������s����
    void Draw() const;
};
