//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>
#import <Silex/SXConditionValidatorManager-Protocol.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>
{
    NSMutableArray *_validators;
}

@property(readonly, nonatomic) NSMutableArray *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (_Bool)validateCondition:(id)arg1 context:(id)arg2;
- (void)addConditionValidator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

