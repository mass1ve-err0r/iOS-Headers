//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKDigestVerification : NSObject
{
}

+ (_Bool)digest:(id)arg1 matchesHash:(id)arg2;
+ (id)computeVerificationHashForDigest:(id)arg1;
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;

@end

