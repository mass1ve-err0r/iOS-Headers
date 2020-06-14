//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSDate, NSError, NSNumber;

@interface HMDCharacteristicResponse : HMFObject
{
    HMDCharacteristicRequest *_request;
    id _value;
    NSError *_error;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
}

+ (id)responseWithRequest:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDCharacteristicRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

