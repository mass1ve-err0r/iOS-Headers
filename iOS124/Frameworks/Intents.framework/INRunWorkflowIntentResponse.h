//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INRunWorkflowIntentResponseExport-Protocol.h>

@class INArchivedObject, NSArray, NSNumber, NSString, _INPBRunWorkflowIntentResponse;

@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>
{
    _INPBRunWorkflowIntentResponse *_responseMessagePBRepresentation;
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) NSArray *steps;
@property(copy, nonatomic) NSNumber *continueRunning;
@property(copy, nonatomic) NSNumber *waitingForResume;
@property(copy, nonatomic) NSString *utterance;
@property(copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property(copy, nonatomic) INArchivedObject *underlyingIntent;
- (id)_responseMessagePBRepresentation;
- (_Bool)_shouldForwardIntentToApp;
- (long long)_intentResponseCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

