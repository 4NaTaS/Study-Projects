// ����������_�.�.�_1View.h : ��������� ������ C����������_���_1View
//

#pragma once

class C����������_���_1View : public CView
{
protected: // ������� ������ �� ������������
	C����������_���_1View();
	DECLARE_DYNCREATE(C����������_���_1View)

	// ��������
public:
	C����������_���_1Doc* GetDocument() const;

	// ��������
public:

	// ���������������
public:
	virtual void OnDraw(CDC* pDC);  // �������������� ��� ��������� ����� �������������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	// ����������
public:
	virtual ~C����������_���_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���������� ������ � ����������_�.�.�_1View.cpp
inline C����������_���_1Doc* C����������_���_1View::GetDocument() const
{
	return reinterpret_cast<C����������_���_1Doc*>(m_pDocument);
}
#endif
