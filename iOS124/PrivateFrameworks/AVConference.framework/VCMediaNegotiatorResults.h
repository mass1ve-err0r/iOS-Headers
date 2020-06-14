//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResults : NSObject
{
    _Bool _supportsDynamicMaxBitrate;
    NSString *_remoteUserAgent;
    NSString *_remoteBasebandCodec;
    unsigned int _remoteBasebandCodecSampleRate;
    NSMutableDictionary *_bandwidthSettings;
    _Bool _SIPDisabled;
    _Bool _secureMessagingRequired;
}

@property(nonatomic) _Bool secureMessagingRequired; // @synthesize secureMessagingRequired=_secureMessagingRequired;
@property(nonatomic) _Bool SIPDisabled; // @synthesize SIPDisabled=_SIPDisabled;
@property(retain, nonatomic) NSMutableDictionary *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int remoteBasebandCodecSampleRate; // @synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate;
@property(retain, nonatomic) NSString *remoteBasebandCodec; // @synthesize remoteBasebandCodec=_remoteBasebandCodec;
@property(retain, nonatomic) NSString *remoteUserAgent; // @synthesize remoteUserAgent=_remoteUserAgent;
@property(nonatomic) _Bool supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate;
- (void)dealloc;
- (id)init;

@end

