//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMBalloonPluginDataSource, NSString;

@protocol IMPluginChatItemProtocol <NSObject>
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property(readonly, retain, nonatomic) NSString *type;
@end

