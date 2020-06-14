//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate, OS_dispatch_queue;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol>
{
    _Bool _suspended;
    _Bool _invalidated;
    id <NRNSXPCListenerDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)serverConnectionWithClientConnection:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

