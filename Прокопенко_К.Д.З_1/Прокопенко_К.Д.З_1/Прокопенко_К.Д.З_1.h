// ����������_�.�.�_1.h : ������� ���� ��������� ��� ���������� ����������_�.�.�_1
//
#pragma once

#ifndef __AFXWIN_H__
#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������

// C����������_���_1App:
// � ���������� ������� ������ ��. ����������_�.�.�_1.cpp
//

class C����������_���_1App : public CWinApp
{
public:
	C����������_���_1App();

	// ���������������
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	// ����������
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C����������_���_1App theApp;
