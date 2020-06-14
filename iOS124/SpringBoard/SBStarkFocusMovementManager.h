//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARInputDeviceTouchpad, CARSessionStatus;

@interface SBStarkFocusMovementManager : NSObject
{
    CARSessionStatus *_sessionStatus;
    CARInputDeviceTouchpad *_currentTouchpad;
    unsigned long long _currentSenderID;
}

- (void).cxx_destruct;
- (_Bool)isMovementAllowedForHeading:(unsigned long long)arg1 direction:(unsigned long long)arg2 isRTL:(_Bool)arg3 isLeftHandDrive:(_Bool)arg4;
- (void)performHapticFeedbackForSenderID:(unsigned long long)arg1;
- (id)init;

@end

