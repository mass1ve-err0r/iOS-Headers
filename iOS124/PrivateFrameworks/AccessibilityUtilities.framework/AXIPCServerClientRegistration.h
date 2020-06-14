//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AXIPCServerClientRegistrationDelegate, OS_dispatch_source;

@interface AXIPCServerClientRegistration : NSObject
{
    unsigned int _port;
    NSString *_identifier;
    NSObject<OS_dispatch_source> *_invalidationSource;
    id <AXIPCServerClientRegistrationDelegate> _delegate;
}

@property(nonatomic) __weak id <AXIPCServerClientRegistrationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *invalidationSource; // @synthesize invalidationSource=_invalidationSource;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 identifier:(id)arg2;

@end

