//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable>
{
}

+ (id)offerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)offer;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;
@property(copy, nonatomic) NSString *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

