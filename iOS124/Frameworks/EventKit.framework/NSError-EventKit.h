//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (EventKit)
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithCADResult:(int)arg1;
+ (id)_defaultDescriptionForCode:(long long)arg1;
@end

