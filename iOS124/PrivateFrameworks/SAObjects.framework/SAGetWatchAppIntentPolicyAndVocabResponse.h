//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAGetWatchAppIntentPolicyAndVocabResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getWatchAppIntentPolicyAndVocabResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getWatchAppIntentPolicyAndVocabResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSDictionary *aceAppBundleInfos;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

