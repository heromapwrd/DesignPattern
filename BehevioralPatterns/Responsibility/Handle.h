#ifndef _HANDLE_H__
#define _HANDLE_H__

class Handle
{
public:
	virtual ~Handle();
	virtual void HandRequest();
	virtual void SetSuccesor(Handle* pSuccessor);
	virtual Handle* GetSuccesor();
protected:
	Handle();
protected:
	Handle* m_pSuccesor;
};
#endif