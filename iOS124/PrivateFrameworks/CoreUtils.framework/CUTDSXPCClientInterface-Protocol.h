//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUTDSEndpoint;

@protocol CUTDSXPCClientInterface
- (void)xpcTDSSeekerEndpointLost:(CUTDSEndpoint *)arg1;
- (void)xpcTDSSeekerEndpointFound:(CUTDSEndpoint *)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
@end

