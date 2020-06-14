//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LADaemonXPC-Protocol.h"

@class NSMutableDictionary;

@interface Daemon : NSObject <LADaemonXPC>
{
    NSMutableDictionary *_contextMaps;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;
- (void)connectToExistingContext:(id)arg1 userId:(unsigned int)arg2 connection:(id)arg3 checkEntitlementBlock:(CDUnknownBlockType)arg4 callback:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 processId:(int)arg3 userId:(unsigned int)arg4 auditSessionId:(int)arg5 auditToken:(CDStruct_4c969caf)arg6 cApiOrigin:(_Bool)arg7 checkEntitlementBlock:(CDUnknownBlockType)arg8 invalidationBlock:(CDUnknownBlockType)arg9 connectionHash:(unsigned long long)arg10 reply:(CDUnknownBlockType)arg11;
- (id)init;

@end

