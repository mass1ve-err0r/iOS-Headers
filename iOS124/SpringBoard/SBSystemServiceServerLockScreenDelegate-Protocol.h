//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSystemServiceServerDelegate-Protocol.h"

@class SBSUnlockOptions, SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerLockScreenDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 requestPasscodeUnlockUIWithOptions:(SBSUnlockOptions *)arg2 forClient:(id <FBSServiceFacilityClientHandle>)arg3 withCompletion:(void (^)(_Bool))arg4;
@end

