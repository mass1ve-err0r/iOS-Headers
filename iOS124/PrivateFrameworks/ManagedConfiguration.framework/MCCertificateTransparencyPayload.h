//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload
{
    NSArray *_hashDictionaries;
    NSArray *_domainRules;
}

+ (_Bool)isValidDomainRule:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSArray *domainRules; // @synthesize domainRules=_domainRules;
@property(readonly, nonatomic) NSArray *hashDictionaries; // @synthesize hashDictionaries=_hashDictionaries;
- (void).cxx_destruct;
- (id)subtitle1Label;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

