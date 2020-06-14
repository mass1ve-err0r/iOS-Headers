//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAction.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge>
{
    HMCharacteristic *_characteristic;
    id _targetValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTargetValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

