//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessageStatusChatItem.h>

@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem
{
    IMBalloonPluginDataSource *_dataSource;
}

@property(readonly, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 dataSource:(id)arg2;

@end

