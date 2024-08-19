#pragma once

#define ENTRYAPP(x) Win32::IApplication* EntryApplication() { return new x; }

namespace Win32
{

	class LAUGH_API IApplication
	{
	public:
		/* Application Constructor */
		IApplication();

		/* Application Deconstructor */
		virtual ~IApplication() {};

	public:
		/* Setup game setting */
		virtual VOID SetupPerGameSettings() = 0;

		/* Initialize Function */
		virtual VOID Initialize() = 0;

		/* Game loop Function */
		virtual VOID Update() = 0;
	};

	IApplication* EntryApplication();
}