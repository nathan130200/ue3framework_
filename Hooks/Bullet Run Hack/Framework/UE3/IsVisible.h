#pragma once
#ifndef __ISVISIBLE_H_
#define __ISVISIBLE_H_

class IsVisible
{
public:
	static bool IsVisible::FastTrace( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation );
	static bool IsVisible::Visible( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation );
};

#endif
