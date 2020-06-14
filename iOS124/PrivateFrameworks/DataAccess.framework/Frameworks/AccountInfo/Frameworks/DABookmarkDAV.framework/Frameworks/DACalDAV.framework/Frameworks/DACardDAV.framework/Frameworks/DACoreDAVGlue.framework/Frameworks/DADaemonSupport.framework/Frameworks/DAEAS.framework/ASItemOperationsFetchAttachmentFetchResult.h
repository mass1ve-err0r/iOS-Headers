//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASItemOperationsFetchAttachmentProperties, NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem
{
    NSNumber *_status;
    NSString *_fileReference;
    ASItemOperationsFetchAttachmentProperties *_properties;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) ASItemOperationsFetchAttachmentProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *fileReference; // @synthesize fileReference=_fileReference;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

