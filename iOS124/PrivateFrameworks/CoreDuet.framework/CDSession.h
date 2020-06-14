//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDClientConnection;

@interface CDSession : NSObject
{
    CDDClientConnection *_cddClientConnection;
    unsigned long long _clientId;
}

+ (id)sharedSessionWithClientId:(unsigned long long)arg1;
@property(readonly) unsigned long long clientId; // @synthesize clientId=_clientId;
@property(readonly) CDDClientConnection *cddClientConnection; // @synthesize cddClientConnection=_cddClientConnection;
- (void).cxx_destruct;
- (_Bool)setGlancesLingeredOn:(id)arg1 error:(id *)arg2;
- (_Bool)setActiveComplications:(id)arg1 error:(id *)arg2;
- (_Bool)setNonAppBundlIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)setNonAppBundleIdWithError:(id)arg1 error:(id *)arg2;
- (_Bool)broadcastSystemDataWithError:(id *)arg1;
- (id)getDeviceFromDescription:(id)arg1 error:(id *)arg2;
- (_Bool)setDevicesChangedHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)copyDevicesUncached;
- (id)getDevices;
- (id)getDevicesInternal;
- (_Bool)registerForDeviceChanges;
- (id)attributeComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)attributeFromRepresentation:(id)arg1 error:(id *)arg2;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (id)attributeFromFullname:(id)arg1 error:(id *)arg2;
- (_Bool)deleteClientDataWithError:(id *)arg1;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id *)arg4;
- (id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id *)arg4;
- (id)budgetForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id *)arg4;
- (id)budgetNamesWithError:(id *)arg1;
- (id)attributeNamesWithError:(id *)arg1;
- (id)description;
- (id)initWithClientId:(unsigned long long)arg1 enableCaching:(_Bool)arg2;
- (id)initWithClientId:(unsigned long long)arg1;
- (id)init;

@end

