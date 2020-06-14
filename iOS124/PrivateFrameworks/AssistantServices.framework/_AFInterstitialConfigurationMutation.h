//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInterstitialConfigurationMutating-Protocol.h>

@class AFInterstitialConfiguration, NSString;

@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating>
{
    AFInterstitialConfiguration *_baseModel;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    _Bool _isVoiceTrigger;
    _Bool _isDucking;
    _Bool _isTwoShot;
    unsigned long long _speechEndHostTime;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasRecordRoute:1;
        unsigned int hasIsVoiceTrigger:1;
        unsigned int hasIsDucking:1;
        unsigned int hasIsTwoShot:1;
        unsigned int hasSpeechEndHostTime:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setSpeechEndHostTime:(unsigned long long)arg1;
- (void)setIsTwoShot:(_Bool)arg1;
- (void)setIsDucking:(_Bool)arg1;
- (void)setIsVoiceTrigger:(_Bool)arg1;
- (void)setRecordRoute:(id)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

