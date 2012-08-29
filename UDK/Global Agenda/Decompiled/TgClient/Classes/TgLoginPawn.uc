/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgLoginPawn.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:5
 *	States:1
 *
 *******************************************************************************/
class TgLoginPawn extends Pawn
	hidecategories(Navigation)
	config(Game);

var TgLoginInfo m_GameInfo;

event Tick(float DeltaTime)
{
	super(Actor).Tick(DeltaTime);
	Velocity = vect(0.00, 0.00, 0.00);
}

simulated function PostBeginPlay()
{
	m_GameInfo = TgLoginInfo(WorldInfo.Game);
	super.PostBeginPlay();
}

simulated event FellOutOfWorld(class<DamageType> dmgType);
singular simulated event OutsideWorldBounds();
function StartUI()
{
	local TgLoginPlayerController P;
	local TgLoginHUD HUD;

	P = TgLoginPlayerController(Controller);
	HUD = TgLoginHUD(P.myHUD);
	// End:0x49 Loop:False
	if(HUD != none)
	{
		HUD.OpenMenu();
	}
}

auto state LoginMenu
{

Begin:
	// End:0x1a Loop:False
	if(m_GameInfo.ShouldSkipLoginHUD())
	{
	}
	// End:0x24
	else
	{
		StartUI();
	}
	stop;	
}

defaultproperties
{
	begin object name=TgLoginSkeletalMeshComponent class=SkeletalMeshComponent 
		bOwnerNoSee=true
	object end
	Mesh=TgLoginSkeletalMeshComponent
	CylinderComponent=CollisionCylinder
	begin object name=TgLoginSkeletalMeshComponent class=SkeletalMeshComponent 
		bOwnerNoSee=true
	object end
	Components(2)=TgLoginSkeletalMeshComponent
	bStasis=true
	CollisionComponent=CollisionCylinder
}