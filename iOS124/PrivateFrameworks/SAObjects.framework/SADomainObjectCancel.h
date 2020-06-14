//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectCancelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCancel;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SADomainObject *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

