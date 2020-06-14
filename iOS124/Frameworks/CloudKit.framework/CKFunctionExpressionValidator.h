//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance
{
    NSString *_functionName;
    NSArray *_argumentValidators;
}

@property(retain, nonatomic) NSArray *argumentValidators; // @synthesize argumentValidators=_argumentValidators;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithFunctionName:(id)arg1 validators:(id)arg2;

@end

