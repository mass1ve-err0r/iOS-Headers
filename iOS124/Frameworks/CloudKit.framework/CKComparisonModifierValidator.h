//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonModifierValidator : CKPredicateValidatorInstance
{
    unsigned long long _modifier;
}

@property(nonatomic) unsigned long long modifier; // @synthesize modifier=_modifier;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithModifier:(unsigned long long)arg1;

@end
