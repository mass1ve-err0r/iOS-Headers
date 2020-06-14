//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetTaskAttributeIntentExport-Protocol.h>

@class INSpatialEventTrigger, INTask, INTemporalEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setTemporalEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setSpatialEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
- (void)setStatus:(long long)arg1;
@property(readonly, nonatomic) long long status;
- (void)setTargetTask:(id)arg1;
@property(readonly, copy, nonatomic) INTask *targetTask;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

