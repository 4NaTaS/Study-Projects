// Прокопенко_К.Д.З_1Doc.cpp : реализация класса CПрокопенко_КДЗ_1Doc
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позволяет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "Прокопенко_К.Д.З_1.h"
#endif

#include "Прокопенко_К.Д.З_1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CПрокопенко_КДЗ_1Doc

IMPLEMENT_DYNCREATE(CПрокопенко_КДЗ_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CПрокопенко_КДЗ_1Doc, CDocument)
END_MESSAGE_MAP()

// создание/уничтожение CПрокопенко_КДЗ_1Doc

CПрокопенко_КДЗ_1Doc::CПрокопенко_КДЗ_1Doc(){
	// TODO: добавьте код для одноразового вызова конструктора
	for (size_t i = 0; i < 100; i++)	{
		rNumbers[i] = rand() % 100 + 1;
	}
	sort(rNumbers, rNumbers + 100, greater<int>());
}

CПрокопенко_КДЗ_1Doc::~CПрокопенко_КДЗ_1Doc(){
}

BOOL CПрокопенко_КДЗ_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument()){
		return FALSE;
	}

	// TODO: добавьте код повторной инициализации
	// (Документы SDI будут повторно использовать этот документ)

	return TRUE;
}

void CПрокопенко_КДЗ_1Doc::Reverse(){
	reverse(rNumbers, rNumbers + 100);
}

int CПрокопенко_КДЗ_1Doc::GetTheEvenNumbersSum(){
	TheEvenNumbersSum = 0;
	for (size_t i = 0; i < 100; i++)	{
		if (rNumbers[i] % 2 == 0){
			TheEvenNumbersSum += rNumbers[i];
		}
	}
	return TheEvenNumbersSum;
}

int CПрокопенко_КДЗ_1Doc::GetNotTheEvenNumbersSum(){
	NotTheEvenNumbersSum = 0;
	for (size_t i = 0; i < 100; i++)	{
		if (rNumbers[i] % 2 != 0){
			NotTheEvenNumbersSum += rNumbers[i];
		}
	}
	return NotTheEvenNumbersSum;
}

// сериализация CПрокопенко_КДЗ_1Doc

void CПрокопенко_КДЗ_1Doc::Serialize(CArchive& ar){
	if (ar.IsStoring())	{
		// TODO: добавьте код сохранения
	}
	else{
		// TODO: добавьте код загрузки
	}
}

#ifdef SHARED_HANDLERS

// Поддержка для эскизов
void CПрокопенко_КДЗ_1Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds){
	// Измените этот код для отображения данных документа
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Поддержка обработчиков поиска
void CПрокопенко_КДЗ_1Doc::InitializeSearchContent(){
	CString strSearchContent;
	// Задайте содержимое поиска из данных документа.
	// Части содержимого должны разделяться точкой с запятой ";"

	// Например:  strSearchContent = _T("точка;прямоугольник;круг;объект ole;");
	SetSearchContent(strSearchContent);
}

void CПрокопенко_КДЗ_1Doc::SetSearchContent(const CString& value){
	if (value.IsEmpty())	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}else	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// диагностика CПрокопенко_КДЗ_1Doc

#ifdef _DEBUG
void CПрокопенко_КДЗ_1Doc::AssertValid() const{
	CDocument::AssertValid();
}

void CПрокопенко_КДЗ_1Doc::Dump(CDumpContext& dc) const{
	CDocument::Dump(dc);
}
#endif //_DEBUG

// команды CПрокопенко_КДЗ_1Doc