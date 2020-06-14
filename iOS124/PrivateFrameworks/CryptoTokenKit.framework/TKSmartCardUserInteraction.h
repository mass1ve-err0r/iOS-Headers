//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>
{
    id <TKSmartCardUserInteractionDelegate> _delegate;
    double _initialTimeout;
    double _interactionTimeout;
}

+ (_Bool)supportsSecureCoding;
@property double interactionTimeout; // @synthesize interactionTimeout=_interactionTimeout;
@property double initialTimeout; // @synthesize initialTimeout=_initialTimeout;
@property __weak id <TKSmartCardUserInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)cancel;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

