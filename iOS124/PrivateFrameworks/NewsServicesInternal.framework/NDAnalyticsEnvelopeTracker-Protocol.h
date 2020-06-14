//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsServicesInternal/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError;

@protocol NDAnalyticsEnvelopeTracker <NSObject>
- (void)registerEnvelopeContentTypesAsDropped:(NSDictionary *)arg1 forReason:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)registerEnvelopeContentTypesAsUploaded:(NSDictionary *)arg1;
- (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(NSArray *)arg1;
- (void)registerEnvelopeContentTypesAsPreparedForUpload:(NSArray *)arg1;
- (void)registerEnvelopesAsReceivedByUploader:(NSArray *)arg1;
- (void)registerEnvelopesAsSubmittedToUploader:(NSArray *)arg1;
- (void)registerEnvelopesAsCreated:(NSArray *)arg1;
- (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;
@end

