//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgePreferences/NSObject-Protocol.h>

@class UIViewController;
@protocol BPSBuddyControllerDelegate;

@protocol BPSBuddyController <NSObject>
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;
- (id <BPSBuddyControllerDelegate>)delegate;

@optional
+ (_Bool)controllerNeedsToRun;
- (_Bool)holdBeforeDisplaying;
- (_Bool)controllerAllowsNavigatingBackFrom;
- (_Bool)controllerAllowsNavigatingBackTo;
- (UIViewController *)viewController;
@end
