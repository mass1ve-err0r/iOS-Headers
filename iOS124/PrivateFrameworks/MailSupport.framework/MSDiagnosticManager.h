//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;

@interface MSDiagnosticManager : NSObject
{
    AWDServerConnection *_awdServerConnection;
}

+ (id)log;
@property(readonly, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
- (void).cxx_destruct;
- (void)submitFetchMetricsReport:(id)arg1;
- (void)submitComposeAttachmentReport:(id)arg1;
- (void)submitMessageLoadingReport:(id)arg1;
- (void)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(CDUnknownBlockType)arg2;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4;
- (id)init;

@end

