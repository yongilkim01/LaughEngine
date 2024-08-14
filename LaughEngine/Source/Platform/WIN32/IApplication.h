#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class LAUGH_API IApplication
{
public:
	/* Application Constructor */
	IApplication();

	/* Application Deconstructor */
	virtual ~IApplication() {};

public:
	/* Initialize Function */
	virtual VOID Initialize() = 0;

	/* Game Loop Function */
	virtual VOID Update() = 0;
};

IApplication* EntryApplication();