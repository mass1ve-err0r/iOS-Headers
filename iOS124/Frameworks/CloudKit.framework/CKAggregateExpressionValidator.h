//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance
{
    NSArray *_subExpressionValidators;
}

@property(retain, nonatomic) NSArray *subExpressionValidators; // @synthesize subExpressionValidators=_subExpressionValidators;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidators:(id)arg1;

@end

