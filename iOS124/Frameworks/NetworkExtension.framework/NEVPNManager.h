//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEConfiguration, NEVPNConnection, NEVPNProtocol, NSArray, NSString;

@interface NEVPNManager : NSObject <NEPrettyDescription>
{
    _Bool _hasLoaded;
    _Bool _notificationSent;
    NEVPNConnection *_connection;
    NEConfiguration *_configuration;
}

+ (id)mapError:(id)arg1;
+ (id)sharedManager;
+ (id)loadedManagers;
@property _Bool notificationSent; // @synthesize notificationSent=_notificationSent;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(copy) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEVPNConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) _Bool enabled;
@property(getter=isOnDemandEnabled) _Bool onDemandEnabled;
@property(copy) NSArray *onDemandRules;
@property(retain) NEVPNProtocol *protocol;
@property(retain) NEVPNProtocol *protocolConfiguration;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)additionalSetup;
- (_Bool)isProtocolTypeValid:(long long)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithGrade:(long long)arg1 connection:(id)arg2;
- (id)init;

@end

