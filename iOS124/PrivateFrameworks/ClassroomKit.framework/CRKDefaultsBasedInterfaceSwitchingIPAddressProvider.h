//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;
@protocol CRKIPAddressProviding;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    id <CRKIPAddressProviding> mBaseProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *IPAddress;
- (_Bool)prefersEthernet;
- (void)makeProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

