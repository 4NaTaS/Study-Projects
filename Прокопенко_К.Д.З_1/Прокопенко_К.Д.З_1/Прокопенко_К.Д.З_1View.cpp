// ����������_�.�.�_1View.cpp : ���������� ������ C����������_���_1View
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "����������_�.�.�_1.h"
#endif

#include "����������_�.�.�_1Doc.h"
#include "����������_�.�.�_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C����������_���_1View

IMPLEMENT_DYNCREATE(C����������_���_1View, CView)

BEGIN_MESSAGE_MAP(C����������_���_1View, CView)
	// ����������� ������� ������
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// ��������/����������� C����������_���_1View

C����������_���_1View::C����������_���_1View()
{
	// TODO: �������� ��� ��������
}

C����������_���_1View::~C����������_���_1View()
{
}

BOOL C����������_���_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �������� ����� Window ��� ����� ����������� ���������
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ��������� C����������_���_1View

void C����������_���_1View::OnDraw(CDC* /*pDC*/)
{
	C����������_���_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �������� ����� ��� ��������� ��� ����������� ������
}

// ������ C����������_���_1View

BOOL C����������_���_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ���������� �� ���������
	return DoPreparePrinting(pInfo);
}

void C����������_���_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� �������������� ������������� ����� �������
}

void C����������_���_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� ������� ����� ������
}

// ����������� C����������_���_1View

#ifdef _DEBUG
void C����������_���_1View::AssertValid() const
{
	CView::AssertValid();
}

void C����������_���_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C����������_���_1Doc* C����������_���_1View::GetDocument() const // �������� ������������ ������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C����������_���_1Doc)));
	return (C����������_���_1Doc*)m_pDocument;
}
#endif //_DEBUG

// ����������� ��������� C����������_���_1View