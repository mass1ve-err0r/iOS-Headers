//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeech/NSCopying-Protocol.h>
#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSString;
@protocol TTSSpeechService;

@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying>
{
    id <TTSSpeechService> _service;
    _Bool _isDefault;
    _Bool _isFallbackDefault;
    _Bool _excludeInAvailableVoiceList;
    _Bool _canBeDownloaded;
    _Bool _isCombinedFootprint;
    _Bool _useVoiceBooster;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    long long _footprint;
    long long _gender;
    NSString *_nonCombinedVoiceId;
    NSString *_serviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(nonatomic) _Bool useVoiceBooster; // @synthesize useVoiceBooster=_useVoiceBooster;
@property(retain, nonatomic) NSString *nonCombinedVoiceId; // @synthesize nonCombinedVoiceId=_nonCombinedVoiceId;
@property(readonly, nonatomic) _Bool isCombinedFootprint; // @synthesize isCombinedFootprint=_isCombinedFootprint;
@property(nonatomic) _Bool canBeDownloaded; // @synthesize canBeDownloaded=_canBeDownloaded;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) _Bool excludeInAvailableVoiceList; // @synthesize excludeInAvailableVoiceList=_excludeInAvailableVoiceList;
@property(readonly, nonatomic) _Bool isFallbackDefault; // @synthesize isFallbackDefault=_isFallbackDefault;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)_initializeVoiceBooster;
- (void)setService:(id)arg1;
- (id)service;
- (void)_routeChange:(id)arg1;
- (id)init;

@end

