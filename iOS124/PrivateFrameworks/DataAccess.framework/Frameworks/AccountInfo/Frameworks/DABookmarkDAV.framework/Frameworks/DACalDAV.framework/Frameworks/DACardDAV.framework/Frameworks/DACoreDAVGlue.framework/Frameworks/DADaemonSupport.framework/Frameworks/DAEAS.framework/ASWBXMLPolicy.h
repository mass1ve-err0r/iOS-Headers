//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy
{
    NSMutableDictionary *_policyData;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)perDomainDictsForPolicy;
- (void)_cleanUpPolicyData:(id)arg1;
- (void)_setPolicyData:(id)arg1;

@end

