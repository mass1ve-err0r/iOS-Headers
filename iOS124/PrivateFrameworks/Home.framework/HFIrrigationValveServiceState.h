//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFServiceState.h>

@interface HFIrrigationValveServiceState : HFServiceState
{
    unsigned long long _type;
}

+ (unsigned long long)_typeForSystemActiveState:(_Bool)arg1 usageState:(long long)arg2;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isTransitioning;
- (long long)priority;
- (long long)primaryState;
- (id)stateTypeIdentifier;
- (id)initWithBatchReadResponse:(id)arg1;

@end

