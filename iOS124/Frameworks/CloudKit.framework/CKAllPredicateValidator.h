//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKAllPredicateValidator : CKPredicateValidatorInstance
{
    NSArray *_validators;
}

@property(retain, nonatomic) NSArray *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidators:(id)arg1;

@end

