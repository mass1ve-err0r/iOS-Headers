//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol NEIPSecSASessionDelegate, OS_dispatch_queue;

@interface NEIPSecSASession : NSObject
{
    NSString *_name;
    NSObject<NEIPSecSASessionDelegate> *_delegate;
    NSMutableArray *_securityAssociations;
    NSMutableArray *_larvalSAs;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *internalDelegateQueue; // @synthesize internalDelegateQueue=_internalDelegateQueue;
@property(retain) NSMutableArray *larvalSAs; // @synthesize larvalSAs=_larvalSAs;
@property(retain) NSMutableArray *securityAssociations; // @synthesize securityAssociations=_securityAssociations;
@property __weak NSObject<NEIPSecSASessionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (_Bool)migrateSA:(id)arg1;
- (_Bool)removeSA:(id)arg1;
- (_Bool)addSA:(id)arg1;
- (_Bool)updateSA:(id)arg1;
- (_Bool)addLarvalSA:(id)arg1;
- (void)invalidate;
- (void)removeAllSAs;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

@end

