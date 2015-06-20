// ����������_�.�.�_1Doc.h : ��������� ������ C����������_���_1Doc
//

#pragma once

class C����������_���_1Doc : public CDocument
{
protected: // ������� ������ �� ������������
	C����������_���_1Doc();
	DECLARE_DYNCREATE(C����������_���_1Doc)

	// ��������
public:
	int* rNumbers = new int[100];
	int TheEvenNumbersSum;
	int NotTheEvenNumbersSum;

	// ��������
public:
	void Reverse();
	int GetTheEvenNumbersSum();
	int GetNotTheEvenNumbersSum();

	// ���������������
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

	// ����������
public:
	virtual ~C����������_���_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ��������������� �������, �������� ���������� ������ ��� ����������� ������
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
