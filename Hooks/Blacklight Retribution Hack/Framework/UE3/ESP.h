//class ESP
//{
//public:
//	static void ESP::NameAPB(UCanvas* Canvas, FVector Screen, APawn* Pawn, FColor DrawColor)
//	{
//		CRender::DrawString( Canvas, Screen.X, Screen.Y-50, DrawColor, true, L"TEST" );
//		Screen.Y += 15;
//	}
//
//	static void ESP::Name(UCanvas* Canvas, FVector Screen, APawn* Pawn, FColor DrawColor)
//	{
//		CRender::DrawString( Canvas, Screen.X, Screen.Y-50, DrawColor, true, Pawn->PlayerReplicationInfo->PlayerName.Data );
//		Screen.Y += 15;
//	}
//
//	static void ESP::Health(UCanvas* Canvas, FVector Screen, APawn* Pawn, FColor DrawColor)
//	{
//		CRender::DrawStringEx( Canvas, Screen.X, Screen.Y-50, DrawColor, 0, L"H: %i", Pawn->Health );
//		Screen.Y += 15;
//	}
//
//	static void ESP::Distance(UCanvas* Canvas, FVector Screen, FVector Location, APawn* Pawn, FColor DrawColor)
//	{
//		float PawnDistance = Radar::calcdist(CameraLocation,Location) /100;
//		CRender::DrawStringEx( Canvas, Screen.X, Screen.Y-50, DrawColor, 0, L"D: %0.2f", PawnDistance );
//		Screen.Y += 15;
//	}
//
//	static void ESP::Boxes(UCanvas* pCanvas, APawn* Target, FColor Color)
//	{
//		//Valid Target Checks Here
//		{
//			FVector Min,Max,vVec1,vVec2,vVec3,vVec4,vVec5,vVec6,vVec7,vVec8;
//
//			FBox Returned;
//			Target->GetComponentsBoundingBox(&Returned);
//
//			if(Returned.IsValid)
//			{
//				Max = Returned.Max;
//				Min = Returned.Min;
//				{
//					vVec3 = Min;
//					vVec3.X = Max.X;
//					vVec4 = Min;
//					vVec4.Y = Max.Y;
//					vVec5 = Min;
//					vVec5.Z = Max.Z;
//					vVec6 = Max;
//					vVec6.X = Min.X;
//					vVec7 = Max;
//					vVec7.Y = Min.Y;
//					vVec8 = Max;
//					vVec8.Z = Min.Z;
//					vVec1 = WorldToScreen::World(pCanvas, Min);
//					vVec2 = WorldToScreen::World(pCanvas, Max);
//					vVec3 = WorldToScreen::World(pCanvas, vVec3);
//					vVec4 = WorldToScreen::World(pCanvas, vVec4);
//					vVec5 = WorldToScreen::World(pCanvas, vVec5);
//					vVec6 = WorldToScreen::World(pCanvas, vVec6);
//					vVec7 = WorldToScreen::World(pCanvas, vVec7);
//					vVec8 = WorldToScreen::World(pCanvas, vVec8);
//				
//					pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec5.X, vVec5.Y, Color);
//					pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec8.X, vVec8.Y, Color);
//					pCanvas->Draw2DLine(vVec3.X, vVec3.Y, vVec7.X, vVec7.Y, Color);
//					pCanvas->Draw2DLine(vVec4.X, vVec4.Y, vVec6.X, vVec6.Y, Color);
//					pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec3.X, vVec3.Y, Color);
//					pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec4.X, vVec4.Y, Color);
//					pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec3.X, vVec3.Y, Color);
//					pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec4.X, vVec4.Y, Color);
//					pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec6.X, vVec6.Y, Color);
//					pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec7.X, vVec7.Y, Color);
//					pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec6.X, vVec6.Y, Color);
//					pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec7.X, vVec7.Y, Color);
//				}
//			}
//		}
//	}
//
//	static void ESP::BoneESP(UCanvas* Canvas, APawn* Target, FColor cColor)
//	{
//		if(Target->Mesh != NULL)
//		{
//			if(strcmp(Target->Mesh->GetBoneName(35).GetName(), "b_Head"))
//			{
//				BoneMESP(Canvas, Target, cColor);
//			}
//			else if(strcmp(Target->Mesh->GetBoneName(14).GetName(), "b_Head"))
//			{
//				BoneFESP(Canvas, Target, cColor);
//			}
//		}
//	}
//
//
//	static void ESP::BoneFESP(UCanvas* Canvas, APawn* Target, FColor cColor)
//	{
//		if(Target->Mesh != NULL)
//		{
//			FName nHeadBone = Target->Mesh->GetBoneName(14);
//			FVector vHead = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nHeadBone,0));
//
//			FName nHip = Target->Mesh->GetBoneName(1);
//			FVector vHip = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nHip, 0));
//
//			FName nNeck = Target->Mesh->GetBoneName(13);
//			FVector vNeck = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nNeck, 0));
//
//			FName nLBicep = Target->Mesh->GetBoneName(46);
//			FVector vLBicep = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLBicep, 0));
//
//			FName nRBicep = Target->Mesh->GetBoneName(25);
//			FVector vRBicep = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRBicep, 0));
//
//			FName nLForearm = Target->Mesh->GetBoneName(47);
//			FVector vLForearm = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLForearm ,0));
//
//			FName nRForearm = Target->Mesh->GetBoneName(26);
//			FVector vRForearm = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRForearm ,0));
//	
//			FName nLthigh = Target->Mesh->GetBoneName(2);
//			FVector vLthigh = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLthigh ,0));
//
//			FName nRthigh = Target->Mesh->GetBoneName(6);
//			FVector vRthigh = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRthigh ,0));
//
//			FName nLcalf = Target->Mesh->GetBoneName(3);
//			FVector vLcalf = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLcalf ,0));
//
//			FName nRcalf = Target->Mesh->GetBoneName(7);
//			FVector vRcalf = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRcalf ,0));
//
//			FName nLFoot = Target->Mesh->GetBoneName(4);
//			FVector vLFoot = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLFoot ,0));
//
//			FName nRFoot = Target->Mesh->GetBoneName(8);
//			FVector vRFoot = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRFoot ,0));
//
//			Canvas->Draw2DLine(vNeck.X, vNeck.Y, vHead.X, vHead.Y, cColor);     
//			Canvas->Draw2DLine(vHip.X, vHip.Y, vNeck.X, vNeck.Y, cColor);
//
//			Canvas->Draw2DLine(vLBicep.X, vLBicep.Y, vNeck.X, vNeck.Y, cColor);     
//			Canvas->Draw2DLine(vRBicep.X, vRBicep.Y, vNeck.X, vNeck.Y, cColor);
//
//			Canvas->Draw2DLine(vLForearm.X, vLForearm.Y, vLBicep.X, vLBicep.Y, cColor);     
//			Canvas->Draw2DLine(vRForearm.X, vRForearm.Y, vRBicep.X, vRBicep.Y, cColor);
//
//			Canvas->Draw2DLine(vLthigh.X, vLthigh.Y, vHip.X, vHip.Y, cColor);     
//			Canvas->Draw2DLine(vRthigh.X, vRthigh.Y, vHip.X, vHip.Y, cColor);
//
//			Canvas->Draw2DLine(vLcalf.X, vLcalf.Y, vLthigh.X, vLthigh.Y, cColor);     
//			Canvas->Draw2DLine(vRcalf.X, vRcalf.Y, vRthigh.X, vRthigh.Y, cColor);
//
//			Canvas->Draw2DLine(vLFoot.X, vLFoot.Y, vLcalf.X, vLcalf.Y, cColor);     
//			Canvas->Draw2DLine(vRFoot.X, vRFoot.Y, vRcalf.X, vRcalf.Y, cColor);
//		}
//	}
//
//	static void ESP::BoneMESP(UCanvas* Canvas, APawn* Target, FColor cColor)
//	{
//		if(Target->Mesh != NULL)
//		{
//			FName nHeadBone = Target->Mesh->GetBoneName(35);
//			FVector vHead = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nHeadBone,0));
//
//			FName nHip = Target->Mesh->GetBoneName(1);
//			FVector vHip = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nHip, 0));
//
//			FName nNeck = Target->Mesh->GetBoneName(34);
//			FVector vNeck = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nNeck, 0));
//
//			FName nLBicep = Target->Mesh->GetBoneName(14);
//			FVector vLBicep = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLBicep, 0));
//
//			FName nRBicep = Target->Mesh->GetBoneName(46);
//			FVector vRBicep = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRBicep, 0));
//
//			FName nLForearm = Target->Mesh->GetBoneName(15);
//			FVector vLForearm = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLForearm ,0));
//
//			FName nRForearm = Target->Mesh->GetBoneName(47);
//			FVector vRForearm = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRForearm ,0));
//	
//			FName nLthigh = Target->Mesh->GetBoneName(2);
//			FVector vLthigh = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLthigh ,0));
//
//			FName nRthigh = Target->Mesh->GetBoneName(6);
//			FVector vRthigh = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRthigh ,0));
//
//			FName nLcalf = Target->Mesh->GetBoneName(3);
//			FVector vLcalf = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLcalf ,0));
//
//			FName nRcalf = Target->Mesh->GetBoneName(7);
//			FVector vRcalf = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRcalf ,0));
//
//			FName nLFoot = Target->Mesh->GetBoneName(4);
//			FVector vLFoot = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nLFoot ,0));
//
//			FName nRFoot = Target->Mesh->GetBoneName(8);
//			FVector vRFoot = WorldToScreen::World(Canvas, Target->Mesh->GetBoneLocation(nRFoot ,0));
//
//			Canvas->Draw2DLine(vNeck.X, vNeck.Y, vHead.X, vHead.Y, cColor);     
//			Canvas->Draw2DLine(vHip.X, vHip.Y, vNeck.X, vNeck.Y, cColor);
//
//			Canvas->Draw2DLine(vLBicep.X, vLBicep.Y, vNeck.X, vNeck.Y, cColor);     
//			Canvas->Draw2DLine(vRBicep.X, vRBicep.Y, vNeck.X, vNeck.Y, cColor);
//
//			Canvas->Draw2DLine(vLForearm.X, vLForearm.Y, vLBicep.X, vLBicep.Y, cColor);     
//			Canvas->Draw2DLine(vRForearm.X, vRForearm.Y, vRBicep.X, vRBicep.Y, cColor);
//
//			Canvas->Draw2DLine(vLthigh.X, vLthigh.Y, vHip.X, vHip.Y, cColor);     
//			Canvas->Draw2DLine(vRthigh.X, vRthigh.Y, vHip.X, vHip.Y, cColor);
//
//			Canvas->Draw2DLine(vLcalf.X, vLcalf.Y, vLthigh.X, vLthigh.Y, cColor);     
//			Canvas->Draw2DLine(vRcalf.X, vRcalf.Y, vRthigh.X, vRthigh.Y, cColor);
//
//			Canvas->Draw2DLine(vLFoot.X, vLFoot.Y, vLcalf.X, vLcalf.Y, cColor);     
//			Canvas->Draw2DLine(vRFoot.X, vRFoot.Y, vRcalf.X, vRcalf.Y, cColor);
//		}
//	}
//};