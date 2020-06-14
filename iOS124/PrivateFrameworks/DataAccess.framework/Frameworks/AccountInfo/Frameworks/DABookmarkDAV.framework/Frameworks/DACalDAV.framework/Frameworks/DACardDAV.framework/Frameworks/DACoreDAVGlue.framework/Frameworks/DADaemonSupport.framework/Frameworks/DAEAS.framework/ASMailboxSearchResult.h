//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASEmailItem.h>

@class NSArray, NSMutableArray;

@interface ASMailboxSearchResult : ASEmailItem
{
    NSMutableArray *_mClasses;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mClasses; // @synthesize mClasses=_mClasses;
- (void).cxx_destruct;
- (void)addClass:(id)arg1;
@property(readonly, nonatomic) NSArray *classes;
- (_Bool)_isSearchResult;
- (id)init;
- (id)description;

@end

