//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem
{
    int _expectedResultType;
    NSArray *_stores;
    NSNumber *_status;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(nonatomic) int expectedResultType; // @synthesize expectedResultType=_expectedResultType;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *stores; // @synthesize stores=_stores;
- (void).cxx_destruct;
- (id)description;

@end

