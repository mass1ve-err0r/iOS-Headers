//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSString;

@interface SAHLWorkoutState : AceObject <SABackgroundContextObject>
{
}

+ (id)workoutStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)workoutState;
@property(copy, nonatomic) NSString *workoutStateValue;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

