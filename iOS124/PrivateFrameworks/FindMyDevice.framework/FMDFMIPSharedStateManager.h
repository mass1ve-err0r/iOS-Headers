//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMDFMIPSharedStateManager : NSObject
{
}

+ (id)_fmipSharedFileURL;
+ (_Bool)_removeSharedInfo;
+ (_Bool)_writeSharedInfo:(id)arg1;
+ (id)_readSharedInfo;
+ (unsigned long long)lostModeType;
+ (_Bool)fmipActive;
+ (void)recalculateLostMode;
+ (void)setFMiPActive:(_Bool)arg1;

@end
