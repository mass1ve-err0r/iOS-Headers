//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class NSArray, NSStream;

@protocol HUIDCManagerSecurityDelegate <NSObject>
- (_Bool)shouldTrustStream:(NSStream *)arg1;
- (NSArray *)securityTrustChainForStream:(NSStream *)arg1;
@end

