/*=============================================================================
	ULevelSummary.h: Level summary.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.
=============================================================================*/

	// Constructors.
	ULevelSummary()
	{}

	// UObject interface.
	void PostLoad()
	{
		guard(ULevelSummary::PostLoad);
		Super::PostLoad();
		const TCHAR* Text=NULL;
		Text = Localize( TEXT("LevelInfo0"), TEXT("Title"), (const TCHAR*)GetOuter()->GetName(), NULL, 1 );
		if( *Text )
			Title = Text;
		Text = Localize( TEXT("LevelInfo0"), TEXT("IdealPlayerCount"), (const TCHAR*)GetOuter()->GetName(), NULL, 1 );
		if( *Text )
			IdealPlayerCount = Text;
		unguard;
	}

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
