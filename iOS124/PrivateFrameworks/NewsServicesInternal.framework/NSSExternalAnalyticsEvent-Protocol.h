//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsServicesInternal/NFCopying-Protocol.h>

@class NSDictionary, NSSExternalAnalyticsRequestMetadata, NSString;

@protocol NSSExternalAnalyticsEvent <NFCopying>
@property(readonly, copy, nonatomic) NSDictionary *requestQueryParameters;
- (NSSExternalAnalyticsRequestMetadata *)requestMetadataWithExternalAnalyticsIdentifier:(NSString *)arg1;
@end

