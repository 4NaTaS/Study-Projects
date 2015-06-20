// Прокопенко_К.Д.З_1View.h : интерфейс класса CПрокопенко_КДЗ_1View
//

#pragma once

class CПрокопенко_КДЗ_1View : public CView
{
protected: // создать только из сериализации
	CПрокопенко_КДЗ_1View();
	DECLARE_DYNCREATE(CПрокопенко_КДЗ_1View)

	// Атрибуты
public:
	CПрокопенко_КДЗ_1Doc* GetDocument() const;

	// Операции
public:

	// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	// Реализация
public:
	virtual ~CПрокопенко_КДЗ_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // отладочная версия в Прокопенко_К.Д.З_1View.cpp
inline CПрокопенко_КДЗ_1Doc* CПрокопенко_КДЗ_1View::GetDocument() const
{
	return reinterpret_cast<CПрокопенко_КДЗ_1Doc*>(m_pDocument);
}
#endif
