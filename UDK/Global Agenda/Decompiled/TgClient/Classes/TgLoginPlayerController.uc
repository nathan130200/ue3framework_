/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgLoginPlayerController.uc
 * 
 * Stats:
 *	Functions:7
 *	States:2
 *
 *******************************************************************************/
class TgLoginPlayerController extends TgPlayerController
	hidecategories(Navigation)
	native
	config(Game);

native function bool CheckAutoLogin();
simulated function PostBeginPlay()
{
	super.PostBeginPlay();
	CheckAutoLogin();
}

exec function PrevWeapon();
exec function NextWeapon();
exec function StartFire();
noexport exec function StartAltFire(optional byte FireModeNum);
noexport exec function StopAltFire(optional byte FireModeNum);

auto state PlayerWaiting
{

Begin:
	PlayerReplicationInfo.bOnlySpectator = false;
	WorldInfo.Game.bRestartLevel = false;
	WorldInfo.Game.RestartPlayer(self);
	WorldInfo.Game.bRestartLevel = true;
	stop;
}

state PhysicsSpectator extends BaseSpectating
{
	ignores SwitchToBestWeapon, Jump, Suicide;

	exec function TogglePhysicsMode()
	{
		local Vector CurrentLoc;
		local Rotator CurrentRot;

		PlayerReplicationInfo.bOnlySpectator = false;
		CurrentLoc = Location;
		CurrentRot = Rotation;
		WorldInfo.Game.bRestartLevel = false;
		WorldInfo.Game.RestartPlayer(self);
		WorldInfo.Game.bRestartLevel = true;
		// End:0x8d Loop:False
		if(Pawn == none)
		{
		}
		// End:0xb1
		else
		{
			Pawn.SetLocation(CurrentLoc);
			Pawn.SetRotation(CurrentRot);
		}
		SetRotation(CurrentRot);
	}

	function bool CanRestartPlayer()
	{
		return false;
	}

	reliable server function ServerChangeTeam(int N)
	{
		WorldInfo.Game.ChangeTeam(self, 0, true);
	}

	reliable server function ServerRestartPlayer()
	{
		// End:0x1b Loop:False
		if(WorldInfo.TimeSeconds < WaitDelay)
		{
			return;
		}
		// End:0x37 Loop:False
		if(WorldInfo.NetMode == 3)
		{
			return;
		}
		// End:0x69 Loop:False
		if(WorldInfo.Game.bWaitingToStartMatch)
		{
			PlayerReplicationInfo.bReadyToPlay = true;
		}
		// End:0x88
		else
		{
			WorldInfo.Game.RestartPlayer(self);
		}
	}

	function EndState(name NextStateName)
	{
		bCollideWorld = false;
	}

	function BeginState(name PreviousStateName)
	{
		bCollideWorld = true;
	}

}

defaultproperties
{
	CameraClass=class'TgLoginPlayerCamera'
	CylinderComponent=CollisionCylinder
	Components(1)=CollisionCylinder
	CollisionComponent=CollisionCylinder
}