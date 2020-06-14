//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber, NSString;

@interface ASChangedFolderStore : ASItem
{
    NSNumber *_status;
    NSString *_syncKey;
    NSArray *_updatedFolders;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSArray *updatedFolders; // @synthesize updatedFolders=_updatedFolders;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)description;

@end

