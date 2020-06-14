//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent
{
    double _duration;
    NSError *_error;
    NSString *_siriSessionIdentifier;
}

@property(copy, nonatomic) NSString *siriSessionIdentifier; // @synthesize siriSessionIdentifier=_siriSessionIdentifier;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingType;
- (unsigned short)rtcReportingCategory;

@end

