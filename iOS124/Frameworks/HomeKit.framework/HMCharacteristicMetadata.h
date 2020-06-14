//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFUnfairLock, NSArray, NSNumber, NSString, NSUUID;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSNumber *_maxLength;
    NSString *_format;
    NSString *_units;
    NSString *_manufacturerDescription;
    NSArray *_validValues;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(copy, nonatomic) NSString *manufacturerDescription; // @synthesize manufacturerDescription=_manufacturerDescription;
@property(copy, nonatomic) NSString *units; // @synthesize units=_units;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

