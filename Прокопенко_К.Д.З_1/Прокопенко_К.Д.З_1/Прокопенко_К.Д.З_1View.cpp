// Прокопенко_К.Д.З_1View.cpp : реализация класса CПрокопенко_КДЗ_1View
//

#include "stdafx.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позволяет совместно использовать код документа в данным проекте.
#ifndef SHARED_HANDLERS
#include "Прокопенко_К.Д.З_1.h"
#endif

#include "Прокопенко_К.Д.З_1Doc.h"
#include "Прокопенко_К.Д.З_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CПрокопенко_КДЗ_1View

IMPLEMENT_DYNCREATE(CПрокопенко_КДЗ_1View, CView)

BEGIN_MESSAGE_MAP(CПрокопенко_КДЗ_1View, CView)
	// Стандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// создание/уничтожение CПрокопенко_КДЗ_1View

CПрокопенко_КДЗ_1View::CПрокопенко_КДЗ_1View()
{
	// TODO: добавьте код создания
}

CПрокопенко_КДЗ_1View::~CПрокопенко_КДЗ_1View()
{
}

BOOL CПрокопенко_КДЗ_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменения
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// рисование CПрокопенко_КДЗ_1View

void CПрокопенко_КДЗ_1View::OnDraw(CDC* /*pDC*/)
{
	CПрокопенко_КДЗ_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки для собственных данных
}

// печать CПрокопенко_КДЗ_1View

BOOL CПрокопенко_КДЗ_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void CПрокопенко_КДЗ_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void CПрокопенко_КДЗ_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}

// диагностика CПрокопенко_КДЗ_1View

#ifdef _DEBUG
void CПрокопенко_КДЗ_1View::AssertValid() const
{
	CView::AssertValid();
}

void CПрокопенко_КДЗ_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CПрокопенко_КДЗ_1Doc* CПрокопенко_КДЗ_1View::GetDocument() const // встроена неотлаженная версия
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CПрокопенко_КДЗ_1Doc)));
	return (CПрокопенко_КДЗ_1Doc*)m_pDocument;
}
#endif //_DEBUG

// обработчики сообщений CПрокопенко_КДЗ_1View