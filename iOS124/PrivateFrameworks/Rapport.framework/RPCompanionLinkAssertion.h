//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkAssertion : NSObject <NSSecureCoding>
{
    NSString *_assertionID;
    RPCompanionLinkClient *_client;
    NSString *_destinationID;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *assertionID; // @synthesize assertionID=_assertionID;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

