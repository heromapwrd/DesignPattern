#ifndef _VIEW_H__
#define _VIEW_H__

class View
{
public:
	virtual ~View();
	void Display();
	void SetFocus();
	void ResetFocus();
protected:
	View();
	virtual void DoDisplay() = 0;
};
#endif