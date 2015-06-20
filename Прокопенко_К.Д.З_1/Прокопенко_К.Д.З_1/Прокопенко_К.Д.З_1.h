// Прокопенко_К.Д.З_1.h : главный файл заголовка для приложения Прокопенко_К.Д.З_1
//
#pragma once

#ifndef __AFXWIN_H__
#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы

// CПрокопенко_КДЗ_1App:
// О реализации данного класса см. Прокопенко_К.Д.З_1.cpp
//

class CПрокопенко_КДЗ_1App : public CWinApp
{
public:
	CПрокопенко_КДЗ_1App();

	// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	// Реализация
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CПрокопенко_КДЗ_1App theApp;
