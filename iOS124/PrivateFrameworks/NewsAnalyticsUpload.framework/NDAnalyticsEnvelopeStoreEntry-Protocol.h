//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsAnalyticsUpload/NSCopying-Protocol.h>

@class NSDate, NSString;

@protocol NDAnalyticsEnvelopeStoreEntry <NSCopying>
@property(readonly, nonatomic) int envelopeContentType;
@property(readonly, copy, nonatomic) NSDate *envelopeSubmissionDate;
@property(readonly, copy, nonatomic) NSString *envelopeIdentifier;
@end

