//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/NSXPCConnectionDelegate-Protocol.h>

@class NSString;

@interface PLConnectionDebugger : NSObject <NSXPCConnectionDelegate>
{
}

+ (_Bool)enabled;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

