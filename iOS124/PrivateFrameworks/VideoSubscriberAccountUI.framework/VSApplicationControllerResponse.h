//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSSet, NSString, VSAccountAuthentication;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponse : NSObject
{
    NSString *_authenticationScheme;
    NSString *_responseStatusCode;
    NSString *_responseString;
    NSNumber *_expectedAction;
    VSAccountAuthentication *_accountAuthentication;
    NSSet *_accountChannelIDs;
    NSArray *_subscriptionsToAdd;
    NSArray *_subscriptionsToRemoveByBundleID;
}

@property(copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID; // @synthesize subscriptionsToRemoveByBundleID=_subscriptionsToRemoveByBundleID;
@property(copy, nonatomic) NSArray *subscriptionsToAdd; // @synthesize subscriptionsToAdd=_subscriptionsToAdd;
@property(copy, nonatomic) NSSet *accountChannelIDs; // @synthesize accountChannelIDs=_accountChannelIDs;
@property(retain, nonatomic) VSAccountAuthentication *accountAuthentication; // @synthesize accountAuthentication=_accountAuthentication;
@property(copy, nonatomic) NSNumber *expectedAction; // @synthesize expectedAction=_expectedAction;
@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(copy, nonatomic) NSString *responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
- (void).cxx_destruct;
- (id)description;

@end

