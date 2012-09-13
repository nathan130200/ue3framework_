#pragma once

#ifndef __UE3MATH_H_
#define __UE3MATH_H_

#define URotToRadian(x) (x * (3.141592654f / 32768))
#define UCONST_Pi 3.1415926
#define URotation180 32768
#define URotationToRadians2  UCONST_Pi / URotation180 
#define PI 3.1415926

#define URotationToRadians( URotation )		( ( URotation ) * ( UCONST_Pi / 32768.0f ) ) 
#define URotationToDegree( URotation )		( ( URotation ) * ( 360.0f / 65536.0f ) ) 

#define DegreeToURotation( Degree )			( ( Degree ) * ( 65536.0f / 360.0f ) )
#define DegreeToRadian( Degree )			( ( Degree ) * ( UCONST_Pi / 180.0f ) )

#define RadianToURotation( URotation )		( ( URotation ) * ( 32768.0f / UCONST_Pi ) ) 
#define RadianToDegree( Radian )			( ( Radian ) * ( 180.0f / UCONST_Pi )

#define URotationToRadians2  UCONST_Pi / URotation180 

FRotator FVector::Rotator()
{
	//return FRotator(RadianToURotation(atan2(Z, sqrt((X * X) + (Y * Y)))), RadianToURotation(atan2(Y, X)), 0);
}

#endif
