#include<stdio.h>
int main(){
		int sympton;
	printf("loptop=1\nsmartphone=2\nRouter\n");
	int device;
//	int amount;
	printf("enter your device(1-3) : ");
	scanf("%d", &device);
	switch(device){
		case 1 : 
			printf("Wont turn on=10\nOverheating=11\nSlow performance");
			
			printf("enter sympton : ");
			scanf("%d", &sympton);
			switch(sympton)
			case 10 : printf("Checkpoweradapterandbatteryconnections.TryadifferentpoweroutletRemovebatteryandholdpowerbuttonfor30seconds.");
			case 11 : printf("Cleanfansandensureproperventilation.Checkfordustaccumulation.Useacoolingpad.MonitorCPUusage.");
			case 12 : printf("Runsystemdiagnosticsandcheckresourceusage.Scanformalware.UpgradeRAMifnecessary.Defragmentharddrive");
			break;
		case 2 : 
		      printf("20 for battery drains fast\n21for No signal\n22 for Touchscreen unresponsive\n");
			printf("enter sympton  : ");
			scanf("%d", &sympton);
			switch(sympton)
			case 20 : printf("Runbatterycalibrationtoolandcheckforbackgroundapps.Reducescreenbrightness.Disableunnecessaryconnectivityfeatures.");
		     case 21 : printf("CheckSIMcardandnetworksettings.Toggleairplanemode.Updatecarriersettings.Checkfornetworkoutages.");
		     case 22 : printf("Performscreencalibrationtest.Cleanscreensurface.Restartdevice.Checkforsoftwareupdates.");
		     break;
		case 3 :     
		      printf("30 for No internet connection\n31 for WIi-FI Signal weak\n32 for Device cannot connect\n");
		      	printf("enter sympton  : ");
			scanf("%d", &sympton);
		      switch(sympton)
		      case 30 : printf("CheckISPstatusandroutercables.Restartmodemandrouter.CheckWANconnectionsettings.Verifyinternetsubscription.");
		      case 31 : printf("Repositionrouterandcheckantennaconnections.Reduceinterferencefromotherdevices.ChangeWi-Fichannel.Considerrange");
	         case 32 : printf("CheckMACfilteringandDHCPsettings.VerifyWi-Fipassword.Restartconnectingdevice.CheckforIPconficts.");
    default : 
	         printf("thank you"); 	
}
	return 0;
}
