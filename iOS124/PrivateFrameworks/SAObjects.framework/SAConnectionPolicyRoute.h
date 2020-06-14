//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>
{
}

+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicyRoute;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSNumber *timeout;
@property(copy, nonatomic) NSString *routeId;
@property(copy, nonatomic) NSString *resolverProtocol;
@property(copy, nonatomic) NSString *resolver;
@property(nonatomic) long long priority;
@property(copy, nonatomic) NSNumber *mptcp;
@property(copy, nonatomic) NSString *host;
@property(copy, nonatomic) NSString *connectionId;
@property(copy, nonatomic) NSString *cname;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

