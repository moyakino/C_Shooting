#pragma once
// �f�t�H���g�̒��ۃV�[���N���X
// ���[�U�[�͂�����p�����ăV�[������������Ɗy

class SceneBase {
public:
    // �f�X�g���N�^
    virtual ~SceneBase() {}

    // �X�V��������������
    virtual SceneBase* Update() = 0;

    // �`�揈������������
    virtual void Draw() const = 0;
};