//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOptionsValidator : CKPredicateValidatorInstance
{
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(unsigned long long)arg1;

@end

