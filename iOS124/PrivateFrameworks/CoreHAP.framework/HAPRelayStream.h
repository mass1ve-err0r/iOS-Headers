//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPStreamDelegate;

@interface HAPRelayStream : HMFObject
{
    id <HAPStreamDelegate> _delegate;
    unsigned long long _mtu;
}

@property(readonly, nonatomic) unsigned long long mtu; // @synthesize mtu=_mtu;
@property __weak id <HAPStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)writeData:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)open;

@end

