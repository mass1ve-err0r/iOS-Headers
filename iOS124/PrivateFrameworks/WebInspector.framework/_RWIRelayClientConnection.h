//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/_RWIRelayToClientMessageProxy-Protocol.h>

@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy>
{
    _Bool _closed;
    _Bool _sleeping;
    id <_RWIRelayClientConnectionDelegate> _delegate;
    NSString *_tag;
}

@property(nonatomic) _Bool sleeping; // @synthesize sleeping=_sleeping;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <_RWIRelayClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dispatchRelayMessage:(id)arg1;
- (void)closeInternal;
- (void)sendMessage:(id)arg1;
- (void)closeFromConnection;
- (void)close;
- (void)_closeAndNotifyDelegate:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

