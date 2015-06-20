// Прокопенко_К.Д.З_1Doc.h : интерфейс класса CПрокопенко_КДЗ_1Doc
//

#pragma once

class CПрокопенко_КДЗ_1Doc : public CDocument
{
protected: // создать только из сериализации
	CПрокопенко_КДЗ_1Doc();
	DECLARE_DYNCREATE(CПрокопенко_КДЗ_1Doc)

	// Атрибуты
public:
	int* rNumbers = new int[100];
	int TheEvenNumbersSum;
	int NotTheEvenNumbersSum;

	// Операции
public:
	void Reverse();
	int GetTheEvenNumbersSum();
	int GetNotTheEvenNumbersSum();

	// Переопределение
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

	// Реализация
public:
	virtual ~CПрокопенко_КДЗ_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Вспомогательная функция, задающая содержимое поиска для обработчика поиска
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
