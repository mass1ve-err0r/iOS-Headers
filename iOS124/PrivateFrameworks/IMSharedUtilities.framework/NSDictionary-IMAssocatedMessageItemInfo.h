//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSNumber, NSString;

@interface NSDictionary (IMAssocatedMessageItemInfo)
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;
+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginDisplayName;
@property(readonly, nonatomic) NSString *__im_associatedMessagePluginBundleID;
@property(readonly, nonatomic) NSNumber *__im_associatedMessageContentType;
@property(readonly, nonatomic) NSString *__im_associatedMessageSummary;
@end

