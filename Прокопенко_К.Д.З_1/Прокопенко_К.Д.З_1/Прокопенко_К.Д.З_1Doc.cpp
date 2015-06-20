// ����������_�.�.�_1Doc.cpp : ���������� ������ C����������_���_1Doc
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "����������_�.�.�_1.h"
#endif

#include "����������_�.�.�_1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C����������_���_1Doc

IMPLEMENT_DYNCREATE(C����������_���_1Doc, CDocument)

BEGIN_MESSAGE_MAP(C����������_���_1Doc, CDocument)
END_MESSAGE_MAP()

// ��������/����������� C����������_���_1Doc

C����������_���_1Doc::C����������_���_1Doc(){
	// TODO: �������� ��� ��� ������������ ������ ������������
	for (size_t i = 0; i < 100; i++)	{
		rNumbers[i] = rand() % 100 + 1;
	}
	sort(rNumbers, rNumbers + 100, greater<int>());
}

C����������_���_1Doc::~C����������_���_1Doc(){
}

BOOL C����������_���_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument()){
		return FALSE;
	}

	// TODO: �������� ��� ��������� �������������
	// (��������� SDI ����� �������� ������������ ���� ��������)

	return TRUE;
}

void C����������_���_1Doc::Reverse(){
	reverse(rNumbers, rNumbers + 100);
}

int C����������_���_1Doc::GetTheEvenNumbersSum(){
	TheEvenNumbersSum = 0;
	for (size_t i = 0; i < 100; i++)	{
		if (rNumbers[i] % 2 == 0){
			TheEvenNumbersSum += rNumbers[i];
		}
	}
	return TheEvenNumbersSum;
}

int C����������_���_1Doc::GetNotTheEvenNumbersSum(){
	NotTheEvenNumbersSum = 0;
	for (size_t i = 0; i < 100; i++)	{
		if (rNumbers[i] % 2 != 0){
			NotTheEvenNumbersSum += rNumbers[i];
		}
	}
	return NotTheEvenNumbersSum;
}

// ������������ C����������_���_1Doc

void C����������_���_1Doc::Serialize(CArchive& ar){
	if (ar.IsStoring())	{
		// TODO: �������� ��� ����������
	}
	else{
		// TODO: �������� ��� ��������
	}
}

#ifdef SHARED_HANDLERS

// ��������� ��� �������
void C����������_���_1Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds){
	// �������� ���� ��� ��� ����������� ������ ���������
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

// ��������� ������������ ������
void C����������_���_1Doc::InitializeSearchContent(){
	CString strSearchContent;
	// ������� ���������� ������ �� ������ ���������.
	// ����� ����������� ������ ����������� ������ � ������� ";"

	// ��������:  strSearchContent = _T("�����;�������������;����;������ ole;");
	SetSearchContent(strSearchContent);
}

void C����������_���_1Doc::SetSearchContent(const CString& value){
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

// ����������� C����������_���_1Doc

#ifdef _DEBUG
void C����������_���_1Doc::AssertValid() const{
	CDocument::AssertValid();
}

void C����������_���_1Doc::Dump(CDumpContext& dc) const{
	CDocument::Dump(dc);
}
#endif //_DEBUG

// ������� C����������_���_1Doc