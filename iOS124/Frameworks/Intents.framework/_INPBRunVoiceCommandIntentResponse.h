//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRunVoiceCommandIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBArchivedObject, _INPBDictionary;

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <_INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int continueRunning:1;
        unsigned int customResponsesDisabled:1;
        unsigned int intentCategory:1;
        unsigned int interstitialDisabled:1;
        unsigned int toggleState:1;
    } _has;
    _Bool _continueRunning;
    _Bool _customResponsesDisabled;
    _Bool _interstitialDisabled;
    int _intentCategory;
    int _toggleState;
    NSString *_appBundleId;
    NSString *_localizedAppName;
    _INPBDictionary *_parameters;
    NSString *_responseTemplate;
    NSArray *_steps;
    _INPBArchivedObject *_underlyingIntent;
    _INPBArchivedObject *_underlyingIntentResponse;
    NSString *_underlyingIntentTitle;
    NSString *_verb;
}

+ (Class)stepType;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSString *underlyingIntentTitle; // @synthesize underlyingIntentTitle=_underlyingIntentTitle;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse; // @synthesize underlyingIntentResponse=_underlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent; // @synthesize underlyingIntent=_underlyingIntent;
@property(nonatomic) int toggleState; // @synthesize toggleState=_toggleState;
@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(copy, nonatomic) NSString *responseTemplate; // @synthesize responseTemplate=_responseTemplate;
@property(retain, nonatomic) _INPBDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property(nonatomic) _Bool interstitialDisabled; // @synthesize interstitialDisabled=_interstitialDisabled;
@property(nonatomic) int intentCategory; // @synthesize intentCategory=_intentCategory;
@property(nonatomic) _Bool customResponsesDisabled; // @synthesize customResponsesDisabled=_customResponsesDisabled;
@property(nonatomic) _Bool continueRunning; // @synthesize continueRunning=_continueRunning;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasVerb;
@property(readonly, nonatomic) _Bool hasUnderlyingIntentTitle;
@property(readonly, nonatomic) _Bool hasUnderlyingIntentResponse;
@property(readonly, nonatomic) _Bool hasUnderlyingIntent;
- (int)StringAsToggleState:(id)arg1;
- (id)toggleStateAsString:(int)arg1;
@property(nonatomic) _Bool hasToggleState;
- (id)stepAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(readonly, nonatomic) _Bool hasResponseTemplate;
@property(readonly, nonatomic) _Bool hasParameters;
@property(readonly, nonatomic) _Bool hasLocalizedAppName;
@property(nonatomic) _Bool hasInterstitialDisabled;
- (int)StringAsIntentCategory:(id)arg1;
- (id)intentCategoryAsString:(int)arg1;
@property(nonatomic) _Bool hasIntentCategory;
@property(nonatomic) _Bool hasCustomResponsesDisabled;
@property(nonatomic) _Bool hasContinueRunning;
@property(readonly, nonatomic) _Bool hasAppBundleId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

