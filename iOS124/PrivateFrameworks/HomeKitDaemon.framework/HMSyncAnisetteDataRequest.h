//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface HMSyncAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    NSData *_simData;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(copy, nonatomic) NSData *simData; // @synthesize simData=_simData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

