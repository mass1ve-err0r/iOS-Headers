//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSScene, SBAlert, SBAlertManager, SBAlertWindow, UIScreen;

@protocol SBAlertManagerDelegate <NSObject>
- (double)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(UIScreen *)arg1;

@optional
- (unsigned long long)alertManager:(SBAlertManager *)arg1 defaultSupportedInterfaceOrientationsForAlert:(SBAlert *)arg2;
- (long long)alertManager:(SBAlertManager *)arg1 defaultInterfaceOrientationForPresentationOfAlert:(SBAlert *)arg2;
- (_Bool)alertManager:(SBAlertManager *)arg1 defaultShouldAutorotateForAlert:(SBAlert *)arg2;
- (SBAlertWindow *)alertManager:(SBAlertManager *)arg1 newAlertWindowForScene:(FBSScene *)arg2;
- (_Bool)alertManager:(SBAlertManager *)arg1 shouldDeactivateDismissedAlert:(SBAlert *)arg2;
@end

