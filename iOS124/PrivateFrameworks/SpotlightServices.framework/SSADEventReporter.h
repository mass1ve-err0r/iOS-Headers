//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSADEventReporter : NSObject
{
}

+ (void)reportBadDirectivesForModelType:(unsigned long long)arg1;
+ (void)reportModelDeletionForType:(unsigned long long)arg1;
+ (void)reportBadL3Models;
+ (void)reportBadL2Models;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)arg1;
+ (void)reportKey:(id)arg1;

@end

